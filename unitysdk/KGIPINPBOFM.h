#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAKEHKEHIPN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KGIPINPBOFM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17496670)
#define KGIPINPBOFM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17496770)
#define KGIPINPBOFM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17496760)
#define KGIPINPBOFM_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x17496780)
#define KGIPINPBOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x17496660)

inline static constexpr unsigned int KGIPINPBOFM_TypeDefinitionIndex = 11656;

class KGIPINPBOFM : public ::System::Object
{
public:
	::AAKEHKEHIPN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FEIOEHMLAIM; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::AAKEHKEHIPN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AAKEHKEHIPN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGIPINPBOFM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIPINPBOFM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIPINPBOFM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGIPINPBOFM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIPINPBOFM_MFLMGECAGIA_OFFSET))(this);
	}
};
