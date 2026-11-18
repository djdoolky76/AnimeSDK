#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCAFIMFIOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AKMJAPHLLBK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1876F8A0)
#define AKMJAPHLLBK_ECANOFAHABE_OFFSET UNITYSDK_OFFSET(0x1876F790)
#define AKMJAPHLLBK_EMHCPPKBJDI_OFFSET UNITYSDK_OFFSET(0x1876F620)
#define AKMJAPHLLBK_FLAKGMHFGPE_OFFSET UNITYSDK_OFFSET(0x1876F280)
#define AKMJAPHLLBK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1876F4D0)
#define AKMJAPHLLBK_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1876F390)
#define AKMJAPHLLBK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1876F780)
#define AKMJAPHLLBK_NBPPEOAKFGL_OFFSET UNITYSDK_OFFSET(0x1876F4E0)
#define AKMJAPHLLBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1876F270)

inline static constexpr unsigned int AKMJAPHLLBK_TypeDefinitionIndex = 12316;

class AKMJAPHLLBK : public ::System::Object
{
public:
	::HMCAFIMFIOO HBDPAIKANDB; // 0x10
	::System::String* GHFFAKEDCOI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* GPMLEEBNJCB; // 0x30
	::System::Int32 LBDNFEHNCCK; // 0x38
	::System::Int32 OKBBGPGIODD; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Boolean GHPDFDKDIDO; // 0x43

	::System::Void _ctor(::HMCAFIMFIOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HMCAFIMFIOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AKMJAPHLLBK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FLAKGMHFGPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_FLAKGMHFGPE_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NBPPEOAKFGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_NBPPEOAKFGL_OFFSET))(this);
	}

	::System::Boolean EMHCPPKBJDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_EMHCPPKBJDI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ECANOFAHABE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_ECANOFAHABE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMJAPHLLBK_COFGIJJOFLP_OFFSET))(this);
	}
};
