#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerInstance.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerParamResolver_1; }
namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerStateResolver_1; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerInstance_2_TypeDefinitionIndex = 60327;

	template <typename T1, typename T2>
	class AnimatorControllerInstance_2 : public ::System::Object
	{
	public:
		::NPCCrowd::Animation::AnimatorControllerInstance Instance; // 0x0
		::NPCCrowd::Animation::AnimatorControllerStateResolver_1<T1>* _stateResolver; // 0x0
		::NPCCrowd::Animation::AnimatorControllerParamResolver_1<T2>* _paramResolver; // 0x0
	};
}
