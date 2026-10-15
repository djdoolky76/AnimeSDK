#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1666F920)

namespace Cinemachine
{
	class CinemachineBrain_BrainEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT_CTOR_OFFSET))(this);
		}

	};
}
