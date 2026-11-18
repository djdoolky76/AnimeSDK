#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFHMEGGOMAJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DFDDOLLGHHG_APFPBLDHMHM_OFFSET UNITYSDK_OFFSET(0x16617820)
#define DFDDOLLGHHG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16617710)
#define DFDDOLLGHHG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16617810)
#define DFDDOLLGHHG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16617800)
#define DFDDOLLGHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x16617700)

inline static constexpr unsigned int DFDDOLLGHHG_TypeDefinitionIndex = 12119;

class DFDDOLLGHHG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KFHMEGGOMAJ HBDPAIKANDB; // 0x18
	::System::Int32 BHHAGFFCAGK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::KFHMEGGOMAJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KFHMEGGOMAJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFDDOLLGHHG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDDOLLGHHG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDDOLLGHHG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFDDOLLGHHG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 APFPBLDHMHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDDOLLGHHG_APFPBLDHMHM_OFFSET))(this);
	}
};
