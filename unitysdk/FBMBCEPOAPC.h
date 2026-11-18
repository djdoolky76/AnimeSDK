#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFMBHCMIIFN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FBMBCEPOAPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195270D0)
#define FBMBCEPOAPC_EGOCINKFCGE_OFFSET UNITYSDK_OFFSET(0x19526F90)
#define FBMBCEPOAPC_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x19526E50)
#define FBMBCEPOAPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19526E40)
#define FBMBCEPOAPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19526E30)
#define FBMBCEPOAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19526E20)

inline static constexpr unsigned int FBMBCEPOAPC_TypeDefinitionIndex = 9993;

class FBMBCEPOAPC : public ::System::Object
{
public:
	::DFMBHCMIIFN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 CKIMONPHGIL; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 COLCGPGFHMN; // 0x30

	::System::Void _ctor(::DFMBHCMIIFN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFMBHCMIIFN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FBMBCEPOAPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBCEPOAPC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMBCEPOAPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBCEPOAPC_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Int32 EGOCINKFCGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBCEPOAPC_EGOCINKFCGE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBCEPOAPC_COFGIJJOFLP_OFFSET))(this);
	}
};
