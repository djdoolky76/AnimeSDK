#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager___c__60_1_TypeDefinitionIndex = 31757;

	template <typename T>
	class InputManager___c__60_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c__60_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>** StaticGet___9__60_0()
		{
			return (::System::Func_1<::UnityEngine::InputSystem::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c__60_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
