#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int D3D12TextureData_t_TypeDefinitionIndex = 39281;

	struct alignas(4) D3D12TextureData_t
	{
		::System::IntPtr m_pResource; // 0x10
		::System::IntPtr m_pCommandQueue; // 0x18
		::System::UInt32 m_nNodeMask; // 0x20
	};
}
