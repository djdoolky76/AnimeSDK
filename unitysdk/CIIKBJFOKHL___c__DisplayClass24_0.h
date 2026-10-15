#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;

#define CIIKBJFOKHL___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF871D0)
#define CIIKBJFOKHL___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xCF8B120)

	class CIIKBJFOKHL___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType teamType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCandidatesByTeamType_b__0(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS24_0___GETCANDIDATESBYTEAMTYPE_B__0_OFFSET))(this, a1);
		}

	};
