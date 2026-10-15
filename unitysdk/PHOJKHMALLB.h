#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHCNDENHLGO;
class ICMJACOKIPI;
class PEOKJEOOOJD;
class PMMOFOBCINL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define PHOJKHMALLB_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xC2587D0)
#define PHOJKHMALLB_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0xC2589C0)
#define PHOJKHMALLB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC258620)

	class PHOJKHMALLB : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* BPLPBPMEODA(::DHCNDENHLGO* a1, ::PMMOFOBCINL* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::DHCNDENHLGO*, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + PHOJKHMALLB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* BPLPBPMEODA_1(::DHCNDENHLGO* a1, ::PEOKJEOOOJD* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::DHCNDENHLGO*, ::PEOKJEOOOJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHOJKHMALLB_BPLPBPMEODA_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* BPLPBPMEODA_2(::DHCNDENHLGO* a1, ::ICMJACOKIPI* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::DHCNDENHLGO*, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + PHOJKHMALLB_BPLPBPMEODA_2_OFFSET))(a1, a2);
		}

	};
