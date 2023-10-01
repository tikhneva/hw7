#include <iostream> 
#include <string> 
#include <ctime> 
#include <Windows.h> 
using namespace std;
/*додати в КОЖЕН клас 2 конструктори - один без параметрів явний,
другий - з 2...5 параметрами також явний
в конструкторах викликати сетери (не писати значення напряму в поля).
в мейні має бути створено по 2 обʼєкти кожного класу - один за допомогою
конструктора БЕЗ параметрів другий - за допомогою конструктора з параметрами*/

class Parrot {
private:
	int wings;
	int legs_count;
	int age;
	int fly;
	string action;
	string nick;
	string plumage_color;
	string eyes_color;

public:
	Parrot()
	{
		cout << "C-TOR without parameters!\n";
		SetNick("Sarah");
		SetAge(4);
		SetAction("is flying");
		SetLegs(2);
		SetWings(2);
	}

	Parrot(string nick, int age)
	{
		cout << "C-TOR WITH parameters!\n";
		SetNick(nick);
		SetAge(age);
		SetAction("is flying");
		SetLegs(2);
		SetWings(2);
	}

	void SetWings(int wings) {
		if (wings == 2)
		{
			this->wings = wings;
		}
		else
		{
			cout << "Parrot is not able to fly" << endl;
		}
	}
	int GetWings() const {
		return this->wings;
	}

	void SetLegs(int legs) {
		if (legs == 2)
		{
			this->legs_count = legs;
		}
		else
		{
			cout << "Parrot is not able to walk" << endl;
		}
	}
	int GetLegs() const {
		return this->legs_count;
	}

	void SetNick(string nick) {
		this->nick = nick;
	}
	string GetNick() const {
		return this->nick;
	}

	void SetPlumage(string plumage) {
		this->plumage_color = plumage;
	}
	string GetPlumage() const {
		return this->plumage_color;
	}

	void SetEyes(string eyes) {
		this->eyes_color = eyes;
	}
	string GetEyes() const {
		return this->eyes_color;
	}

	void SetAge(int age)
	{
		if (age >= 0)
		{
			this->age = age;
		}
		else
		{
			cout << "Недопустиме значення (треба > 0)!\n";
			throw "ERROR!";
		}
	}

	void SetAction(string action)
	{
		this->action = action;
	}

	string GetAction() const
	{
		return action;
	}

	int GetAge() const
	{
		return age;
	}

	void MakeNoize() {
		cout << "ARH!\n";
	}

	void Fly() {
		cout << "ïàïóãà ëåòèòü!\n";
	}

	void Eat(string meal) {
		cout << "ïàïóãà ¿ñòü " << meal << "\n";
	}

	void Sleep() {
		cout << "ïàïóãà ñïèòü\n";
	}

	void Stare() {
		cout << "ïàïóãà ï³äîçð³ëî äèâèòüñÿ íà âàñ\n";
	}

	void Print() const
	{
		cout << "Name: " << nick << "\n";
		cout << "Age: " << age << "\n";
        cout << "Wings count: " << wings << "\n";
        cout << "Legs count: " << legs_count << "\n";
	}
};

class Human {
private:
    string name;
    string eyes_color;
    string hair_color;
    string skill;
    double heigh;
    double beauty;
    double foot_size;
    int age;

public:
    Human()
    {
        cout << "C-TOR without parameters!\n";
        SetName("Alice");
        SetAge(18);
        SetSkill("is cooking");
        SetHeigh(163);
        SetFoot(37);
    }

    Human(string name, int age)
    {
        cout << "C-TOR WITH parameters!\n";
        SetName(name);
        SetAge(age);
        SetSkill("is cooking");
        SetHeigh(163);
        SetFoot(37);
    }

    void SetName(string name) {
        this->name = name;
    }
    string GetName() const {
        return this->name;
    }

    void SetEye(string eye) {
        this->eyes_color = eye;
    }
    string GetEye() const {
        return this->eyes_color;
    }

    void SetHair(string hair) {
        this->hair_color = hair;
    }
    string GetHair() const {
        return this->hair_color;
    }

    void SetSkill(string skill) {
        this->skill = skill;
    }
    string GetSkill() const {
        return this->skill;
    }

    void SetAge(int age)
    {
        if (age >= 0)
        {
            this->age = age;
        }
        else
        {
            cout << "Недопустиме значення (треба > 0)!\n";
            throw "ERROR!";
        }
    }
    void SetHeigh(double heigh) {
        if (heigh == 163)
        {
            this->heigh = heigh;
        }
        else
        {
            cout << "This is the wrong heigh of this person" << endl;
        }
    }
    double GetHeigh() const {
        return this->heigh;
    }

