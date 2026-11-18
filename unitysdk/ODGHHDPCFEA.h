#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNACKANDHBK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ODGHHDPCFEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E2B2F0)
#define ODGHHDPCFEA_EBJMFEEOFAL_OFFSET UNITYSDK_OFFSET(0x18E2B060)
#define ODGHHDPCFEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E2B1A0)
#define ODGHHDPCFEA_JPNGINMDGPK_OFFSET UNITYSDK_OFFSET(0x18E2AF10)
#define ODGHHDPCFEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E2B050)
#define ODGHHDPCFEA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18E2B1B0)
#define ODGHHDPCFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2AF00)

inline static constexpr unsigned int ODGHHDPCFEA_TypeDefinitionIndex = 14837;

class ODGHHDPCFEA : public ::System::Object
{
public:
	::FNACKANDHBK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 OJKONNKFFLB; // 0x30
	::System::Int32 CHLNIJDPFHM; // 0x34

	::System::Void _ctor(::FNACKANDHBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNACKANDHBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODGHHDPCFEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JPNGINMDGPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_JPNGINMDGPK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EBJMFEEOFAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_EBJMFEEOFAL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGHHDPCFEA_COFGIJJOFLP_OFFSET))(this);
	}
};
