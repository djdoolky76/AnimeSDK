#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMasterAnchorConfig_TypeDefinitionIndex = 78381;

	struct alignas(8) ChimeraDuelMasterAnchorConfig
	{
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* MasterAnchor; // 0x18
	};
}
