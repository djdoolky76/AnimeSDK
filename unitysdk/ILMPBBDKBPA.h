#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ILMPBBDKBPA__CTOR_OFFSET UNITYSDK_OFFSET(0x197DAF10)

inline static constexpr unsigned int ILMPBBDKBPA_TypeDefinitionIndex = 74339;

class ILMPBBDKBPA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMPBBDKBPA__CTOR_OFFSET))(this);
	}
};
