#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ONKPJKCDPJG.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define AFPAAGFDMMK_BKKONEOAPLF_OFFSET UNITYSDK_OFFSET(0xD5D3E60)
#define AFPAAGFDMMK_CDIDIDOFHIE_OFFSET UNITYSDK_OFFSET(0xD5D2280)
#define AFPAAGFDMMK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D1E10)
#define AFPAAGFDMMK_EPAFKJMMPDP_OFFSET UNITYSDK_OFFSET(0xD5D25E0)
#define AFPAAGFDMMK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD5D1F80)
#define AFPAAGFDMMK_HPANILEPOGM_OFFSET UNITYSDK_OFFSET(0xD5D4580)
#define AFPAAGFDMMK_IDCGMGLLPBE_OFFSET UNITYSDK_OFFSET(0xD5D4380)
#define AFPAAGFDMMK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5D2230)
#define AFPAAGFDMMK_LNFBJCCHOEA_OFFSET UNITYSDK_OFFSET(0xD5D4490)
#define AFPAAGFDMMK_NMNKLBLICPD_OFFSET UNITYSDK_OFFSET(0xD5D4400)
#define AFPAAGFDMMK_OCGBGDEOKEF_OFFSET UNITYSDK_OFFSET(0xD5D3710)
#define AFPAAGFDMMK_PPMAAOACDMH_OFFSET UNITYSDK_OFFSET(0xD5D1FD0)
#define AFPAAGFDMMK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD5D2490)

inline static constexpr unsigned int AFPAAGFDMMK_TypeDefinitionIndex = 79469;

	class AFPAAGFDMMK : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PPLJFJNEAGM; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* OLDKIELDAMD; // 0x28
		// static const ::System::String* IIMGPOGICFF; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_TEARDOWN_OFFSET))(this);
		}

		::System::Void PPMAAOACDMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_PPMAAOACDMH_OFFSET))(this);
		}

		::System::Void CDIDIDOFHIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_CDIDIDOFHIE_OFFSET))(this);
		}

		::System::Void EPAFKJMMPDP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_EPAFKJMMPDP_OFFSET))(this, a1);
		}

		::System::Void OCGBGDEOKEF(::HIOEAKHGILF* a1, ::ONKPJKCDPJG a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::ONKPJKCDPJG))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_OCGBGDEOKEF_OFFSET))(this, a1, a2);
		}

		::System::Void BKKONEOAPLF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_BKKONEOAPLF_OFFSET))(this, a1);
		}

		::System::Void IDCGMGLLPBE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_IDCGMGLLPBE_OFFSET))(this, a1);
		}

		::System::Void NMNKLBLICPD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_NMNKLBLICPD_OFFSET))(this, a1);
		}

		::System::Void LNFBJCCHOEA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_LNFBJCCHOEA_OFFSET))(this, a1);
		}

		::System::Void HPANILEPOGM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK_HPANILEPOGM_OFFSET))(this, a1);
		}

	};
