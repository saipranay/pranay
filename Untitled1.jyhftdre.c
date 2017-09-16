import java.util.Date;

/**
 * A fix-sized array of students
 * array length should always be equal to the number of stored elements
 * after the element was removed the size of the array should be equal to the number of stored elements
 * after the element was added the size of the array should be equal to the number of stored elements
 * null elements are not allowed to be stored in the array
 *
 * You may add new methods, fields to this class, but DO NOT RENAME any given class, interface or method
 * DO NOT PUT any classes into packages
 *
 */
public class StudentGroup implements StudentArrayOperation {

	private Student[] students;

	/**
	 * DO NOT remove or change this constructor, it will be used during task check
	 * @param length
	 */
	public StudentGroup(int length) {
		this.students = new Student[length];
	}

	@Override
	public Student[] getStudents() {
		// Add your implementation here
		try{
		if(students.length<=0)
		{
			throw new IllegalArgumentException;
		}
		else
		{
			return students;
		}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}

	@Override
	public void setStudents(Student[] students) {
		// Add your implementation here
		this.students=students;
	}

	@Override
	public Student getStudent(int index) {
		// Add your implementation here
		try{
		if(index<0 || index>=students.length)
		{
			throw new IllegalArgumentException;
		}
		else
		{

			return Student[index];
		}
		}
		catch(Exception e)
		{
			System.out.Println(e);
		}

	}

	@Override
	public void setStudent(Student student, int index) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
							throw new IllegalArgumentException;
		}
		else{
			students[index].id= student.id;
			students[index].fullName=student.fullName;
			students[index].birthDate=student.birthDate;
			students[index].avgMark=student.avgMark;
			}
		}
		catch(Exception e)
		{
			System.out.Println(e);
		}
	}

	@Override
	public void addFirst(Student student) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){

		for(i=0;i<students.lenght;i++)
		{
			students[i+1]=students[i];

		}
		students[0]=student;
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void addLast(Student student) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throws new IllegalArgumentException;
			}
			else{
			students[students.length+1]=student;}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void add(Student student, int index) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=0;i<=students.lenght;i++)
		{
			students[i]=students[i+1];

		}
		student[index]=student;
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void remove(int index) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=index;i<=students.lenght;i++)
		{
			students[i]=student[i+1];
		}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void remove(Student student) {
		// Add your implementation here

	}

	@Override
	public void removeFromIndex(int index) {
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=index+1;i<=students.lenght;i++)
		{
			students[i].id="";
			students[i].fullName="";
			students[i].birthDate="";
			students[i].avgMark="";
		}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
		// Add your implementation here
	}

	@Override
	public void removeFromElement(Student student) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=0;i<students.length;i++)
		{
			if(students[i].fullName==student.fullName)
				break;
		}
		for(j=0;i<=students.length;i++)
		{
			students[i]=student[i+1];
		}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}

	}

	@Override
	public void removeToIndex(int index) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=0;i<=index;i++)
		{
			students[i].id=;
			students[i].fullName=students[index+i].fullName;
			students[i].birthDate=students[index+i].birthDate;
			students[i].avgMark=students[index+].avgMark;
		}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void removeToElement(Student student) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		for(i=0;i<students.length;i++)
		{
			if(students[i].fullName==student.fullName)
			{
				p=i;
				break;
			}

		}
		for(i=0;i<=index;i++)
		{
			students[i].id=;
			students[i].fullName=students[index+i].fullName;
			students[i].birthDate=students[index+i].birthDate;
			students[i].avgMark=students[index+].avgMark;
		}
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public void bubbleSort() {
		// Add your implementation here
	}

	@Override
	public Student[] getByBirthDate(Date date) {
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		Student[] multipleDate;
		for(i=0,j=0;i<students.length;i++)
		{
			if(students[i].birthDate== date)
			{
				multipleDate[j].id=students[i].id;
				multipleDate[j].fullName=students[i].fullName;
				multipleDate[j].birthDate=students[i].birthDate;
				multipleDate[j].avgMark=students[i].avgMark;
			}
		}
		return multipleDate;
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public Student[] getBetweenBirthDates(Date firstDate, Date lastDate) {
		// Add your implementation here
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		Student[] multipleDate;
		for(i=0,j=0;i<students.length;i++)
		{
			if(students[i].birthDate>=firstDate &&  students[i].birthDate<=firstDate)
			{
				multipleDate[j].id=students[i].id;
				multipleDate[j].fullName=students[i].fullName;
				multipleDate[j].birthDate=students[i].birthDate;
				multipleDate[j].avgMark=students[i].avgMark;
			}
		}
		return multipleDate;
		}
		}
			catch(Exception e)
			{
				System.out.println(e)
			}

	}

	@Override
	public Student[] getNearBirthDate(Date date, int days) {
		// Add your implementation here
		return null;
	}

	@Override
	public int getCurrentAgeByDate(int indexOfStudent) {
		try{
			if(index<0|| index>student.lenght){
				throw new IllegalArgumentException;
		}
		else{
		Integer curage,yr=2017;
		int age;
		String s = students[i],birthDate.toString().substring(0,3);
		curage= Integer.parseInt(s);
		age = (int)curage;
		age= year-curage;
		// Add your implementation here
		return curage;
			}
			catch(Exception e)
			{
				System.out.println(e)
			}
	}

	@Override
	public Student[] getStudentsByAge(int age) {


		return null;
	}

	@Override
	public Student[] getStudentsWithMaxAvgMark() {
		// Add your implementation here
		return null;
	}

	@Override
	public Student getNextStudent(Student student) {
		// Add your implementation here
		return null;
	}
}
