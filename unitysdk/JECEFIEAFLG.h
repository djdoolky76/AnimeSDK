#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNCFIOGMIFL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JECEFIEAFLG_BIGKEHJIPFM_OFFSET UNITYSDK_OFFSET(0x16115790)
#define JECEFIEAFLG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x161158D0)
#define JECEFIEAFLG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x161159C0)
#define JECEFIEAFLG_KIIACOPODKK_OFFSET UNITYSDK_OFFSET(0x16115680)
#define JECEFIEAFLG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x161159D0)
#define JECEFIEAFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x16115670)

inline static constexpr unsigned int JECEFIEAFLG_TypeDefinitionIndex = 13799;

class JECEFIEAFLG : public ::System::Object
{
public:
	::DNCFIOGMIFL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* PHKKGGOCLCK; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 APMLGPEDKHL; // 0x34

	::System::Void _ctor(::DNCFIOGMIFL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNCFIOGMIFL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JECEFIEAFLG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KIIACOPODKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECEFIEAFLG_KIIACOPODKK_OFFSET))(this);
	}

	::System::Int32 BIGKEHJIPFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECEFIEAFLG_BIGKEHJIPFM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECEFIEAFLG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JECEFIEAFLG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JECEFIEAFLG_LJANCIBECFG_OFFSET))(this);
	}
};
