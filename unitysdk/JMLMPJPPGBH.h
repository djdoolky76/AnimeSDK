#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCCLIMBBLJD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JMLMPJPPGBH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x18BD02C0)
#define JMLMPJPPGBH_BLCGGPBMODE_OFFSET UNITYSDK_OFFSET(0x18BD0410)
#define JMLMPJPPGBH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BD0550)
#define JMLMPJPPGBH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BD0750)
#define JMLMPJPPGBH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BD0400)
#define JMLMPJPPGBH_LLHMIGCLLDE_OFFSET UNITYSDK_OFFSET(0x18BD0640)
#define JMLMPJPPGBH__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD02B0)

inline static constexpr unsigned int JMLMPJPPGBH_TypeDefinitionIndex = 16797;

class JMLMPJPPGBH : public ::System::Object
{
public:
	::System::String* CAAHCHDPPOE; // 0x10
	::PCCLIMBBLJD HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 NLCDENLKOPM; // 0x30
	::System::Int32 OKKNNDCKGNG; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::PCCLIMBBLJD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PCCLIMBBLJD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMLMPJPPGBH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BLCGGPBMODE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_BLCGGPBMODE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LLHMIGCLLDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_LLHMIGCLLDE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLMPJPPGBH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
