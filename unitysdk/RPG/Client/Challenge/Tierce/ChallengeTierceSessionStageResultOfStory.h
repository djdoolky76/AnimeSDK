#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"
class ICMJACOKIPI;
class PEOKJEOOOJD;
class PMMOFOBCINL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultOfStory; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC953CE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC953D00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_3_OFFSET UNITYSDK_OFFSET(0xC953D40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC953CD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0xC953CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_WITHOBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0xC953D60)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfStory_TypeDefinitionIndex = 81491;

	class ChallengeTierceSessionStageResultOfStory : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x18
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::PMMOFOBCINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::PEOKJEOOOJD* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEOKJEOOOJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::ICMJACOKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_CTOR_3_OFFSET))(this, a1);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_GET_OBTAINEDSCORE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory* WithObtainedScore(::System::Int32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_WITHOBTAINEDSCORE_OFFSET))(this, a1);
		}

	};
}
