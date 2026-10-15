#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define NNNIFLIIKMF_AFDCLFNBBJO_OFFSET UNITYSDK_OFFSET(0xBCD54D0)
#define NNNIFLIIKMF_DJNKECFKIJC_OFFSET UNITYSDK_OFFSET(0xBCD5630)
#define NNNIFLIIKMF_HCPELCFLADG_OFFSET UNITYSDK_OFFSET(0xBCD5B20)
#define NNNIFLIIKMF_PBMLOCMBHPI_OFFSET UNITYSDK_OFFSET(0xBCD58F0)

	class NNNIFLIIKMF : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* AFDCLFNBBJO(::CKCJOCJGHKC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF_AFDCLFNBBJO_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* DJNKECFKIJC(::CKCJOCJGHKC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF_DJNKECFKIJC_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* PBMLOCMBHPI(::CKCJOCJGHKC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF_PBMLOCMBHPI_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* HCPELCFLADG(::CKCJOCJGHKC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + NNNIFLIIKMF_HCPELCFLADG_OFFSET))(a1);
		}

	};
