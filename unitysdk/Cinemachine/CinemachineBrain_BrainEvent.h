#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19C3A970)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_BrainEvent_TypeDefinitionIndex = 40649;

	class CinemachineBrain_BrainEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT_CTOR_OFFSET))(this);
		}

	};
}
