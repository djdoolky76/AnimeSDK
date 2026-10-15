#pragma once
#include "unitysdk/unitysdk.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_Instruction_TypeDefinitionIndex = 39751;

	struct alignas(8) CinemachineStateDrivenCamera_Instruction
	{
		::System::Int32 m_FullHash; // 0x10
		::System::Byte _padding0[0x4];
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x18
		::System::Single m_ActivateAfter; // 0x20
		::System::Single m_MinDuration; // 0x24
	};
}
