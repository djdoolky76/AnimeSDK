#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPCBOOFEIB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CDLMHOEOKDH_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x19BF2920)
#define CDLMHOEOKDH_BGLOMIDKDNL_OFFSET UNITYSDK_OFFSET(0x19BF2720)
#define CDLMHOEOKDH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BF2830)
#define CDLMHOEOKDH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BF2700)
#define CDLMHOEOKDH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BF2710)
#define CDLMHOEOKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF26F0)

inline static constexpr unsigned int CDLMHOEOKDH_TypeDefinitionIndex = 16942;

class CDLMHOEOKDH : public ::System::Object
{
public:
	::HKPCBOOFEIB HBDPAIKANDB; // 0x10
	::System::String* BNNNHFIHALA; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 BPMHKHIBGEJ; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::HKPCBOOFEIB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKPCBOOFEIB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CDLMHOEOKDH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDLMHOEOKDH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLMHOEOKDH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BGLOMIDKDNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLMHOEOKDH_BGLOMIDKDNL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLMHOEOKDH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLMHOEOKDH_APCKPKCNFJE_OFFSET))(this);
	}
};
