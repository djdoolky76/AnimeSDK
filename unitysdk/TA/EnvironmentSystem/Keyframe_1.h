#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int Keyframe_1_TypeDefinitionIndex = 16122;

	template <typename T>
	class Keyframe_1 : public ::System::Object
	{
	public:
		::System::Single time; // 0x0
		T value; // 0x0
	};
}
