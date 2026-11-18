#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POCAEGGMEOL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NOHHFCICPEH_COBHFNFAMJC_OFFSET UNITYSDK_OFFSET(0x17FD9220)
#define NOHHFCICPEH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FD94A0)
#define NOHHFCICPEH_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x17FD9360)
#define NOHHFCICPEH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FD90D0)
#define NOHHFCICPEH_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17FD90E0)
#define NOHHFCICPEH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FD90C0)
#define NOHHFCICPEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD90B0)

inline static constexpr unsigned int NOHHFCICPEH_TypeDefinitionIndex = 15353;

class NOHHFCICPEH : public ::System::Object
{
public:
	::POCAEGGMEOL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KIALABKLANK; // 0x28
	::System::Int32 PCCPGAMLEMB; // 0x2C
	::System::Int32 OKBBGPGIODD; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::POCAEGGMEOL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POCAEGGMEOL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOHHFCICPEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHFCICPEH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHHFCICPEH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHFCICPEH_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 COBHFNFAMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHFCICPEH_COBHFNFAMJC_OFFSET))(this);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHFCICPEH_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHHFCICPEH_COFGIJJOFLP_OFFSET))(this);
	}
};
