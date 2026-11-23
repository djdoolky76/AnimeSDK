#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_ParentHash_TypeDefinitionIndex = 18489;

	struct alignas(4) CinemachineStateDrivenCamera_ParentHash
	{
		::System::Int32 m_Hash; // 0x10
		::System::Int32 m_ParentHash; // 0x14
	};
}
