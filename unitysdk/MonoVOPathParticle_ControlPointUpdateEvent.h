#pragma once
#include "unitysdk/unitysdk.h"

#define MONOVOPATHPARTICLE_CONTROLPOINTUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13C20D90)

inline static constexpr unsigned int MonoVOPathParticle_ControlPointUpdateEvent_TypeDefinitionIndex = 78871;

class MonoVOPathParticle_ControlPointUpdateEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CONTROLPOINTUPDATEEVENT__CTOR_OFFSET))(this);
	}
};
