#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class MGCJMNOPFEB;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define MGCJMNOPFEB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9109F0)
#define MGCJMNOPFEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB910BC0)
#define MGCJMNOPFEB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB910B50)
#define MGCJMNOPFEB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB910A80)

inline static constexpr unsigned int MGCJMNOPFEB_TypeDefinitionIndex = 78177;

	class MGCJMNOPFEB : public ::AJHHFMBOCEN
	{
	public:
		::System::String* GLGOFGALBHP; // 0x20
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJMNOPFEB_CTOR_OFFSET))(this);
		}

		static ::MGCJMNOPFEB* BPLPBPMEODA(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
		{
			return ((::MGCJMNOPFEB*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + MGCJMNOPFEB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJMNOPFEB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJMNOPFEB_ONCLEAR_OFFSET))(this);
		}

	};
