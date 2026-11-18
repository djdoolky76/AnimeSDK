#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEBEJFHFCCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MJFKBLDDHKM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFDF870)
#define MJFKBLDDHKM_FHLGKCGLOBD_OFFSET UNITYSDK_OFFSET(0x1CFDFBE0)
#define MJFKBLDDHKM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFDFD20)
#define MJFKBLDDHKM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFDF860)
#define MJFKBLDDHKM_NMKANJPEPBH_OFFSET UNITYSDK_OFFSET(0x1CFDF960)
#define MJFKBLDDHKM_OCDOGALCENP_OFFSET UNITYSDK_OFFSET(0x1CFDFAA0)
#define MJFKBLDDHKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDF850)

inline static constexpr unsigned int MJFKBLDDHKM_TypeDefinitionIndex = 11724;

class MJFKBLDDHKM : public ::System::Object
{
public:
	::KEBEJFHFCCK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KHDMHMFOIEE; // 0x28
	::System::Int32 AFNHDOAEIEH; // 0x2C
	::System::Int32 CBJPNLODMDM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::KEBEJFHFCCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KEBEJFHFCCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MJFKBLDDHKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NMKANJPEPBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_NMKANJPEPBH_OFFSET))(this);
	}

	::System::Int32 OCDOGALCENP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_OCDOGALCENP_OFFSET))(this);
	}

	::System::Int32 FHLGKCGLOBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_FHLGKCGLOBD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJFKBLDDHKM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
