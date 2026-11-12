#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int CarControlConfig_1_TypeDefinitionIndex = 78146;

	template <typename T>
	class CarControlConfig_1 : public ::System::Object
	{
	public:
		::System::Boolean SetupConfig; // 0x0
	};
}
