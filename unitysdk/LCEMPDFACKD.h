#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOECEAPNEDA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LCEMPDFACKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7ED5B0)
#define LCEMPDFACKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7ED920)
#define LCEMPDFACKD_JDJKENGIHGN_OFFSET UNITYSDK_OFFSET(0x1B7ED1F0)
#define LCEMPDFACKD_JOKNJECBDAM_OFFSET UNITYSDK_OFFSET(0x1B7ED470)
#define LCEMPDFACKD_KJIOJINCCNP_OFFSET UNITYSDK_OFFSET(0x1B7ED6A0)
#define LCEMPDFACKD_LCDDLAGPFOG_OFFSET UNITYSDK_OFFSET(0x1B7ED7E0)
#define LCEMPDFACKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7ED930)
#define LCEMPDFACKD_PKHMJIMPLJM_OFFSET UNITYSDK_OFFSET(0x1B7ED330)
#define LCEMPDFACKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ED1E0)

inline static constexpr unsigned int LCEMPDFACKD_TypeDefinitionIndex = 16978;

class LCEMPDFACKD : public ::System::Object
{
public:
	::DOECEAPNEDA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 NKKJCANAFPJ; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 LCLJPHACAFK; // 0x30
	::System::Int32 IILFKNGCGPD; // 0x34
	::System::Int32 FBCKEBEEBIP; // 0x38
	::System::Int32 GEGFCIGLKCP; // 0x3C

	::System::Void _ctor(::DOECEAPNEDA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOECEAPNEDA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCEMPDFACKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JDJKENGIHGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_JDJKENGIHGN_OFFSET))(this);
	}

	::System::Int32 PKHMJIMPLJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_PKHMJIMPLJM_OFFSET))(this);
	}

	::System::Int32 JOKNJECBDAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_JOKNJECBDAM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KJIOJINCCNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_KJIOJINCCNP_OFFSET))(this);
	}

	::System::Int32 LCDDLAGPFOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_LCDDLAGPFOG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCEMPDFACKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEMPDFACKD_LJANCIBECFG_OFFSET))(this);
	}
};
