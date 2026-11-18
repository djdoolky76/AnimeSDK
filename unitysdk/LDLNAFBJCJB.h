#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEJBBPHHGNO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LDLNAFBJCJB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AAF6BD0)
#define LDLNAFBJCJB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AAF6BC0)
#define LDLNAFBJCJB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AAF6A70)
#define LDLNAFBJCJB_MHHCGJCCLEO_OFFSET UNITYSDK_OFFSET(0x1AAF6A80)
#define LDLNAFBJCJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF6A60)

inline static constexpr unsigned int LDLNAFBJCJB_TypeDefinitionIndex = 15912;

class LDLNAFBJCJB : public ::System::Object
{
public:
	::BEJBBPHHGNO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MLJEOLLLDDJ; // 0x2C

	::System::Void _ctor(::BEJBBPHHGNO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BEJBBPHHGNO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDLNAFBJCJB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNAFBJCJB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MHHCGJCCLEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNAFBJCJB_MHHCGJCCLEO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDLNAFBJCJB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLNAFBJCJB_COFGIJJOFLP_OFFSET))(this);
	}
};
