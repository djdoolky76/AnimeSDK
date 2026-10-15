#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLLJCAMGMO;

#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC989200)
#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__REFRESHCHALLENGETARGET_B__0_OFFSET UNITYSDK_OFFSET(0xC98A000)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance___c__DisplayClass64_0_TypeDefinitionIndex = 63091;

	class ChallengeInstance___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::IGLLJCAMGMO* curStageKillMonster; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshChallengeTarget_b__0(::IGLLJCAMGMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGLLJCAMGMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__REFRESHCHALLENGETARGET_B__0_OFFSET))(this, a1);
		}

	};
}
