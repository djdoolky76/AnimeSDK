#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/System/Object.h"
class GBOMMAHOJPG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAFCNCDOJEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E05140)
#define IAFCNCDOJEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E05030)
#define IAFCNCDOJEG_EFNBAEBBHPP_OFFSET UNITYSDK_OFFSET(0x15E04660)
#define IAFCNCDOJEG_EMHAECOEFJD_OFFSET UNITYSDK_OFFSET(0x15E04860)
#define IAFCNCDOJEG_GPKJHCPJKEL_OFFSET UNITYSDK_OFFSET(0x15E04780)
#define IAFCNCDOJEG_KMPCPKMKJNE_OFFSET UNITYSDK_OFFSET(0x15E04E20)
#define IAFCNCDOJEG_LNMIEBBHDGF_OFFSET UNITYSDK_OFFSET(0x15E04CE0)
#define IAFCNCDOJEG_PHDNDNECHMM_OFFSET UNITYSDK_OFFSET(0x15E03F20)

inline static constexpr unsigned int IAFCNCDOJEG_TypeDefinitionIndex = 60636;

	class IAFCNCDOJEG : public ::System::Object
	{
	public:
		::GBOMMAHOJPG* BDPEEAECBDK; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CompetitiveGamePlaySystemPriority, ::GBOMMAHOJPG*>* KAMBJAODFFO; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CompetitiveGamePlaySystemPriority, ::System::Int32>* JHGBDLHCBOO; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CompetitiveGamePlaySystemPriority>* LHIGHMJOGCF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_CTOR_OFFSET))(this);
		}

		::System::Boolean PHDNDNECHMM(::GBOMMAHOJPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBOMMAHOJPG*))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_PHDNDNECHMM_OFFSET))(this, a1);
		}

		::System::Void EMHAECOEFJD(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_EMHAECOEFJD_OFFSET))(this, a1);
		}

		::System::Boolean LNMIEBBHDGF(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_LNMIEBBHDGF_OFFSET))(this, a1);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority EFNBAEBBHPP()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_EFNBAEBBHPP_OFFSET))(this);
		}

		::System::Void KMPCPKMKJNE(::System::Boolean a1, ::RPG::Client::CompetitiveGamePlaySystemPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_KMPCPKMKJNE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GPKJHCPJKEL(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + IAFCNCDOJEG_GPKJHCPJKEL_OFFSET))(this, a1);
		}

	};
