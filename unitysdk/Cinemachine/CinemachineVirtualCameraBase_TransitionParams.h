#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_B2274BBBB52C08C1.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineBrain_VcamActivatedEvent; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_TransitionParams_TypeDefinitionIndex = 18351;

	struct alignas(8) CinemachineVirtualCameraBase_TransitionParams
	{
		::Cinemachine::CinemachineVirtualCameraBase_B2274BBBB52C08C1 m_BlendHint; // 0x10
		::System::Boolean m_InheritPosition; // 0x14
		::System::Byte _padding0[0x3];
		::Cinemachine::CinemachineBrain_VcamActivatedEvent* m_OnCameraLive; // 0x18
	};
}
