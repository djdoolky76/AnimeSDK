#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x174B3F30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_VcamActivatedEvent_TypeDefinitionIndex = 40650;

	class CinemachineBrain_VcamActivatedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
