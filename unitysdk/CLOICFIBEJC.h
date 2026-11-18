#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGDEKBPCPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CLOICFIBEJC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16612410)
#define CLOICFIBEJC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16612500)
#define CLOICFIBEJC_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x16612510)
#define CLOICFIBEJC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16612650)
#define CLOICFIBEJC__CTOR_OFFSET UNITYSDK_OFFSET(0x16612400)

inline static constexpr unsigned int CLOICFIBEJC_TypeDefinitionIndex = 12050;

class CLOICFIBEJC : public ::System::Object
{
public:
	::MAGDEKBPCPM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x2C

	::System::Void _ctor(::MAGDEKBPCPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MAGDEKBPCPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLOICFIBEJC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICFIBEJC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLOICFIBEJC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICFIBEJC_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOICFIBEJC_LJANCIBECFG_OFFSET))(this);
	}
};
