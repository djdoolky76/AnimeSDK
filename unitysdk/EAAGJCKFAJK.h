#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJCHIGNEMDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EAAGJCKFAJK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADCDC40)
#define EAAGJCKFAJK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADCDAE0)
#define EAAGJCKFAJK_INDAKAJECIM_OFFSET UNITYSDK_OFFSET(0x1ADCDAF0)
#define EAAGJCKFAJK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADCDC30)
#define EAAGJCKFAJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCDAD0)

inline static constexpr unsigned int EAAGJCKFAJK_TypeDefinitionIndex = 16121;

class EAAGJCKFAJK : public ::System::Object
{
public:
	::IJCHIGNEMDJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 BOHEGDGLAEC; // 0x2C

	::System::Void _ctor(::IJCHIGNEMDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IJCHIGNEMDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EAAGJCKFAJK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAAGJCKFAJK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 INDAKAJECIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAGJCKFAJK_INDAKAJECIM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAGJCKFAJK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAGJCKFAJK_COFGIJJOFLP_OFFSET))(this);
	}
};
