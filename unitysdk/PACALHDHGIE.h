#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PACALHDHGIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1295D420)

inline static constexpr unsigned int PACALHDHGIE_TypeDefinitionIndex = 56332;

class PACALHDHGIE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACALHDHGIE__CTOR_OFFSET))(this);
	}
};
