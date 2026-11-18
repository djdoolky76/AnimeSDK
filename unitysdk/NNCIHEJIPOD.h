#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NNCIHEJIPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1067B560)

inline static constexpr unsigned int NNCIHEJIPOD_TypeDefinitionIndex = 39041;

class NNCIHEJIPOD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCIHEJIPOD__CTOR_OFFSET))(this);
	}
};
