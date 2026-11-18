#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define MAJPFJGJGMK_GEBKHONEPIO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x18523960)
#define MAJPFJGJGMK_GEBKHONEPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x18523950)

inline static constexpr unsigned int MAJPFJGJGMK_GEBKHONEPIO_TypeDefinitionIndex = 67964;

class MAJPFJGJGMK_GEBKHONEPIO : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_GEBKHONEPIO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_GEBKHONEPIO_LIDNPLMPHAL_OFFSET))(this);
	}
};
