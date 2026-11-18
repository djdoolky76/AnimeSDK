#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OELJBPIGDGC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OODFNHKBLMD_AONFBLPHCML_OFFSET UNITYSDK_OFFSET(0x1CD054B0)
#define OODFNHKBLMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CD05870)
#define OODFNHKBLMD_FEEECLPBKON_OFFSET UNITYSDK_OFFSET(0x1CD05370)
#define OODFNHKBLMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CD05970)
#define OODFNHKBLMD_LIPPLOIFFBP_OFFSET UNITYSDK_OFFSET(0x1CD055F0)
#define OODFNHKBLMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CD05960)
#define OODFNHKBLMD_LLGJBKFEPGD_OFFSET UNITYSDK_OFFSET(0x1CD05230)
#define OODFNHKBLMD_OHIINODNHHL_OFFSET UNITYSDK_OFFSET(0x1CD05730)
#define OODFNHKBLMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD05220)

inline static constexpr unsigned int OODFNHKBLMD_TypeDefinitionIndex = 13812;

class OODFNHKBLMD : public ::System::Object
{
public:
	::OELJBPIGDGC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MAOFOAMMFGL; // 0x2C
	::System::Int32 OHMBFIOJIHP; // 0x30
	::System::Int32 JNJPPLOPPBM; // 0x34
	::System::Int32 POPAHEOCIKC; // 0x38
	::System::Int32 GGDPGLBJNPE; // 0x3C

	::System::Void _ctor(::OELJBPIGDGC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OELJBPIGDGC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OODFNHKBLMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LLGJBKFEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_LLGJBKFEPGD_OFFSET))(this);
	}

	::System::Int32 FEEECLPBKON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_FEEECLPBKON_OFFSET))(this);
	}

	::System::Int32 AONFBLPHCML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_AONFBLPHCML_OFFSET))(this);
	}

	::System::Int32 LIPPLOIFFBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_LIPPLOIFFBP_OFFSET))(this);
	}

	::System::Int32 OHIINODNHHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_OHIINODNHHL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OODFNHKBLMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OODFNHKBLMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
