#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/RPG/Client/TextID.h"
class DFBNOICFONC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define DFBNOICFONC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF184A80)
#define DFBNOICFONC_CTOR_OFFSET UNITYSDK_OFFSET(0xF184D40)
#define DFBNOICFONC_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF184CC0)
#define DFBNOICFONC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF184B20)

inline static constexpr unsigned int DFBNOICFONC_TypeDefinitionIndex = 80904;

	class DFBNOICFONC : public ::AJHHFMBOCEN
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* OFHPEPANKAL; // 0x20
		::System::Boolean FMNEEONAMNO; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID DIDPADKMCAL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOICFONC_CTOR_OFFSET))(this);
		}

		static ::DFBNOICFONC* BPLPBPMEODA(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a1, ::System::Boolean a2, ::RPG::Client::TextID a3)
		{
			return ((::DFBNOICFONC*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DFBNOICFONC_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOICFONC_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOICFONC_ONCLEAR_OFFSET))(this);
		}

	};
