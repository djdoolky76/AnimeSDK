#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4020F50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x40211B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4021250)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET UNITYSDK_OFFSET(0x4021300)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4021400)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_TypeDefinitionIndex = 14608;

	struct alignas(8) InputControlScheme
	{
		::System::String* m_Name; // 0x10
		::System::String* m_BindingGroup; // 0x18
		::Il2CppArray<::System::Object*>* m_DeviceRequirements; // 0x20

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Boolean SupportsDevice(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET))(this, B9AD68262157E9E0);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::InputSystem::InputControlScheme BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
