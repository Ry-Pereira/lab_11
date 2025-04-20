
// This function applys background color to the html document of the paragraph based on the RGB values based on the user input
function applyBackgroundRGBColors(){
    //Stores dummy text paragph varaible with the HtML document retriveing the paragraph with the id of dummy text
    let dummy_text_paragraph = document.getElementById("dummy_text");
    //Stores the rgb red bacground color number with teh value with the HTML document by retriveing the input by id background_red_color_number_input
    let rgb_red_background_color_number = document.getElementById("background_red_color_number_input").value;
    //Stores the rgb green bacground color number with teh value with the HTML document by retriveing the input by id background_green_color_number_input
    let rgb_green_background_color_number = document.getElementById("background_green_color_number_input").value;
    //Stores the rgb blue bacground color number with teh value with the HTML document by retriveing the input by id background_blue_color_number_input
    let rgb_blue_background_color_number = document.getElementById("background_blue_color_number_input").value;
    //The dummy text paragrapg=h style background color is set to the rgb() with teh rgb red,green,blue background color numbers set as its argument
    dummy_text_paragraph.style.backgroundColor = "rgb(" + rgb_red_background_color_number + "," + rgb_green_background_color_number + "," + rgb_blue_background_color_number + ")"
   
}

//This function applys a borderwith to the html document of the paragraph based on the  width values based on the user input
function applyBorderWidth(){
    //Stores dummy text paragph varaible with the HtML document retriveing the paragraph with the id of dummy text
    let dummy_text_paragraph = document.getElementById("dummy_text");
    //Stores the paragraph border with with retrieving the value from the id border with input, sotirng that use with input
    let paragraph_border_width = document.getElementById("border_width_input").value;
    //The dummy text paragraph style borderwidth is set to the pargarph borwidth varaible with px next to it, to incicate the size in px.
    dummy_text_paragraph.style.borderWidth = paragraph_border_width + "px";
    //The dummy text paragraph border style is set to solid
    dummy_text_paragraph.style.borderStyle = "solid";
    //The dummy text paragraph border color is set to default black
    dummy_text_paragraph.style.borderColor = "black";
}

//This function applys border colors to the html document of the paragraph based on the RGb values based on the user input
function applyBorderColors(){
    //Stores dummy text paragph varaible with the HtML document retriveing the paragraph with the id of dummy text
    let dummy_text_paragraph = document.getElementById("dummy_text");
    //Stores the regb red border color number with teh value retrieved form the border red color number input id, that sotores the user input form that
    let rgb_red_border_color_number = document.getElementById("border_red_color_number_input").value;
    //Stores the regb green border color number with teh value retrieved form the border green color number input id, that sotores the user input form that
    let rgb_green_border_color_number = document.getElementById("border_green_color_number_input").value;
    //Stores the regb blue border color number with teh value retrieved form the border blue color number input id, that sotores the user input form that
    let rgb_blue_border_color_number = document.getElementById("border_blue_color_number_input").value;
    //The dummy text paragrapg=h style border color is set to the rgb() with teh rgb red,green,blue border color numbers set as its argument
    dummy_text_paragraph.style.borderColor = "rgb(" + rgb_red_border_color_number + "," + rgb_green_border_color_number + "," + rgb_blue_border_color_number + ")"
}