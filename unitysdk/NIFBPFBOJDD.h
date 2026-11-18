#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHDNLAKNCHJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NIFBPFBOJDD_BFPBIGHHEDN_OFFSET UNITYSDK_OFFSET(0x195B72A0)
#define NIFBPFBOJDD_CEINMNALLGH_OFFSET UNITYSDK_OFFSET(0x195B6E00)
#define NIFBPFBOJDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195B6F40)
#define NIFBPFBOJDD_ECIBJKDEMON_OFFSET UNITYSDK_OFFSET(0x195B7050)
#define NIFBPFBOJDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195B7040)
#define NIFBPFBOJDD_GFGFBMBNBLG_OFFSET UNITYSDK_OFFSET(0x195B7190)
#define NIFBPFBOJDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195B7030)
#define NIFBPFBOJDD__CTOR_OFFSET UNITYSDK_OFFSET(0x195B6DF0)

inline static constexpr unsigned int NIFBPFBOJDD_TypeDefinitionIndex = 11166;

class NIFBPFBOJDD : public ::System::Object
{
public:
	::System::String* JLGAJDDOJFP; // 0x10
	::System::String* PBFDDNNMOEM; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* PPOGDMEBHGB; // 0x28
	::MHDNLAKNCHJ HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 MMPOCNMIOKM; // 0x44
	::System::Int32 OEGPNCLENEL; // 0x48
	::System::Int32 HHFDJAOOJEM; // 0x4C

	::System::Void _ctor(::MHDNLAKNCHJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MHDNLAKNCHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NIFBPFBOJDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CEINMNALLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_CEINMNALLGH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ECIBJKDEMON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_ECIBJKDEMON_OFFSET))(this);
	}

	::System::String* GFGFBMBNBLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_GFGFBMBNBLG_OFFSET))(this);
	}

	::System::Int32 BFPBIGHHEDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFBPFBOJDD_BFPBIGHHEDN_OFFSET))(this);
	}
};
