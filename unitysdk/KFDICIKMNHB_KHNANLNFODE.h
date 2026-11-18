#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KFDICIKMNHB_KHNANLNFODE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17647E00)
#define KFDICIKMNHB_KHNANLNFODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17647DF0)

inline static constexpr unsigned int KFDICIKMNHB_KHNANLNFODE_TypeDefinitionIndex = 81607;

class KFDICIKMNHB_KHNANLNFODE : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDICIKMNHB_KHNANLNFODE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDICIKMNHB_KHNANLNFODE_LIDNPLMPHAL_OFFSET))(this);
	}
};
