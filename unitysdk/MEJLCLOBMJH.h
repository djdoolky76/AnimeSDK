#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDNJGBJGPF;
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }

#define MEJLCLOBMJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8D4400)
#define MEJLCLOBMJH_IHOBPIPNEGB_OFFSET UNITYSDK_OFFSET(0xB8D46A0)
#define MEJLCLOBMJH_KFNLKCOAMAO_OFFSET UNITYSDK_OFFSET(0xB8D4620)
#define MEJLCLOBMJH_LLEGMLMJIFA_OFFSET UNITYSDK_OFFSET(0xB8D4910)

inline static constexpr unsigned int MEJLCLOBMJH_TypeDefinitionIndex = 81596;

	class MEJLCLOBMJH : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* BPLPBPMEODA(::ILDNJGBJGPF* a1)
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + MEJLCLOBMJH_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* KFNLKCOAMAO(::RPG::Client::ChallengeData* a1)
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + MEJLCLOBMJH_KFNLKCOAMAO_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* IHOBPIPNEGB(::RPG::Client::ChallengeData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + MEJLCLOBMJH_IHOBPIPNEGB_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* LLEGMLMJIFA(::RPG::Client::ChallengeBossData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeBossData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + MEJLCLOBMJH_LLEGMLMJIFA_OFFSET))(a1, a2);
		}

	};
