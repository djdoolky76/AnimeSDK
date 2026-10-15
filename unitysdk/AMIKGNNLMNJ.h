#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define AMIKGNNLMNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15581AB0)
#define AMIKGNNLMNJ_DHHHJEAOPAN_OFFSET UNITYSDK_OFFSET(0x15581BB0)
#define AMIKGNNLMNJ_MIBELCDAKBP_OFFSET UNITYSDK_OFFSET(0x15581CC0)
#define AMIKGNNLMNJ_OOENOOOHBMJ_OFFSET UNITYSDK_OFFSET(0x15581AC0)

	class AMIKGNNLMNJ : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + AMIKGNNLMNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOENOOOHBMJ(::ALMFLCJCHKP* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + AMIKGNNLMNJ_OOENOOOHBMJ_OFFSET))(this, a1, a2);
		}

		::System::Void MIBELCDAKBP(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AMIKGNNLMNJ_MIBELCDAKBP_OFFSET))(this, a1);
		}

		::System::Boolean DHHHJEAOPAN(::ALMFLCJCHKP* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + AMIKGNNLMNJ_DHHHJEAOPAN_OFFSET))(this, a1, a2);
		}

	};
