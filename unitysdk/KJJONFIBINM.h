#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStageState.h"
#include "unitysdk/RPG/Client/PlayVideoQTEVideoPrepareState.h"
#include "unitysdk/System/Object.h"
class AGOAPPMIPPG;

#define KJJONFIBINM_CJPBLLJANMC_OFFSET UNITYSDK_OFFSET(0xBCF1BC0)
#define KJJONFIBINM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF14D0)
#define KJJONFIBINM_EECNDHCCPGM_OFFSET UNITYSDK_OFFSET(0xBCF1B20)
#define KJJONFIBINM_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xBCF17B0)
#define KJJONFIBINM_EPNBCPKMPMJ_OFFSET UNITYSDK_OFFSET(0xBCF1C70)
#define KJJONFIBINM_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBCF1B70)
#define KJJONFIBINM_IMKMHOFCOEM_OFFSET UNITYSDK_OFFSET(0xBCF1AD0)
#define KJJONFIBINM_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xBCF14E0)
#define KJJONFIBINM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBCF19A0)
#define KJJONFIBINM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBCF1750)
#define KJJONFIBINM_MEAOFOABHKG_OFFSET UNITYSDK_OFFSET(0xBCF1CF0)
#define KJJONFIBINM_NGPIANHMMHB_OFFSET UNITYSDK_OFFSET(0xBCF1540)

inline static constexpr unsigned int KJJONFIBINM_TypeDefinitionIndex = 74936;

	class KJJONFIBINM : public ::System::Object
	{
	public:
		::AGOAPPMIPPG* EEFMDEHLLFI; // 0x10
		::System::UInt32 CDOJDPKJMEG; // 0x18
		::System::Single FFPEAEOANBB; // 0x1C
		::RPG::Client::PlayVideoQTEVideoPrepareState MMCEACFMDLM; // 0x20
		::System::Boolean EBOACPBMIMF; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::PlayVideoQTEStageState DLNIGFGLPLJ; // 0x28
		::System::Void _ctor(::AGOAPPMIPPG* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGOAPPMIPPG*, ::System::UInt32))((::PBYTE)hIl2Cpp + KJJONFIBINM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_JIGJDOFEJMI_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJJONFIBINM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean IMKMHOFCOEM(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJJONFIBINM_IMKMHOFCOEM_OFFSET))(this, a1);
		}

		::System::Boolean EECNDHCCPGM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJJONFIBINM_EECNDHCCPGM_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void NGPIANHMMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_NGPIANHMMHB_OFFSET))(this);
		}

		::System::Void CJPBLLJANMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_CJPBLLJANMC_OFFSET))(this);
		}

		::System::Void EGNMELNENAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_EGNMELNENAC_OFFSET))(this);
		}

		::System::Void EPNBCPKMPMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_EPNBCPKMPMJ_OFFSET))(this);
		}

		::System::Void MEAOFOABHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJONFIBINM_MEAOFOABHKG_OFFSET))(this);
		}

	};
