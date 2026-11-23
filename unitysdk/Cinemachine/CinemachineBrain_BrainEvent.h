#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2A7DF30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_BrainEvent_TypeDefinitionIndex = 18495;

	class CinemachineBrain_BrainEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT__CTOR_OFFSET))(this);
		}
	};
}
