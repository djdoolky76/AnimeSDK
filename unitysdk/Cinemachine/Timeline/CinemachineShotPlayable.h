#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x174F3C30)
#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x174F3890)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineShotPlayable_TypeDefinitionIndex = 40811;

	class CinemachineShotPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET))(this);
		}

	};
}
