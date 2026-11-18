#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLHAIFDBHCH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GHNLGEJIEKH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17468E70)
#define GHNLGEJIEKH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17468E50)
#define GHNLGEJIEKH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17468E60)
#define GHNLGEJIEKH_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x17468D40)
#define GHNLGEJIEKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17468D30)

inline static constexpr unsigned int GHNLGEJIEKH_TypeDefinitionIndex = 15818;

class GHNLGEJIEKH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LLHAIFDBHCH HBDPAIKANDB; // 0x18
	::System::String* NKFMGIIGJCK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::LLHAIFDBHCH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LLHAIFDBHCH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GHNLGEJIEKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLGEJIEKH_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHNLGEJIEKH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLGEJIEKH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLGEJIEKH_COFGIJJOFLP_OFFSET))(this);
	}
};
