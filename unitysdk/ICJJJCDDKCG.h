#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKCNNEIDHAF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ICJJJCDDKCG_AEKPCGBHHBP_OFFSET UNITYSDK_OFFSET(0x174795D0)
#define ICJJJCDDKCG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17479830)
#define ICJJJCDDKCG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x174795C0)
#define ICJJJCDDKCG_GGGKODJNNOM_OFFSET UNITYSDK_OFFSET(0x17479920)
#define ICJJJCDDKCG_HHBBCMBEKFC_OFFSET UNITYSDK_OFFSET(0x17479720)
#define ICJJJCDDKCG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17479710)
#define ICJJJCDDKCG__CTOR_OFFSET UNITYSDK_OFFSET(0x174795B0)

inline static constexpr unsigned int ICJJJCDDKCG_TypeDefinitionIndex = 15556;

class ICJJJCDDKCG : public ::System::Object
{
public:
	::System::String* ONAIKOAKEHM; // 0x10
	::System::String* GPNJCCHKLIP; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::LKCNNEIDHAF HBDPAIKANDB; // 0x28
	::System::String* FBHKBBKBDFP; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 HPGBJCEOIDF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::LKCNNEIDHAF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LKCNNEIDHAF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ICJJJCDDKCG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AEKPCGBHHBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_AEKPCGBHHBP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HHBBCMBEKFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_HHBBCMBEKFC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GGGKODJNNOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJJCDDKCG_GGGKODJNNOM_OFFSET))(this);
	}
};
