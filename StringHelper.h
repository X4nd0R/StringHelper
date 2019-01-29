namespace StringHelper{
	void join(std::string *arrayIn, int length, std::string separator, std::string& stringRef, std::string concluder = "", bool append = false) {
		int i;
		
		if(!append){
			stringRef.clear();
		}
		stringRef += arrayIn[0];
		
		for (i = 1; i < length; i++) {
			stringRef += separator + arrayIn[i];
		}
		
		stringRef += concluder;
	}
	
	std::vector<std::string> split(std::string stringIn, std::string delimiter){
		std::string token;
		size_t pos;
		std::vector<std::string> result;
		
		while ((pos = stringIn.find(delimiter)) != std::string::npos) {
		
			token = stringIn.substr(0, pos);
			result.push_back(token);
			stringIn.erase(0, pos + delimiter.length());
			
		}
		
		result.push_back(stringIn);
		return result;
	}

	std::string strToLower(std::string input){
	
		 for(int i=0; i<input.length(); i++){
			 input[i] = tolower(input[i]);
		 }
		 
		 return input;
	}

	std::string strToUpper(std::string input){
	
		 for(int i=0; i<input.length(); i++){
			 input[i] = toupper(input[i]);
		 }
		 
		 return input;
	}
}
