
public class Palindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Check the string is Palindrome or not
		String str ="Radar";
		String rev_str="";
		int n = str.length();
		for (int i=(n-1);i>=0;i--) {
			rev_str = rev_str+str.charAt(i);
		}
		if(str.toLowerCase().equals(rev_str.toLowerCase())) {
			System.out.println("String is palindrome");
		}else {
			System.out.println("String is not palindrome");
		}
	}
		
}
