#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define NNNIFLIIKMF_AFDCLFNBBJO_OFFSET UNITYSDK_OFFSET(0x17A13890)
#define NNNIFLIIKMF_DJNKECFKIJC_OFFSET UNITYSDK_OFFSET(0x17A139F0)
#define NNNIFLIIKMF_HCPELCFLADG_OFFSET UNITYSDK_OFFSET(0x17A13EE0)
#define NNNIFLIIKMF_PBMLOCMBHPI_OFFSET UNITYSDK_OFFSET(0x17A13CB0)

inline static constexpr unsigned int NNNIFLIIKMF_TypeDefinitionIndex = 84246;

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
