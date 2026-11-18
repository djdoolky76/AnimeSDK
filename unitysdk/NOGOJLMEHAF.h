#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKNLKPKCBMK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NOGOJLMEHAF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCF05A0)
#define NOGOJLMEHAF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCF07A0)
#define NOGOJLMEHAF_GAPDJOAAOLM_OFFSET UNITYSDK_OFFSET(0x1CCF0900)
#define NOGOJLMEHAF_LFNIPCOLCIK_OFFSET UNITYSDK_OFFSET(0x1CCF0690)
#define NOGOJLMEHAF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCF07B0)
#define NOGOJLMEHAF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1CCF07C0)
#define NOGOJLMEHAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0590)

inline static constexpr unsigned int NOGOJLMEHAF_TypeDefinitionIndex = 14476;

class NOGOJLMEHAF : public ::System::Object
{
public:
	::System::String* IKBHPOGJJDM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::NKNLKPKCBMK HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 MHOBEALHKJG; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::NKNLKPKCBMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKNLKPKCBMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOGOJLMEHAF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LFNIPCOLCIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_LFNIPCOLCIK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 GAPDJOAAOLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGOJLMEHAF_GAPDJOAAOLM_OFFSET))(this);
	}
};
