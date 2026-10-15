#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"
class ICMJACOKIPI;
class PEOKJEOOOJD;
class PMMOFOBCINL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultOfMemory; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC953B80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC953BB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_3_OFFSET UNITYSDK_OFFSET(0xC953C00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC953B70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_GET_DEADMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC953B50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_GET_USEDROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC953B60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_WITH_OFFSET UNITYSDK_OFFSET(0xC953C30)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfMemory_TypeDefinitionIndex = 81490;

	class ChallengeTierceSessionStageResultOfMemory : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _UsedRoundCount_k__BackingField; // 0x18
		::System::Int32 _DeadMemberCount_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::PMMOFOBCINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::PEOKJEOOOJD* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEOKJEOOOJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::ICMJACOKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_CTOR_3_OFFSET))(this, a1);
		}

		::System::Int32 get_DeadMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_GET_DEADMEMBERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UsedRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_GET_USEDROUNDCOUNT_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfMemory* With(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfMemory*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFMEMORY_WITH_OFFSET))(this, a1, a2);
		}

	};
}
