#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBENHJOABPO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KCNHCAPAFIO_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x1A508640)
#define KCNHCAPAFIO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A508550)
#define KCNHCAPAFIO_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1A5082C0)
#define KCNHCAPAFIO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A508400)
#define KCNHCAPAFIO_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x1A508410)
#define KCNHCAPAFIO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5082B0)
#define KCNHCAPAFIO_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x1A508170)
#define KCNHCAPAFIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A508160)

inline static constexpr unsigned int KCNHCAPAFIO_TypeDefinitionIndex = 15341;

class KCNHCAPAFIO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FBENHJOABPO HBDPAIKANDB; // 0x18
	::System::Int32 JKLCALGBGJP; // 0x28
	::System::Int32 CDPMOEENODL; // 0x2C
	::System::Int32 OIBEAJNLJAB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 ADNHCHPOFEL; // 0x38

	::System::Void _ctor(::FBENHJOABPO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBENHJOABPO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KCNHCAPAFIO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NEBLIFEABCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_NEBLIFEABCP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LFPFCAFBOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNHCAPAFIO_BHMMKDGCLGB_OFFSET))(this);
	}
};
