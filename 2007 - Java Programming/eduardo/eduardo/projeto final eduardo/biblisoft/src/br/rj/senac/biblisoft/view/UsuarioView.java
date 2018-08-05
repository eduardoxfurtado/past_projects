package br.rj.senac.biblisoft.view;

import java.awt.Choice;
import java.awt.ComponentOrientation;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Rectangle;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.ListSelectionModel;

import br.rj.senac.biblisoft.control.CursoController;
import br.rj.senac.biblisoft.control.UsuarioController;
import br.rj.senac.biblisoft.exception.BusinessException;
import br.rj.senac.biblisoft.exception.DAOException;
import br.rj.senac.biblisoft.exception.DatabaseException;
import br.rj.senac.biblisoft.model.Curso;
import br.rj.senac.biblisoft.model.Usuario;
import br.rj.senac.biblisoft.model.table.UsuarioTableModel;

public class UsuarioView extends EntityModelView {

	private static final long serialVersionUID = 1L;
	private JPanel jContentPane = null;
	private JButton insertBut = null;
	private JButton deleteBut = null;
	private JTextField nomeField = null;
	private JTextField idField = null;
	private JButton updateBut = null;

	private JButton selectBut = null;
	private JScrollPane jScrollPane = null;
	private JTable jTable1 = null; // @jve:decl-index=0:visual-constraint="-211,288"
	private UsuarioTableModel usuarioModel = new UsuarioTableModel(
			UsuarioTableModel.dados, UsuarioTableModel.colunas);
	private JLabel nomeLab = null;
	private JLabel idLab = null;
	private JLabel matriculaLab = null;
	private JTextField matriculaField = null;
	private JLabel cursoLab = null;
	public static Choice cursoChoice = null;
	private UsuarioController usuarioController = new UsuarioController(); // @jve:decl-index=0:

