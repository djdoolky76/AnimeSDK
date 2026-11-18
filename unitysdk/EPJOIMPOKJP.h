#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EPJOIMPOKJP__CTOR_OFFSET UNITYSDK_OFFSET(0x11AABB10)

inline static constexpr unsigned int EPJOIMPOKJP_TypeDefinitionIndex = 47548;

class EPJOIMPOKJP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOIMPOKJP__CTOR_OFFSET))(this);
	}
};
