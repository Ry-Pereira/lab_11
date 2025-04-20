

//This function authenticates the passwords with the first and second password retrieved by the use
function authenticatePasswords(){
    //Sets the first password to the value retrived by the user first password input id, which stores that user input
    let first_password = document.getElementById("user_first_password_input").value;
    //Sets the second password to the value retrived by the user second password input id, which stores that user input
    let second_password = document.getElementById("user_second_password_input").value;

    
    
    //Sets the first password length to the value retrived by the user first password input id, which stores that user input, by its length
    let first_password_length = first_password.length
    //Sets the second password length to the value retrived by the user second password input id, which stores that user input, by its length
    let second_password_length = second_password.length


    //If the first password length is less than 8, the user will be alerted that the first password needs to be at length 8
    if (first_password_length < 8){
        //Alerst the user the first passwords is less than 8
        alert("The first password is less than 8");
    }
    //Else if the first passwords is at least length 8, If the second password length is less than 8, the user will be alerted that the second password needs to be at length 8
    else if(second_password_length < 8){
        //Alerts the user that second password is less than 8
        alert("The second password is less than 8");

    }
    //Else if passwords match, but they are not the same , the user will be alerted that the passwords don't match
    else if(first_password != second_password){
        alert("The passwords don't match");
    }
    //The passwords don't meet all conditions, meaning they are of a match, the user will be notidied of this
    else{
        //Alerts the passwords do match
        alert("The passwords match");
    }

}