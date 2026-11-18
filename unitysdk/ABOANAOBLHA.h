#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ABOANAOBLHA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8DAC0)

inline static constexpr unsigned int ABOANAOBLHA_TypeDefinitionIndex = 62528;

class ABOANAOBLHA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOANAOBLHA__CTOR_OFFSET))(this);
	}
};
