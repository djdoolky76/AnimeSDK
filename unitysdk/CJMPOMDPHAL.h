#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CJMPOMDPHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x147A68A0)

inline static constexpr unsigned int CJMPOMDPHAL_TypeDefinitionIndex = 78432;

class CJMPOMDPHAL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMPOMDPHAL__CTOR_OFFSET))(this);
	}
};
