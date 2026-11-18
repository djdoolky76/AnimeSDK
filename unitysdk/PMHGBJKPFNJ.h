#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPCGFCFBKOI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PMHGBJKPFNJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0B3610)
#define PMHGBJKPFNJ_FFAFCFOJOKJ_OFFSET UNITYSDK_OFFSET(0x1C0B3500)
#define PMHGBJKPFNJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C0B3980)
#define PMHGBJKPFNJ_IAILKPHLDOM_OFFSET UNITYSDK_OFFSET(0x1C0B3840)
#define PMHGBJKPFNJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0B3990)
#define PMHGBJKPFNJ_MAGONACILFL_OFFSET UNITYSDK_OFFSET(0x1C0B33C0)
#define PMHGBJKPFNJ_NMCELGNIMJJ_OFFSET UNITYSDK_OFFSET(0x1C0B3700)
#define PMHGBJKPFNJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C0B3280)
#define PMHGBJKPFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B3270)

inline static constexpr unsigned int PMHGBJKPFNJ_TypeDefinitionIndex = 13808;

class PMHGBJKPFNJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JEGHOOCFDNL; // 0x18
	::DPCGFCFBKOI HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 LBBBAMOFCJE; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 LMEOCHPMKEB; // 0x3C
	::System::Int32 BJCICKOGLOP; // 0x40

	::System::Void _ctor(::DPCGFCFBKOI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPCGFCFBKOI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 MAGONACILFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_MAGONACILFL_OFFSET))(this);
	}

	::System::String* FFAFCFOJOKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_FFAFCFOJOKJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NMCELGNIMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_NMCELGNIMJJ_OFFSET))(this);
	}

	::System::Int32 IAILKPHLDOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_IAILKPHLDOM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGBJKPFNJ_LJANCIBECFG_OFFSET))(this);
	}
};
