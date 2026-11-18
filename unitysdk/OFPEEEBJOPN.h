#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/System/Object.h"

#define OFPEEEBJOPN_AKIBBMGCGNI_OFFSET UNITYSDK_OFFSET(0x1DE5E830)
#define OFPEEEBJOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5E820)

inline static constexpr unsigned int OFPEEEBJOPN_TypeDefinitionIndex = 94153;

class OFPEEEBJOPN : public ::System::Object
{
public:
	::System::UInt64 DGEBDBEOEFO; // 0x10
	::KBKLCGKKIPI FGLJPLFOOKH; // 0x18
	::KBKLCGKKIPI GMHFKOELHPL; // 0x24
	::KBKLCGKKIPI ONDAPBKBNMM; // 0x30
	::KBKLCGKKIPI FFDFGGJEKJI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPEEEBJOPN__CTOR_OFFSET))(this);
	}

	static ::OFPEEEBJOPN* AKIBBMGCGNI()
	{
		return ((::OFPEEEBJOPN*(*)())((::PBYTE)hIl2Cpp + OFPEEEBJOPN_AKIBBMGCGNI_OFFSET))();
	}
};
