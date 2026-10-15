#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceStanceConfig_CellConfig_TypeDefinitionIndex = 69158;

	struct alignas(8) AudienceStanceConfig_CellConfig
	{
		::UnityEngine::Vector2 limitSize; // 0x10
		::Il2CppArray<::System::Object*>* positionConfigs; // 0x18
	};
}
