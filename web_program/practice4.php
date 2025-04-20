<!-- This tag specifies the document type and version to be HTML-->
<!DOCTYPE html>
<!--This opens the HTML document and the language is set to English-->
<html lang = "en">
    <!--The Head section provides metadata and defined links-->
    <head>
        <!--This linkes to the external practice1 CSS file to for styling of the HTML document-->
        <link rel = "stylesheet" href = "practice1.css">
        <!--Defines the character encoding as UTF-8-->
        <meta charset = "UTF-8">
        <!--Sets viewpoert for devices of appropriate size-->
        <meta name = "viewport" content = "width=device-width, initial-scale = 1.0">
        <!-- The title of the webpage that is in the browser tab-->
        <title>Practice 4 Assignment</title>
    </head>


    <!--Defines the document's body, containing all of the HTML document content-->
    <body>
        <!--PHP Multiplication table shows the main title of my profile-->
        <h1>PHP Multiplication table</h1>

            <!--Forma to aqcurier multiplication table size input from user-->
            <form action = "practice4.php" method= "get">
                <!--Input field for the user to input the size of the size for the multiplication table-->
                Multiplication table Size: <input type = "text" name = "multiplication-table-size-input">
                <!--Button to submit the form and the data inside of it-->
                <input type = "submit">

            </form>

            <!--PHP Script Below-->
            <?php

    //Make sures the mutliplication table size input is set in order for retrieval, else will set to 0 automatically
    if(isset($_GET["multiplication-table-size-input"])){
    //Stores the input value from the multiplication table zie input into a variable called multiplication_table_size
        $multiplication_table_size = $_GET["multiplication-table-size-input"];
    }
    //Else the multiplication table size is set to 0 automatically
    else{
        $multiplication_table_size = 0;
    }
    

    //Props a table and sets the border to be a thickness of 1 when echoing, the margin is auro so that it will be center position
    echo "</br><table border = '1' style = 'margin:auto;'>";
    //Starts with a table header and and table row inside of it
    echo"<thead><tr>";

    //Loops through each column header,starting from 0 till the size of the multiplication table size
    for($multiplication_table_column_header = 0; $multiplication_table_column_header <= $multiplication_table_size; $multiplication_table_column_header ++){
        //If the column header is 0, then the a 0 will be print an empty header cell
        if($multiplication_table_column_header == 0){
            //Prints and empty header cell in the left most corner
            echo"<th> </th>";
        }
        //Else if the column header does not equal zero, then headercell will contain the number
        else{
            //Prints the column number in the header cell
            echo"<th>$multiplication_table_column_header</th>"; 
        }
    }
    //Indicated end of table row headers
    echo"</tr></thead>";

    //Beginning of the table body including all data in it
    echo"<tbody>";
   
    
    //Loops through each table row, starting from 1 till the multiplication table size
    for($multiplication_table_row = 1; $multiplication_table_row <= $multiplication_table_size; $multiplication_table_row ++){
        //Starts a new table row
        echo"<tr>";
        //Prints the row number in the first row cell
        echo"<td>$multiplication_table_row</td>";
        //Loops through each column in the row till the multiplication table size
        for($multiplication_table_column = 1; $multiplication_table_column <= $multiplication_table_size; $multiplication_table_column ++){
            //Multiplies the table column and row and stores the roduct in the multiplication table column row product
            $multiplication_table_column_row_product = $multiplication_table_column * $multiplication_table_row;
            //Sets the the prodct in the data cell and prints it out
            echo"<td>$multiplication_table_column_row_product</td>";
        }
        //Indicate the end of table row
        echo"</tr>";
        
    
    }
    //Indicated the end of the table body and table itself
    echo"</tbody></table>"

    //End of PHP script
    ?>

        
        
    </body>






</html>