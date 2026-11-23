#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A03AAFF87F42D454.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputControl; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_E4CF6E5C830DEE66_A55CCF1921B19DAC_TypeDefinitionIndex = 14601;

	struct alignas(8) InputControlScheme_E4CF6E5C830DEE66_A55CCF1921B19DAC
	{
		::System::Int32 A6CD792CF58026B8; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* EC2D4F9AF26EDE8F; // 0x18
		::A03AAFF87F42D454<::UnityEngine::InputSystem::InputControl*> BA9C595B6D4B8BC6; // 0x20
	};
}
