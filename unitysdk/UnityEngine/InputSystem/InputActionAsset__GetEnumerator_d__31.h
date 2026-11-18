#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE27C30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTACTION__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE27D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE27DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EE27D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE27C20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE27C10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset__GetEnumerator_d__31_TypeDefinitionIndex = 31602;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	class InputActionAsset__GetEnumerator_d__31 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> _actions_5__3; // 0x10
		::System::Byte _padding0[0x8];
		::UnityEngine::InputSystem::InputAction* __2__current; // 0x20
		::UnityEngine::InputSystem::InputActionAsset* __4__this; // 0x28
		::System::Int32 _n_5__5; // 0x30
		::System::Int32 _i_5__2; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Int32 _actionCount_5__4; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTACTION__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__GETENUMERATOR_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
