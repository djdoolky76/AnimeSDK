#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainGridLoader_NMFJPJEFMGN_TypeDefinitionIndex = 51802;

	struct alignas(8) TerrainGridLoader_NMFJPJEFMGN
	{
		::System::Int32 NAENFAMAPBD; // 0x10
		::System::Int32 KGMHGKAFHMK; // 0x14
		::System::Boolean MMOJGCFOMLL; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* HPEJFCFEBOC; // 0x20
		::UnityEngine::Object* PLOKALGIKGH; // 0x28
	};
}
