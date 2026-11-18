#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOJPCGFABGC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LECOLLELHMO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1BF545B0)
#define LECOLLELHMO_BNOEGBFALOK_OFFSET UNITYSDK_OFFSET(0x1BF544A0)
#define LECOLLELHMO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF54030)
#define LECOLLELHMO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1BF54390)
#define LECOLLELHMO_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1BF53F20)
#define LECOLLELHMO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF54270)
#define LECOLLELHMO_IILIMCCCDID_OFFSET UNITYSDK_OFFSET(0x1BF54130)
#define LECOLLELHMO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF54120)
#define LECOLLELHMO_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x1BF54280)
#define LECOLLELHMO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BF546F0)
#define LECOLLELHMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF53F10)

inline static constexpr unsigned int LECOLLELHMO_TypeDefinitionIndex = 15251;

class LECOLLELHMO : public ::System::Object
{
public:
	::System::String* IMAFCDDJOME; // 0x10
	::System::String* CPDIEBNDFLB; // 0x18
	::System::String* OMDLAHBLCAM; // 0x20
	::System::String* IENCBDEPMFJ; // 0x28
	::System::String* FCHHCCGOBPI; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::JOJPCGFABGC HBDPAIKANDB; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x54
	::System::Int32 BOCICLKAMNK; // 0x58
	::System::Int32 NLCDENLKOPM; // 0x5C

	::System::Void _ctor(::JOJPCGFABGC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOJPCGFABGC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LECOLLELHMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IILIMCCCDID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_IILIMCCCDID_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LECOLLELHMO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_PMBCAKACFJP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* BNOEGBFALOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_BNOEGBFALOK_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOLLELHMO_PPIFNHNGCGO_OFFSET))(this);
	}
};
