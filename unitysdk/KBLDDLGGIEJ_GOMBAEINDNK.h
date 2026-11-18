#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KBLDDLGGIEJ_GOMBAEINDNK_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1A498180)
#define KBLDDLGGIEJ_GOMBAEINDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A497E10)

inline static constexpr unsigned int KBLDDLGGIEJ_GOMBAEINDNK_TypeDefinitionIndex = 44522;

class KBLDDLGGIEJ_GOMBAEINDNK : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_GOMBAEINDNK__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_GOMBAEINDNK_LIDNPLMPHAL_OFFSET))(this);
	}
};