    void SetBeauty(double beauty) {
        if (beauty >= 100)
        {
            this->beauty = beauty;
        }
        else
        {
            cout << "My human cannot be less than 100% beautiful!!" << endl;
        }
    }
    double GetBeauty() const {
        return this->beauty;
    }

    void SetFoot(double foot) {
        if (foot >= 36 && foot <= 38)
        {
            this->foot_size = foot;
        }
        else
        {
            cout << "Wrong foot size" << endl;
        }
    }
    double GetFoot() const {
        return this->foot_size;
    }

    void PetLover() {
        cout << "äèâè ÿêå êîøåíÿ!\n";
    }

    void LatestNews() {
        cout << "ÿ òîá³ çàðàç òàêå ðîçïîâ³ì!\n";
    }

    void Cooking(string pasta) {
        cout << "*Àë³ñà ãîòóº ñìà÷íó ñòðàâó äëÿ ïîäðóãè*" << pasta << "\n";
    }

    void Lateness() {
        cout << "âèáà÷òå çà çàï³çíåííÿ\n";
    }

    void Hobby() {
        cout << "äàâàé ñþäè ñâîþ ëàïöþ\n";
    }

    int GetAge() const
    {
        return age;
    }

    void Print() const
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Heigh: " << heigh << "\n";
        cout << "Foot size: " << foot_size << "\n";
    }
};

class Room {
private:
    string location;
    string size;
    int window_count;
    int residents_count;
    double comfort;

public:
    Room()
    {
        cout << "C-TOR without parameters!\n";
        SetLocation("Seoul");
        SetResidents(2);
        SetSize("small");
        SetWindow(1);
        SetComfort(4);
    }

    Room(string location, int residents_count)
    {
        cout << "C-TOR WITH parameters!\n";
        SetLocation(location);
        SetResidents(residents_count);
        SetSize("small");
        SetWindow(1);
        SetComfort(4);
    }

    void SetLocation(string location) {
        this->location = location;
    }
    string GetLocation() const {
        return this->location;
    }

    void SetSize(string size) {
        this->size = size;
    }
    string GetSize() const {
        return this->size;
    }

    void SetWindow(int window) {
        if (window == 1)
        {
            this->window_count = window;
        }
        else
        {
            cout << "There is only one window" << endl;
        }
    }
    int GetWindow() const {
        return this->window_count;
    }

    void SetResidents(int residents) {
        if (residents >= 1 || residents <= 4)
        {
            this->residents_count = residents;
        }
        else
        {
            cout << "There is no room to breathe" << endl;
        }
    }
    int GetResidents() const {
        return this->residents_count;
    }

    void SetComfort(double comfort) {
        if (comfort >= 6 || comfort <= 10)
        {
            this->comfort = comfort;
        }
        else
        {
            cout << "You would not be able to sleep with this comfort level" << endl;
        }
    }
    double GetComfort() const {
        return this->comfort;
    }

    void SleepPlace() {
        cout << "íà ï³äëîç³ ëåæèòü ìàòðàö, ùîá ñïàòè\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) {
        cout << "äåñü á³ëÿ ðàêîâèíè º ðàìüîí" << ramyeon << "\n";
    }

    void AirConditioner() {
        cout << "ôøøøøøø\n";
    }

    void Door() {
        cout << "ãðàº ï³ñíÿ, êîëè â³ä÷³íÿþòüñÿ àáî çà÷èíÿþòüñÿ äâåð³\n";
    }

    void Print() const
    {
        cout << "Location: " << location << "\n";
        cout << "Comfort: " << comfort << "\n";
        cout << "Windows count: " << window_count << "\n";
        cout << "Residents count: " << residents_count << "\n";
    }
};

class Phone {
private:
    string phone_model;
    string color;
    double display_diagonol;
    double memory;
    int cameras_count;

public:
    Phone()
    {
        cout << "C-TOR without parameters!\n";
        SetModel("IPhone13");
        SetCamera(2);
        SetColor("blue");
        SetDisplay(5.4);
        SetMemory(128);
    }

    Phone(string location, string color)
    {
        cout << "C-TOR WITH parameters!\n";
        SetModel(phone_model);
        SetCamera(cameras_count);
        SetColor("blue");
        SetDisplay(5.4);
        SetMemory(128);
    }

    void SetModel(string model) {
        this->phone_model = model;
    }
    string GetModel() const {
        return this->phone_model;
    }

