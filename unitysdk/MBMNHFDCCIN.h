#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHNCFBIEIB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MBMNHFDCCIN_CAHMFOGKKCJ_OFFSET UNITYSDK_OFFSET(0x17FC1AE0)
#define MBMNHFDCCIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FC17C0)
#define MBMNHFDCCIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FC17B0)
#define MBMNHFDCCIN_JOCDENLGNJM_OFFSET UNITYSDK_OFFSET(0x17FC1BF0)
#define MBMNHFDCCIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FC1AD0)
#define MBMNHFDCCIN_MAKAJDJANNE_OFFSET UNITYSDK_OFFSET(0x17FC19C0)
#define MBMNHFDCCIN_OMFAGJLFNKC_OFFSET UNITYSDK_OFFSET(0x17FC18B0)
#define MBMNHFDCCIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC17A0)

inline static constexpr unsigned int MBMNHFDCCIN_TypeDefinitionIndex = 15176;

class MBMNHFDCCIN : public ::System::Object
{
public:
	::System::String* EGPNCNELFAB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* ANAJDANEAHB; // 0x20
	::AJHNCFBIEIB HBDPAIKANDB; // 0x28
	::System::String* DEIENIADLNB; // 0x38
	::System::String* HPIDFOEGDFF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::AJHNCFBIEIB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJHNCFBIEIB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MBMNHFDCCIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OMFAGJLFNKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_OMFAGJLFNKC_OFFSET))(this);
	}

	::System::String* MAKAJDJANNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_MAKAJDJANNE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CAHMFOGKKCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_CAHMFOGKKCJ_OFFSET))(this);
	}

	::System::String* JOCDENLGNJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMNHFDCCIN_JOCDENLGNJM_OFFSET))(this);
	}
};
