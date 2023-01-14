# include <iostream>

int main(int argc, char const *argv[])
{
    int num, recebe;

    std::cout << "Digite o numero que voce deseja converter, em Kelvin: " << std::endl;
    std::cin >> num;
    std::cout << "Deseja converter esse numero para: \n 1) Celsius \n 2) Fahrenheit" << std::endl;
    std:: cin >> recebe;
    switch (recebe)
    {
    case 1: std::cout << "Convertido de Kelvin para Celsius: " << num - 273 << std::endl;      
        break;

    case 2: std::cout << "Convertido de Kelvin para Fahrenheit: " << (num - 273) * 1.8 + 32 << std::endl;      
        break;
    
    default:
        break;
    }
    std::cout << "                             ################    #########" << std::endl;
    std::cout << "                           ################### ##############" << std::endl;
    std::cout << "                         ################################# #####" << std::endl;
    std::cout << "                       ################################### ###  #" << std::endl;
    std::cout << "                    ####################################### ###  '" << std::endl;
    std::cout << "                   ######################################### ####" << std::endl;
    std::cout << "                 ############################################  ######" << std::endl;
    std::cout << "                ###############################################   #  #" << std::endl;
    std::cout << "              ###################################################   #  #" << std::endl;
    std::cout << "             #####################################################   #   #" << std::endl;
    std::cout << "            #######################################################   #    #" << std::endl;
    std::cout << "           #########################################################   #     #" << std::endl;
    std::cout << "          ###########################################################    #    #" << std::endl;
    std::cout << "         ########################  ######### # # # #  ################     #   #" << std::endl;
    std::cout << "        ########################  # #######  # # # #   ################     #   #" << std::endl;
    std::cout << "       ########################  # ## ####   # # # #   # ##############      #  #" << std::endl;
    std::cout << "      ########################  # ## ## ##  #  # # #   # ## #### # #####      # '" << std::endl;
    std::cout << "     #########################  # # # ## #  ' # #  #  #  ## #### # ######      #" << std::endl;
    std::cout << "    # ########################   # ## ## #   # #  #  #  ## ####  # #######      #" << std::endl;
    std::cout << "   #   ######################    # #  # # .  ' #  #  '  # # # # . # #######     '" << std::endl;
    std::cout << "  ##   ######################   # #  # #  A   #  #     # # # #  A # ########" << std::endl;
    std::cout << " #    #######################   ##  #  # .$. #  #     # # # #   $ #  ########" << std::endl;
    std::cout << "#     #######################   #  #  # .$$$.# #      ##  ' '  .$.#  #########" << std::endl;
    std::cout << "'     ## ####################   '  ' .s$$$$$$$$$$S.   ''     .s$$$.  #########" << std::endl;
    std::cout << "    ## #####################     .sS$$$$$$$$$$$$$$$'     .sS$$$$$$s. ###### ### " << std::endl;
    std::cout << "   ##  ####################     $$$$$$$$.-'""'-$$$.      ;$$$.-.$$$$$s##### ####" << std::endl;
    std::cout << "   '  #####################      `$$'$$$/ () ` `.$$       ;$/() ``$$$####### ###" << std::endl;
    std::cout << "      #####################         $$$$Ss...sS$$$$        ;Ss...sS$ ########  ##" << std::endl;
    std::cout << "     ######################         `$$$$$$$$$$$$$'        .$$$$$$$$ ########   # " << std::endl;
    std::cout << "    #######################           `$$$$$$$$$'          `$$$$$$$' ### ####    `" << std::endl;
    std::cout << "   ######################## `.           `$$$$'             `$$$$$'  #### ###" << std::endl;
    std::cout << "  #########################   .            $'                `.`$'   ##### ##" << std::endl;
    std::cout << " ###########################  :            $                  ; $    ###### ##" << std::endl;
    std::cout << "###########################                V      :           ; V    ####### #" << std::endl;
    std::cout << "#### ######################    `           '      `._''`.   .'  '   #########'" << std::endl;
    std::cout << "##   ######################                              `-'  .     ##########" << std::endl;
    std::cout << "#   #######################                  .                `.   ######### ##" << std::endl;
    std::cout << "#  ########################                 '                  .   ######### ###" << std::endl;
    std::cout << "'  ########################                ;       _.----._    `   ########## ##" << std::endl;
    std::cout << "  ##########################               '  _.-'T~T~T~T~T`.     ############ ##" << std::endl;
    std::cout << " ############################`.             .$$`""""------""' $  ######### ### ##" << std::endl;
    std::cout << " ## #########################  `.         .$'   `-._     _.-' $ ########## #### #" << std::endl;
    std::cout << " ## ##########################   `.       $'        """"""'   $ ########## #### #" << std::endl;
    std::cout << " # ###########################     `.    $                    $########### #### `" << std::endl;
    std::cout << " '############################       `.  $'                   ############ ###   " << std::endl;
    std::cout << " # ############################        `._                  .'###  #### ## ###" << std::endl;
    std::cout << " '  ############### ############         `.                .'  #   #### ## ##" << std::endl;
    std::cout << "  ################# # ############         `-._       __..-'   #    ### ##  #" << std::endl;
    std::cout << "   # ## # # ### ##  # ## #########             `'''''.'       #    ### ##  '" << std::endl;
    std::cout << "   # #  # # ##  #   # ##  ###### ##                 .' `-.._   #     ## #" << std::endl;
    std::cout << "   # #  ##   #  #   #  #   #####  #                 ;        `-.     #  #" << std::endl;
    std::cout << "   .-'  ''   #  '   #  '    ####  #                :             `-. #  '" << std::endl;
    std::cout << " .'          '      '        # #  .                :                `-.  " << std::endl;

    system("Pause");
    return 0;
}