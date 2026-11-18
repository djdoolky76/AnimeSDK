#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_GlobalState.h"

namespace System { class Action; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE6E6A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6E6E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET UNITYSDK_OFFSET(0x1EE6E6F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET UNITYSDK_OFFSET(0x1EE6E710)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState___c_TypeDefinitionIndex = 31640;

	class InputActionState___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x286C0);
		}
		static ::System::Object** StaticGet___9__121_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x286C8);
		}
		static ::System::Action** StaticGet___9__121_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x286D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__121_0(::UnityEngine::InputSystem::InputActionState_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__121_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET))(this);
		}
	};
}
