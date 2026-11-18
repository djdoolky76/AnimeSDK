#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLMKMPMAGCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HDJIHCCLLIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160F0F90)
#define HDJIHCCLLIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160F0E30)
#define HDJIHCCLLIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160F0F80)
#define HDJIHCCLLIN_ODDCGKLEFIB_OFFSET UNITYSDK_OFFSET(0x160F0E40)
#define HDJIHCCLLIN__CTOR_OFFSET UNITYSDK_OFFSET(0x160F0E20)

inline static constexpr unsigned int HDJIHCCLLIN_TypeDefinitionIndex = 12333;

class HDJIHCCLLIN : public ::System::Object
{
public:
	::GLMKMPMAGCB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 ACGDIOLEBJL; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::GLMKMPMAGCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GLMKMPMAGCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HDJIHCCLLIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDJIHCCLLIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ODDCGKLEFIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIHCCLLIN_ODDCGKLEFIB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIHCCLLIN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIHCCLLIN_COFGIJJOFLP_OFFSET))(this);
	}
};
