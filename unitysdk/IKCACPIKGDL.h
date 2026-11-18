#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJEMBADFOEG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IKCACPIKGDL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4FA110)
#define IKCACPIKGDL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F9FC0)
#define IKCACPIKGDL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F9FB0)
#define IKCACPIKGDL_NHEHBFPGHIH_OFFSET UNITYSDK_OFFSET(0x1A4F9FD0)
#define IKCACPIKGDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F9FA0)

inline static constexpr unsigned int IKCACPIKGDL_TypeDefinitionIndex = 15500;

class IKCACPIKGDL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CJEMBADFOEG HBDPAIKANDB; // 0x18
	::System::Int32 MEMGGBEEJBL; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::CJEMBADFOEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CJEMBADFOEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IKCACPIKGDL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCACPIKGDL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKCACPIKGDL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NHEHBFPGHIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCACPIKGDL_NHEHBFPGHIH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCACPIKGDL_COFGIJJOFLP_OFFSET))(this);
	}
};
