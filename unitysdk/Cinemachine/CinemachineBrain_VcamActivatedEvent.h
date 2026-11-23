#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2A953B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_VcamActivatedEvent_TypeDefinitionIndex = 18496;

	class CinemachineBrain_VcamActivatedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
