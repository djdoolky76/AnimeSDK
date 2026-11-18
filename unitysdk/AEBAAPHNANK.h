#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENLLMIAKLK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AEBAAPHNANK_CDOIOLFPMJG_OFFSET UNITYSDK_OFFSET(0x19F09370)
#define AEBAAPHNANK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F095B0)
#define AEBAAPHNANK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F095A0)
#define AEBAAPHNANK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F09590)
#define AEBAAPHNANK_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x19F09480)
#define AEBAAPHNANK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F09360)

inline static constexpr unsigned int AEBAAPHNANK_TypeDefinitionIndex = 17127;

class AEBAAPHNANK : public ::System::Object
{
public:
	::LENLLMIAKLK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* FMANOJDOPFH; // 0x28
	::System::String* NNKNIDLJAAK; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::LENLLMIAKLK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LENLLMIAKLK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AEBAAPHNANK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CDOIOLFPMJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAAPHNANK_CDOIOLFPMJG_OFFSET))(this);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAAPHNANK_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAAPHNANK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEBAAPHNANK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAAPHNANK_COFGIJJOFLP_OFFSET))(this);
	}
};
