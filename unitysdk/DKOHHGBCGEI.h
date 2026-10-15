#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class DKOHHGBCGEI;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define DKOHHGBCGEI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF88C7B0)
#define DKOHHGBCGEI_CTOR_OFFSET UNITYSDK_OFFSET(0xF88C950)
#define DKOHHGBCGEI_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF88C8E0)
#define DKOHHGBCGEI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF88C840)

	class DKOHHGBCGEI : public ::AJHHFMBOCEN
	{
	public:
		::System::String* GOLLNCJAPJC; // 0x20
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOHHGBCGEI_CTOR_OFFSET))(this);
		}

		static ::DKOHHGBCGEI* BPLPBPMEODA(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
		{
			return ((::DKOHHGBCGEI*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + DKOHHGBCGEI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOHHGBCGEI_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOHHGBCGEI_ONCLEAR_OFFSET))(this);
		}

	};
