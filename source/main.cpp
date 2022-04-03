#include <string>
#include "Output.h"

int main()
{
	std::string trainingPath = "trainset_3665";
	std::string testingPath = "testset_700";
	output* cnn = new output(trainingPath, testingPath);
	// Pour une grande pr�cision, on doit definir plus d'epoch
	// Le deuxi�me param�tre est le taux d'apprentissage
	cnn->Training_data(500, 0.003);
	cnn->Testing_data();
	delete cnn;
	return 0;
}
