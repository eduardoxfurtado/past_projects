package br.rj.senac.biblisoft.exception;

@SuppressWarnings("serial")
public class DatabaseException extends Exception {

	public DatabaseException(String msg) {
		super(msg);
	}
	
	public DatabaseException(Exception e) {
		super(e);
	}
	
	public DatabaseException(String msg, Exception e) {
		super(msg, e);
	}
}
