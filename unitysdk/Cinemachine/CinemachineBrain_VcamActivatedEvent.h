#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC57E80)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_VcamActivatedEvent_TypeDefinitionIndex = 34193;

	class CinemachineBrain_VcamActivatedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
