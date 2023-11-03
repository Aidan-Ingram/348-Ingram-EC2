// Function to check if the passwords match and meet the length requirement
function checkPasswords() {
    const password1 = document.getElementById('password1-in').value;
    const password2 = document.getElementById('password2-in').value;

    if (password1.length < 8 && password2.length <8){
        alert("Password 1 and 2 are less than 8 characters.")
    } else if (password1.length < 8) {
        alert("Password 1 is less than 8 characters.");
    } else if (password2.length < 8) {
        alert("Password 2 is less than 8 characters.")
}    else if (password1 !== password2) {
        alert("Passwords do not match.");
    } else {
        alert("Passwords match!");
    }
}