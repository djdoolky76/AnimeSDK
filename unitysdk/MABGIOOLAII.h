#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBCLKNNJGIF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MABGIOOLAII_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF59400)
#define MABGIOOLAII_EAKKDFECFDM_OFFSET UNITYSDK_OFFSET(0x1BF591D0)
#define MABGIOOLAII_EIMNAHILNEA_OFFSET UNITYSDK_OFFSET(0x1BF59090)
#define MABGIOOLAII_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF594F0)
#define MABGIOOLAII_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF593F0)
#define MABGIOOLAII_NBCGMNDPLEI_OFFSET UNITYSDK_OFFSET(0x1BF592E0)
#define MABGIOOLAII__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF59080)

inline static constexpr unsigned int MABGIOOLAII_TypeDefinitionIndex = 15117;

class MABGIOOLAII : public ::System::Object
{
public:
	::BBCLKNNJGIF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* OCGOOHHHJAL; // 0x28
	::System::String* GGAGNBMGKOJ; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 ENPDCNKEOOL; // 0x3C

	::System::Void _ctor(::BBCLKNNJGIF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BBCLKNNJGIF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MABGIOOLAII__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EIMNAHILNEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABGIOOLAII_EIMNAHILNEA_OFFSET))(this);
	}

	::System::String* EAKKDFECFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABGIOOLAII_EAKKDFECFDM_OFFSET))(this);
	}

	::System::String* NBCGMNDPLEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABGIOOLAII_NBCGMNDPLEI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABGIOOLAII_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABGIOOLAII_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MABGIOOLAII_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
