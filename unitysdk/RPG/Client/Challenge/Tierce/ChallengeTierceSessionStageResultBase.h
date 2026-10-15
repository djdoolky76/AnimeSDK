#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMOFOBCINL;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC94C280)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xC94C270)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC94C260)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultBase_TypeDefinitionIndex = 81485;

	class ChallengeTierceSessionStageResultBase : public ::System::Object
	{
	public:
		::System::Boolean _IsWin_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::PMMOFOBCINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_GET_ISWIN_OFFSET))(this);
		}

	};
}
