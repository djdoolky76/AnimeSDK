#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OANNIOEJIIK_FABKMFLNAEN_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xE0E2790)
#define OANNIOEJIIK_FABKMFLNAEN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E2780)

inline static constexpr unsigned int OANNIOEJIIK_FABKMFLNAEN_TypeDefinitionIndex = 40560;

class OANNIOEJIIK_FABKMFLNAEN : public ::System::Object
{
public:
	::HOCDHMEPPEG BOKLBCNADLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNIOEJIIK_FABKMFLNAEN__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNIOEJIIK_FABKMFLNAEN_LIDNPLMPHAL_OFFSET))(this);
	}
};
