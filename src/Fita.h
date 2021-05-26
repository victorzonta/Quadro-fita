char Fita[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fita de LED</title>
    <style>
    h1{
        display: block;
        text-align: center;
    }
    div.cores{
        display: flex;
        justify-content: center;
    }
    button {
    width: 150px;
    height: 100px;
    font-size: 20px;
    }
    .azul{
        background-color: #0000FF ;
    }
    .verdin{
        background-color:#00FFFF ;
    }
    .on{
        background-color:#FFFFFF;
    }
    .verde{
        background-color:#008000 ;
    }
    .roxo{
        background-color:#7B68EE ;
    }
    .roxao{
        background-color:#8A2BE2 ;
    }
    .rosa{
        background-color: #FF00FF ;
    }
    .off{
        background-color: #000;
	color: white;
    }
    .vermelho{
        background-color: #FF0000;
    }
    .branco{
        background-color: #FFFFFF;
    }
    .shine{
        background-color: #FFFFFF;
    }
    .festa{
        background-color: #E0FFFF;
    }
    
    </style>
</head>
<body>
    <h1>Escolha a cor do LED</h1>
    <div class = "cores">      
        <button class = "azul" id = "ledazul">Azul</button>   
        <button class = "verdin" id = "ledverdin" >verdin</button>   
        <button class = "on" id = "ledon" >on</button>   
        <button class = "verde" id = "ledverde">Verde</button>  
        <button class = "roxo" id = "ledroxo">roxo</button>
        <button class = "roxao" id = "ledroxao">roxao</button>   
        <button class = "rosa" id = "ledrosa">rosa</button>       
        <button class = "off" id = "ledoff">off</button>   
        <button class = "vermelho" id = "ledvermelho">Vermelho</button> 
        <button class = "branco" id = "ledbranco">Branco</button> 
        <button class = "brilho" id = "ledbrilho">brilho</button> 
        <button class = "festa" id = "ledfesta">festa</button> 
    </div>
  <h1>Escolha a cor do Quadro</h1>
    <div class = "cores">      
	<button class = "on" id = "quadroon" >on</button>   
        <button class = "off" id = "quadrooff">off</button>   
        <button class = "azul" id = "quadroazul">Azul</button>   
        <button class = "roxo" id = "quadroroxo">roxo</button>
        <button class = "vermelho" id = "quadrovermelho">Vermelho</button> 
        <button class = "verde" id = "quadroverde">Verde</button>   

    </div>
    <script>
        function requisita(botao){
           let request = new XMLHttpRequest();
            url = `\\${botao.id}`
            console.log(url);
            request.open("POST", url, true);
            request.send();
        }

	

	//quadro
	    const quadrobtnAzul = document.getElementById("quadroazul");
        quadrobtnAzul.addEventListener("click", function(){requisita(quadrobtnAzul)});
    	const quadrobtnOn = document.getElementById("quadroon");
        quadrobtnOn.addEventListener("click", function(){requisita(quadrobtnOn)});
        const quadrobtnOff = document.getElementById("quadrooff");
        quadrobtnOff.addEventListener("click", function(){requisita(quadrobtnOff)});
	    const quadrobtnRed = document.getElementById("quadrovermelho");
        quadrobtnRed.addEventListener("click", function(){requisita(quadrobtnRed)});
	    const quadrobtnroxo = document.getElementById("quadroroxo");
        quadrobtnroxo.addEventListener("click", function(){requisita(quadrobtnroxo)});
        const quadrobtnVerde = document.getElementById("quadroverde");
        quadrobtnVerde.addEventListener("click", function(){requisita(quadrobtnVerde)});

	//fita
        const btnAzul = document.getElementById("ledazul");
        btnAzul.addEventListener("click", function(){requisita(btnAzul)});
        const btnverdin = document.getElementById("ledverdin");
        btnverdin.addEventListener("click", function(){requisita(btnverdin)});
        const btnon = document.getElementById("ledon");
        btnon.addEventListener("click", function(){requisita(btnon)});
        const btnVerde = document.getElementById("ledverde");
        btnVerde.addEventListener("click", function(){requisita(btnVerde)});
        const btnroxo = document.getElementById("ledroxo");
        btnroxo.addEventListener("click", function(){requisita(btnroxo)});
        const btnroxao = document.getElementById("ledroxao");
        btnroxao.addEventListener("click", function(){requisita(btnroxao)});
        const btnrosa = document.getElementById("ledrosa");
        btnrosa.addEventListener("click", function(){requisita(btnrosa)});
        const btnoff = document.getElementById("ledoff");
        btnoff.addEventListener("click", function(){requisita(btnoff)});
        const btnRed = document.getElementById("ledvermelho");
        btnRed.addEventListener("click", function(){requisita(btnRed)});
        const btnBranco = document.getElementById("ledbranco");
        btnBranco.addEventListener("click", function(){requisita(btnBranco)});
        const btnbrilho = document.getElementById("ledbrilho");
        btnbrilho.addEventListener("click", function(){requisita(btnbrilho)});
        const btnfesta = document.getElementById("ledfesta");
        btnfesta.addEventListener("click", function(){requisita(btnfesta)});

    </script>
</body>
</html>
)=====";