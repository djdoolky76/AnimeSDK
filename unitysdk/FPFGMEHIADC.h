#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FPFGMEHIADC__CTOR_OFFSET UNITYSDK_OFFSET(0x125B99E0)

inline static constexpr unsigned int FPFGMEHIADC_TypeDefinitionIndex = 44589;

class FPFGMEHIADC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGMEHIADC__CTOR_OFFSET))(this);
	}
};
