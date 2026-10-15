#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LABIBNCBFCD;
namespace RPG::Client { class FateGameData; }

#define DIKFNDGHLPP_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xF20A540)
#define DIKFNDGHLPP_CTOR_OFFSET UNITYSDK_OFFSET(0xF20A530)
#define DIKFNDGHLPP_EKJPMMOPBAG_OFFSET UNITYSDK_OFFSET(0xF20A950)
#define DIKFNDGHLPP_FNPDGEAMFBM_OFFSET UNITYSDK_OFFSET(0xF20A7C0)
#define DIKFNDGHLPP_HMHOPHPDIOC_OFFSET UNITYSDK_OFFSET(0xF20A680)
#define DIKFNDGHLPP_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0xF20A900)
#define DIKFNDGHLPP_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xF20A620)

inline static constexpr unsigned int DIKFNDGHLPP_TypeDefinitionIndex = 63991;

	class DIKFNDGHLPP : public ::System::Object
	{
	public:
		::RPG::Client::FateGameData* OPNKKBOLCJO; // 0x10
		::System::Boolean BAGNEDCIKOH; // 0x18
		::System::Boolean FDBLNJAJFPH; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 IPABIHFNOLG; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Void HMHOPHPDIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_HMHOPHPDIOC_OFFSET))(this);
		}

		::System::Void FNPDGEAMFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_FNPDGEAMFBM_OFFSET))(this);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_NAKIGFCHAMF_OFFSET))(this);
		}

		::System::UInt32 EKJPMMOPBAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_EKJPMMOPBAG_OFFSET))(this);
		}

		::LABIBNCBFCD* PDAENODHFCM()
		{
			return ((::LABIBNCBFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFNDGHLPP_PDAENODHFCM_OFFSET))(this);
		}

	};
