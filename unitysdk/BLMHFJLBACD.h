#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDIIHAOLPOP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BLMHFJLBACD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C51D2E0)
#define BLMHFJLBACD_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1C51D040)
#define BLMHFJLBACD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C51D2D0)
#define BLMHFJLBACD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1C51D190)
#define BLMHFJLBACD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C51D180)
#define BLMHFJLBACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51D030)

inline static constexpr unsigned int BLMHFJLBACD_TypeDefinitionIndex = 17032;

class BLMHFJLBACD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FDIIHAOLPOP HBDPAIKANDB; // 0x18
	::System::Int32 PCCPGAMLEMB; // 0x28
	::System::Int32 POKJNGILNLB; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::FDIIHAOLPOP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDIIHAOLPOP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BLMHFJLBACD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMHFJLBACD_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMHFJLBACD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMHFJLBACD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLMHFJLBACD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMHFJLBACD_COFGIJJOFLP_OFFSET))(this);
	}
};
