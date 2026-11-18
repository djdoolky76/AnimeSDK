#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_GlobalState.h"

namespace System { class Action; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC763C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC76400)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_0_OFFSET UNITYSDK_OFFSET(0x1DC76410)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_1_OFFSET UNITYSDK_OFFSET(0x1DC76430)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser___c_TypeDefinitionIndex = 31826;

	class InputUser___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x289D0);
		}
		static ::System::Object** StaticGet___9__86_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x289D8);
		}
		static ::System::Action** StaticGet___9__86_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x289E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__86_0(::UnityEngine::InputSystem::Users::InputUser_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Users::InputUser_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__86_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_1_OFFSET))(this);
		}
	};
}
