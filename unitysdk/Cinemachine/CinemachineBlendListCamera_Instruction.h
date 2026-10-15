#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

namespace Cinemachine
{
	struct alignas(8) CinemachineBlendListCamera_Instruction
	{
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x10
		::System::Single m_Hold; // 0x18
		::System::Byte _padding0[0x4];
		::Cinemachine::CinemachineBlendDefinition m_Blend; // 0x20
	};
}
