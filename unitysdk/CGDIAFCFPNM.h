#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEFHKFLNLJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CGDIAFCFPNM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5848C0)
#define CGDIAFCFPNM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5849B0)
#define CGDIAFCFPNM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5849C0)
#define CGDIAFCFPNM_OPONJBIJOMB_OFFSET UNITYSDK_OFFSET(0x1A5849D0)
#define CGDIAFCFPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5848B0)

inline static constexpr unsigned int CGDIAFCFPNM_TypeDefinitionIndex = 13339;

class CGDIAFCFPNM : public ::System::Object
{
public:
	::DEFHKFLNLJH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MJGPMLKBAGI; // 0x2C

	::System::Void _ctor(::DEFHKFLNLJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEFHKFLNLJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CGDIAFCFPNM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDIAFCFPNM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGDIAFCFPNM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDIAFCFPNM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OPONJBIJOMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDIAFCFPNM_OPONJBIJOMB_OFFSET))(this);
	}
};
