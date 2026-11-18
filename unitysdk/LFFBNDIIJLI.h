#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LFFBNDIIJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x15658D90)

inline static constexpr unsigned int LFFBNDIIJLI_TypeDefinitionIndex = 82366;

class LFFBNDIIJLI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFBNDIIJLI__CTOR_OFFSET))(this);
	}
};
