#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x947F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x947EE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x947F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_BINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_DEVICEREQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x947E00)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F0042D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F004300)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SETNAMEANDBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x947E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SET_BINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x388A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET UNITYSDK_OFFSET(0x947ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9480C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME__CTOR_OFFSET UNITYSDK_OFFSET(0x947E30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_TypeDefinitionIndex = 31655;

	struct alignas(8) InputControlScheme
	{
		::System::String* m_Name; // 0x10
		::System::String* m_BindingGroup; // 0x18
		::Il2CppArray<::System::Object*>* m_DeviceRequirements; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* devices, ::System::String* bindingGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME__CTOR_OFFSET))(this, name, devices, bindingGroup);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET))(this);
		}

		::System::String* get_bindingGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_BINDINGGROUP_OFFSET))(this);
		}

		::System::Void set_bindingGroup(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SET_BINDINGGROUP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Object*> get_deviceRequirements()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_DEVICEREQUIREMENTS_OFFSET))(this);
		}

		::System::Void SetNameAndBindingGroup(::System::String* name, ::System::String* bindingGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SETNAMEANDBINDINGGROUP_OFFSET))(this, name, bindingGroup);
		}

		::System::Boolean SupportsDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET))(this, device);
		}

		/*
		::System::Boolean Equals(::UnityEngine::InputSystem::InputControlScheme other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputControlScheme left, ::UnityEngine::InputSystem::InputControlScheme right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/
	};
}
