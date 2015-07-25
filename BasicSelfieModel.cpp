#include <iostream>
#define DEFAULT_BARZO (50)
#define MAX_BARZO     (150)

using std::cout;
using std::endl;

enum Gender {
	MALE, FEMALE, BACTERIA, ARCHAEA, FUNGUS, GAY, BAYHAN, UNKNOWN
};


class Instagram {
	Gender gender;
	bool  areYouFamous;
	int   like;
	int   barzoCount;
	
public:
	Instagram(Gender gender) {
		setBarzoCount(DEFAULT_BARZO);
		setLike(0);
		setAreYouFamous(false);
		setGender(gender);
	}
	
	virtual void takePhoto() {
		setLike(70 - getBarzoCount());
	}
	
	inline Gender getGender() const {
		return this-> gender;
	}
	
	void setGender(Gender gender) {
		this-> gender = gender;
	}
	
	inline bool getAreYouFamous() const {
		return this-> areYouFamous;
	}
	
	void setAreYouFamous(bool areYouFamous) {
		this-> areYouFamous = areYouFamous;
	}
	
	inline int getLike() const {
		return this-> like;
	}
	
	void setLike(int like) {
		this-> like = like;
	}
	
	inline int getBarzoCount() const {
		return this-> barzoCount;
	}
	
	void setBarzoCount(int barzoCount) {
		this-> barzoCount = barzoCount;
	}
};

class Selfie: public Instagram  {
	bool  showBoobs;
	
public:
	Selfie(Gender gender) : Instagram(gender) {
		setShowBoobs(false);
	}
	
	void takePhoto() {
		setAreYouFamous(getShowBoobs());
		
		if (getGender() == FEMALE) {
			cout << "ykms sna" << endl;
			setLike(getAreYouFamous() ? 700 : 20);
			
			while (getShowBoobs() && getBarzoCount() < MAX_BARZO) {
				setLike(getLike() + 1);
				setBarzoCount(getBarzoCount() + 1);
				
				switch((getBarzoCount()) % 5) {
				case 0:
					cout << "ck gsl ckmssn. bu snmsn??? (: (:" << endl;
					break;
				case 1:
					cout << "cnm tl vr konusalim" << endl;
					break;
				case 2:
					cout << "slm ttlm" << endl;
					break;
				case 3:
					cout << "oohh meeen" << endl;
					break;
				case 4:
					cout << "o.O" << endl;
					break;
				}
			}
			
			return;
		}
		
		if (getAreYouFamous()) {
			setLike(300 - getBarzoCount());
			cout << "ay cnm bune" << endl;
		} else {
			setLike(7);
			cout << "sie" << endl;
		}
	}
	
	inline bool getShowBoobs() const {
		return this-> showBoobs;
	}
	
	void setShowBoobs(bool showBoobs) {
		this-> showBoobs = showBoobs;
	}
};