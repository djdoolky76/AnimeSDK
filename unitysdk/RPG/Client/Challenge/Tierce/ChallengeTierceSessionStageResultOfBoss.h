#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"
class ICMJACOKIPI;
class PEOKJEOOOJD;
class PMMOFOBCINL;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC94C2E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC94C320)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_OFFSET UNITYSDK_OFFSET(0xC94C2B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0xC94C2A0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfBoss_TypeDefinitionIndex = 81488;

	class ChallengeTierceSessionStageResultOfBoss : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x18
		::System::Void _ctor(::PMMOFOBCINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::PEOKJEOOOJD* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEOKJEOOOJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::ICMJACOKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_CTOR_2_OFFSET))(this, a1);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET))(this);
		}

	};
}
