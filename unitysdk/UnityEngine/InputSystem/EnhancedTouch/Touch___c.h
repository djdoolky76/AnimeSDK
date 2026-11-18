#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.h"

namespace System { class Action; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBF9950)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF9990)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_0_OFFSET UNITYSDK_OFFSET(0x1FBF99A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_1_OFFSET UNITYSDK_OFFSET(0x1FBF9A20)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch___c_TypeDefinitionIndex = 31883;

	class Touch___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x28640);
		}
		static ::System::Object** StaticGet___9__78_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x28648);
		}
		static ::System::Action** StaticGet___9__78_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x28650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__78_0(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__78_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_1_OFFSET))(this);
		}
	};
}