	private JButton getInsertBut() {
		if (insertBut == null) {
			insertBut = new JButton();
			insertBut.setBounds(new Rectangle(406, 11, 116, 24));
			insertBut.setFont(new Font("Comic Sans MS", Font.BOLD, 12));
			insertBut.setText("CADASTRAR");
			insertBut.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {

					Usuario usuario = new Usuario();
					CursoController cursoController = new CursoController();

					usuario.setNome(getNomeField().getText());
					usuario.setMatricula(getMatriculaField().getText());
					usuario.setCursoNome(getCursoChoice().getSelectedItem());

					Curso curso = new Curso();
					curso.setNome(getCursoChoice().getSelectedItem());
					Integer cursoId = null;

					try {
						cursoId = cursoController.getId(curso);
					} catch (DAOException e2) {
						e2.printStackTrace();
					}

					curso.setId(cursoId);

					usuario.setCursoId(curso.getId());

					try {
						usuarioController.inserirUsuario(usuario);
					} catch (BusinessException e1) {

						e1.printStackTrace();
					} catch (DatabaseException e1) {

						e1.printStackTrace();
					}

					try {
						usuario.setId(usuarioController.getId(usuario));
					} catch (BusinessException e1) {

						e1.printStackTrace();
					} catch (DatabaseException e1) {

						e1.printStackTrace();
					}

					String[] linha = new String[] { "" + usuario.getId(),
							usuario.getNome(), usuario.getMatricula(),
							usuario.getCursoNome() };

					usuarioModel.addRow(linha);

				}
			});

		}
		return insertBut;
	}

	private JButton getDeleteBut() {
		if (deleteBut == null) {
			deleteBut = new JButton();
			deleteBut.setBounds(new Rectangle(406, 193, 116, 24));
			deleteBut.setText("DELETAR");
			deleteBut.setFont(new Font("Comic Sans MS", Font.BOLD, 12));
			deleteBut.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					Usuario usuario = new Usuario();

					Integer id = null;
					int x;
					boolean oi;
					for (x = 0; x < jTable1.getRowCount(); x++) {
						oi = jTable1.isRowSelected(x);
						if (oi == true) {

							String y = (String) jTable1.getValueAt(x, 0);
							id = Integer.parseInt(y);
							usuario.setId(id);
							try {
								usuarioController.excluirUsuario(usuario);
							} catch (BusinessException e1) {

								e1.printStackTrace();
							} catch (DatabaseException e1) {

								e1.printStackTrace();
							}

							usuarioModel.removeRow(x);

						}

					}

				}
			});
		}
		return deleteBut;
	}

	public JTextField getNomeField() {
		if (nomeField == null) {
			nomeField = new JTextField();
			nomeField.setBounds(new Rectangle(82, 13, 175, 16));
			nomeField.setFont(new Font("Comic Sans MS", Font.PLAIN, 11));
		}
		return nomeField;
	}

	public JTextField getIdField() {
		if (idField == null) {
			idField = new JTextField();
			idField.setBounds(new Rectangle(82, 34, 72, 16));
			idField.setEditable(false);
			idField.setFont(new Font("Comic Sans MS", Font.PLAIN, 11));
		}
		return idField;
	}

	private JButton getUpdateBut() {
		if (updateBut == null) {
			updateBut = new JButton();
			updateBut.setBounds(new Rectangle(406, 118, 116, 24));
			updateBut.setText("ALTERAR");
			updateBut.setFont(new Font("Comic Sans MS", Font.BOLD, 12));
			updateBut.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					Usuario usuario = new Usuario();
					CursoController cursoController = new CursoController();

					usuario.setNome(getNomeField().getText());
					usuario.setMatricula(getMatriculaField().getText());
					usuario.setCursoNome(getCursoChoice().getSelectedItem());
					Curso curso = new Curso();
					curso.setNome(getCursoChoice().getSelectedItem());

					try {
						curso.setId(cursoController.getId(curso));
					} catch (DAOException e2) {

						e2.printStackTrace();
					}

					usuario.setCursoId(curso.getId());

					usuario.setId(Integer.parseInt(getIdField().getText()));

					try {
						usuarioController.alterarUsuario(usuario);
					} catch (BusinessException e1) {

						e1.printStackTrace();
					} catch (DatabaseException e1) {

						e1.printStackTrace();
					}

					int z = Integer.parseInt(getIdField().getText());
					usuario.setId(z);
					String[] linha = new String[] { "" + usuario.getId(),
							usuario.getNome(), usuario.getMatricula(),
							usuario.getCursoNome() };

					usuarioModel.addRow(linha);

					int idd = -99999;
					int x;
					boolean oi;
					for (x = 0; x < jTable1.getRowCount(); x++) {
						oi = jTable1.isRowSelected(x);
						if (oi == true) {
							String y = (String) jTable1.getValueAt(x, 0);
							idd = Integer.parseInt(y);
							usuario.setId(idd);

							usuarioModel.removeRow(x);
						}
					}

				}

			});
		}
		return updateBut;
	}

	private UsuarioView getThis() {
		return this;
	}

	private JButton getSelectBut() {
		if (selectBut == null) {
			selectBut = new JButton();
			selectBut.setBounds(new Rectangle(406, 157, 116, 24));
			selectBut.setText("SELECIONAR");
			selectBut.setFont(new Font("Comic Sans MS", Font.BOLD, 12));

			selectBut.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					Usuario usuario = new Usuario();

					int id = -99999;
					int x;
					boolean oi;
					for (x = 0; x < jTable1.getRowCount(); x++) {
						oi = jTable1.isRowSelected(x);
						if (oi == true) {

							String y = (String) jTable1.getValueAt(x, 0);
							id = Integer.parseInt(y);
							usuario.setId(id);
							try {
								usuarioController.select(usuario, getThis());
							} catch (BusinessException e1) {

								e1.printStackTrace();
							} catch (DatabaseException e1) {

								e1.printStackTrace();
							}
						}
					}
				}

			});
		}
		return selectBut;
	}

	private JScrollPane getJScrollPane() {
		if (jScrollPane == null) {
			jScrollPane = new JScrollPane();
			jScrollPane.setBounds(new Rectangle(25, 107, 362, 253));
			jScrollPane.setViewportView(getJTable1());

		}
		return jScrollPane;
	}

	private JTable getJTable1() {
		if (jTable1 == null) {

			jTable1 = new JTable(usuarioModel);
			jTable1.setName("UsuariosTable");
			jTable1.setColumnSelectionAllowed(false);
			jTable1.setRowSelectionAllowed(true);
			jTable1.setShowGrid(true);
			jTable1.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
			jTable1.setComponentOrientation(ComponentOrientation.UNKNOWN);
			jTable1.setSize(new Dimension(213, 8));
			jTable1.setCellSelectionEnabled(true);
			jTable1.setFont(new Font("Comic Sans MS", Font.PLAIN, 11));

		}

		return jTable1;
	}

	public void select() {
		boolean oi;
		for (int x = 0; x < jTable1.getRowCount(); x++) {
			oi = jTable1.isRowSelected(x);
			if (oi == true) {

				// System.out.println(jTable1.getValueAt(x, 0));

			}

		}
	}

	public UsuarioView() {
		super();
		initialize();
	}

	private void initialize() {
		this.setSize(594, 436);

		this.setContentPane(getJContentPane());
		this.setTitle("UsuarioView");
		this.setVisible(true);
		this.setFont(new Font("Comic Sans MS", Font.BOLD, 12));

	}

	private JPanel getJContentPane() {
		if (jContentPane == null) {

			cursoLab = new JLabel();
			cursoLab.setBounds(new Rectangle(4, 82, 47, 16));
			cursoLab.setText("CURSO:");
			idLab = new JLabel();
			idLab.setBounds(new Rectangle(31, 34, 21, 16));
			idLab.setText("ID:");
			idLab.setFont(new Font("Comic Sans MS", Font.BOLD, 12));
			nomeLab = new JLabel();
			nomeLab.setBounds(new Rectangle(8, 13, 44, 16));
			nomeLab.setText("NOME:");
			nomeLab.setFont(new Font("Comic Sans MS", Font.BOLD, 12));
			jContentPane = new JPanel();
			jContentPane.setLayout(null);
			jContentPane.add(getInsertBut(), null);
			jContentPane.add(getDeleteBut(), null);
			jContentPane.add(getNomeField(), null);
			jContentPane.add(getIdField(), null);
			jContentPane.add(getUpdateBut(), null);
			jContentPane.add(getSelectBut(), null);
			jContentPane.add(getJScrollPane(), null);
			jContentPane.add(nomeLab, null);
			jContentPane.add(idLab, null);
			jContentPane.add(getMatriculaLab(), null);
			jContentPane.add(getMatriculaField(), null);
			jContentPane.add(cursoLab, null);
			jContentPane.add(getCursoChoice(), null);
		}
		return jContentPane;
	}

	/**
	 * This method initializes matriculaLab
	 * 
	 * @return javax.swing.JLabel
	 */
	private JLabel getMatriculaLab() {
		if (matriculaLab == null) {
			matriculaLab = new JLabel();
			matriculaLab.setText("MATRICULA:");
			matriculaLab.setBounds(new Rectangle(3, 56, 77, 16));
		}
		return matriculaLab;
	}

	/**
	 * This method initializes matriculaField
	 * 
	 * @return javax.swing.JTextField
	 */
	public JTextField getMatriculaField() {
		if (matriculaField == null) {
			matriculaField = new JTextField();
			matriculaField.setBounds(new Rectangle(84, 55, 114, 19));
		}
		return matriculaField;
	}

	/**
	 * This method initializes cursoChoice
	 * 
	 * @return java.awt.Choice
	 */
	public static Choice getCursoChoice() {
		if (cursoChoice == null) {
			cursoChoice = new Choice();
			cursoChoice.setBounds(new Rectangle(56, 82, 156, 17));
		}
		return cursoChoice;
	}

} // @jve:decl-index=0:visual-constraint="10,10"
