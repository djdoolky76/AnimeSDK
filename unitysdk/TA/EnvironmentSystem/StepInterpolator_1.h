#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::EnvironmentSystem { template <typename T> class Keyframe_1; }

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int StepInterpolator_1_TypeDefinitionIndex = 16426;

	template <typename T>
	class StepInterpolator_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TA::EnvironmentSystem::Keyframe_1<T>*>* keyFrames; // 0x0
	};
}