    void SetColor(string color) {
        this->color = color;
    }
    string GetColor() const {
        return this->color;
    }

    void SetDisplay(double display) {
        if (display == 5.4)
        {
            this->display_diagonol = display;
        }
        else
        {
            cout << "Wrong display diagonol" << endl;
        }
    }
    double GetDisplay() const {
        return this->display_diagonol;
    }

    void SetMemory(double memory) {
        if (memory >= 32 && memory <= 128)
        {
            this->memory = memory;
        }
        else
        {
            cout << "You do not have such memory on this phone" << endl;
        }
    }
    double GetMemory() const {
        return this->memory;
    }

    void SetCamera(int camera) {
        if (camera >= 1 && camera <= 2)
        {
            this->cameras_count = camera;
        }
        else
        {
            cout << "You can make pictures only with one or two cameras on this phone" << endl;
        }
    }
    int GetCamera() const {
        return this->cameras_count;
    }

    void CameraClick() {
        cout << "click\n";
    }

    void Photo() {
        cout << "çàðàç ÿê çðîáëþ ãàðíå ôîòî\n";
    }

    void Memory() {
        cout << "íà ïðèñòð¿ íåìàº â³ëüíîãî ì³ñöÿ\n";

    }
    void Calls() {
        cout << "âõ³äíèé äçâ³íîê\n";
    }

    void Music() {
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }

    void Print() const
    {
        cout << "Model: " << phone_model << "\n";
        cout << "Color: " << color << "\n";
        cout << "Display diagonol: " << display_diagonol << "\n";
        cout << "Memory: " << memory << "\n";
    }
};

class Music {
private:
    string song_name;
    string kind_of_song;
    string song_author;
    string song_language;
    int song_release;

public:
    Music()
    {
        cout << "C-TOR without parameters!\n";
        SetSongName("i hate to admit");
        SetAuthor("Bang Chan");
        SetLanguage("English and Korean");
        SetSongKind("sad");
        SetSongRelease(2022); //year
    }

    Music(string song_name, string song_author)
    {
        cout << "C-TOR WITH parameters!\n";
        SetSongName(song_name);
        SetAuthor(song_author);
        SetLanguage("English and Korean");
        SetSongKind("sad");
        SetSongRelease(2022); //year
    }

    void SetSongName(string name) {
        this->song_name = name;
    }
    string GetSongName() const {
        return this->song_name;
    }

    void SetSongKind(string kind) {
        this->kind_of_song = kind;
    }
    string GetSongKind() const {
        return this->kind_of_song;
    }

    void SetAuthor(string author) {
        this->song_author = author;
    }
    string GetAuthor() const {
        return this->song_author;
    }

    void SetLanguage(string language) {
        this->song_language = language;
    }
    string GetLanguage() const {
        return this->song_language;
    }

    void SetSongRelease(int release) {
        if (release == 2022)
        {
            this->song_release = release;
        }
        else
        {
            cout << "Song release year is incorrect" << endl;
        }
    }
    int GetSongRelease() const {
        return this->song_release;
    }

    void Lyrics() {
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() {
        cout << "â³äòâîðþºòüñÿ ïðèºìíà ìåëîä³ÿ\n";
    }

    void Mood() {
        cout << "ÿêà ÷óäîâà ï³ñíÿ\n";
    }

    void Vocabulary() {
        cout << "î, íîâå ñëîâî\n";
    }

    void Headphones() {
        cout << "*ïîêà÷óþ ãîëîâîþ ó ðèòì ìóçèêè*\n";
    }

    void Print() const
    {
        cout << "Song name: " << song_name << "\n";
        cout << "Author: " << song_author << "\n";
        cout << "Kind of song: " << kind_of_song << "\n";
        cout << "Song release: " << song_release << "\n";
        cout << "Song language: " << song_language << "\n";
    }
};

int main()
{
	setlocale(0, "");
	Parrot p; // Sarah 4 
	p.Print();

	Parrot a("Doonie", 2);
	a.Print();

    setlocale(0, "");
    Human h; //Alice 18
    h.Print();

    Human b("Alice", 18);
    b.Print();

    setlocale(0, "");
    Room r;
    r.Print();

    Room c("Seoul", 18);
    c.Print();
    
    setlocale(0, "");
    Phone ph; 
    ph.Print();

    Phone d("IPhone13", "blue");
    d.Print();

    setlocale(0, "");
    Music m;
    m.Print();

    Music e("i hate to admit", "Bang Chan");
    e.Print();
}