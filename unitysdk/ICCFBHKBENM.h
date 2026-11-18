#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBFFFLJLFDN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ICCFBHKBENM_CJKKGHDDJIN_OFFSET UNITYSDK_OFFSET(0x17C16800)
#define ICCFBHKBENM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C16A70)
#define ICCFBHKBENM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C16920)
#define ICCFBHKBENM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C16910)
#define ICCFBHKBENM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17C16930)
#define ICCFBHKBENM__CTOR_OFFSET UNITYSDK_OFFSET(0x17C167F0)

inline static constexpr unsigned int ICCFBHKBENM_TypeDefinitionIndex = 11019;

class ICCFBHKBENM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KBFFFLJLFDN HBDPAIKANDB; // 0x18
	::System::String* KGMDHDHGLLH; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::KBFFFLJLFDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBFFFLJLFDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ICCFBHKBENM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CJKKGHDDJIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCFBHKBENM_CJKKGHDDJIN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCFBHKBENM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICCFBHKBENM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCFBHKBENM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCFBHKBENM_COFGIJJOFLP_OFFSET))(this);
	}
};
