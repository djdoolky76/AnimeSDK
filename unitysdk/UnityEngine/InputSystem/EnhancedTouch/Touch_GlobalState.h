#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch_FingerAndTouchState.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_GlobalState_TypeDefinitionIndex = 31880;

	struct alignas(8) Touch_GlobalState
	{
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens; // 0x10
		::System::Byte _padding0[0x10];
		::System::Int32 historyLengthPerFinger; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown; // 0x30
		::System::Byte _padding2[0x48];
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove; // 0x80
		::System::Byte _padding3[0x48];
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp; // 0xD0
		::System::Byte _padding4[0x48];
		::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState playerState; // 0x120
	};
}
