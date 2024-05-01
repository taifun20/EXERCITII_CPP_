#include "HExercitii_.h"

const std::string sFont_Body_ = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
							//	"01234567890123456789012345678901234567890123456789012345678901";
							//	"|  0-10   |  10-20  |  20-30  |  30-40  |  40-50  |   50-61  |";


std::string CE_PASS_DECODER_(std::vector<int> intEncryptedMessage)
{
	std::string sDecryptedMessage = "";
	for (int i : intEncryptedMessage) {
		sDecryptedMessage = sDecryptedMessage + sFont_Body_[i];
	}
	return sDecryptedMessage;
}

std::string CE_ENPASS_(std::vector<int> intEncryptedMessage)
{
	std::string sEncryptedPass = "";
	for (int i : intEncryptedMessage) {
		sEncryptedPass += " " + std::to_string(i);
	}
	return sEncryptedPass;
}

void CE_MAIN_PASS_DECODER_()
{
	
	std::vector<int> intVectorCodeMessage = { 45,0,8,5,20,13,54,52 }; //Taifun20
	std::cout << "	Encrypted password:" << CE_ENPASS_(intVectorCodeMessage) << std::endl;
	std::cout << "	Decrypted password:" << CE_PASS_DECODER_(intVectorCodeMessage) << std::endl;

}

void CE_REVERSE_STRING_()
{
	std::string userOutput = "Taifun";
	std::string sCodeOutput = "";

	for (int i = userOutput.size(); i >= 0; i--) {
		sCodeOutput = sCodeOutput + userOutput[i];
	}
	std::cout << std::endl << "	Revers String: " << sCodeOutput << std::endl;
}

void CE_CELSIUS()
{
	std::vector<int> intVectorTemp = { 6,1,-2,-8,4,5 };
	const int IntTempNumber = intVectorTemp.size();
	// abs() orice numar dar pozitiv
	int intTempToZero = intVectorTemp[0];
	int intTempZero = 0;

	int minNumber = intVectorTemp[0];
	for (int i = 1; i < intVectorTemp.size(); ++i) {
		if (intVectorTemp[i] == 0) {
			minNumber = 0;
		}
		else if (abs(intVectorTemp[i]) < minNumber) {
			minNumber = intVectorTemp[i];
		}
	}
	std::cout << std::endl << "	Cel mai mic numar din vector este: " << minNumber << std::endl;

}



void CE_TRANSLATE_ORCA_()
{
	std::string sText = "Ce zi minunata este azi sper sa nu ploua";
	std::string sTranslatedText = "";
	std::stringstream ss(sText);

	std::string sWord;
	while (ss >> sWord) {

		char cFirstChar = sWord[0]; // Luam prima litera
		std::string sRestOfWord = sWord.substr(1); // Luam restul cuvantului

		sTranslatedText = sTranslatedText + sRestOfWord + cFirstChar + "ay ";
	}
	std::cout << std::endl << "	RO: " << sText << std::endl << "	ORCA: " << sTranslatedText << std::endl << std::endl;
}

void CE_CHECK_DUPLICATE_CHAR_()
{

	std::string sText = "Helllllo";
	bool foundDejaVu = false;

	for (int i = 0; i < sText.length(); i++) {
		for (int j = i + 1; j < sText.length(); j++) {
			if (sText[i] == sText[j]) {
				std::cout << "	Deja Vu !" << std::endl;
				foundDejaVu = true;
				break;  // Oprim dacă gasim "Deja Vu"
			}
		}
		if (foundDejaVu) {
			break;  // Oprim dacă gasim "Deja Vu"
		}
	}

	if (!foundDejaVu) {
		std::cout << "	Check !" << std::endl;
	}

}