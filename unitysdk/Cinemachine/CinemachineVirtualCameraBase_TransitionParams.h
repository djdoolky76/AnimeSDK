#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
namespace Cinemachine { class CinemachineBrain_VcamActivatedEvent; }

namespace Cinemachine
{
	struct alignas(8) CinemachineVirtualCameraBase_TransitionParams
	{
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_BlendHint; // 0x10
		::System::Boolean m_InheritPosition; // 0x14
		::System::Byte _padding0[0x3];
		::Cinemachine::CinemachineBrain_VcamActivatedEvent* m_OnCameraLive; // 0x18
	};
}
