#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DHKAFJDNCDI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4EA40)

inline static constexpr unsigned int DHKAFJDNCDI_TypeDefinitionIndex = 77241;

class DHKAFJDNCDI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKAFJDNCDI__CTOR_OFFSET))(this);
	}
};
