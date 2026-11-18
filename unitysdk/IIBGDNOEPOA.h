#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEKCJCJHOIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IIBGDNOEPOA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152E6F10)
#define IIBGDNOEPOA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152E7150)
#define IIBGDNOEPOA_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x152E7000)
#define IIBGDNOEPOA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152E7140)
#define IIBGDNOEPOA_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x152E7160)
#define IIBGDNOEPOA__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6F00)

inline static constexpr unsigned int IIBGDNOEPOA_TypeDefinitionIndex = 12123;

class IIBGDNOEPOA : public ::System::Object
{
public:
	::PEKCJCJHOIN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FEIOEHMLAIM; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 ONPMJGJBNOA; // 0x30

	::System::Void _ctor(::PEKCJCJHOIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PEKCJCJHOIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIBGDNOEPOA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGDNOEPOA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGDNOEPOA_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGDNOEPOA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIBGDNOEPOA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGDNOEPOA_MFLMGECAGIA_OFFSET))(this);
	}
};
