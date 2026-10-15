#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIBCPIJIJGH;
class DHCNDENHLGO;
class ILGDHAOINBP;
class OIEEAAFAOON;
class OLOFPKHFPJL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define IEBMBLDHPJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EE7DC0)
#define IEBMBLDHPJF_DJNKECFKIJC_OFFSET UNITYSDK_OFFSET(0x15EE7F30)
#define IEBMBLDHPJF_HCPELCFLADG_OFFSET UNITYSDK_OFFSET(0x15EE8060)
#define IEBMBLDHPJF_PBMLOCMBHPI_OFFSET UNITYSDK_OFFSET(0x15EE7FD0)

	class IEBMBLDHPJF : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* BPLPBPMEODA(::DHCNDENHLGO* a1, ::OLOFPKHFPJL* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::DHCNDENHLGO*, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + IEBMBLDHPJF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* DJNKECFKIJC(::CIBCPIJIJGH* a1, ::OLOFPKHFPJL* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::CIBCPIJIJGH*, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + IEBMBLDHPJF_DJNKECFKIJC_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* PBMLOCMBHPI(::ILGDHAOINBP* a1, ::OLOFPKHFPJL* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::ILGDHAOINBP*, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + IEBMBLDHPJF_PBMLOCMBHPI_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* HCPELCFLADG(::OIEEAAFAOON* a1, ::OLOFPKHFPJL* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::OIEEAAFAOON*, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + IEBMBLDHPJF_HCPELCFLADG_OFFSET))(a1, a2);
		}

	};
