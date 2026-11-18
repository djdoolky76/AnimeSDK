#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ADCIAOHPKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC37F0)

inline static constexpr unsigned int ADCIAOHPKKC_TypeDefinitionIndex = 86396;

class ADCIAOHPKKC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCIAOHPKKC__CTOR_OFFSET))(this);
	}
};
