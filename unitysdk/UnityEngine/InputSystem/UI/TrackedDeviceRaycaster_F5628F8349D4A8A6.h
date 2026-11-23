#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_E411716FF061BB45.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6_A50F527852BC7428_OFFSET UNITYSDK_OFFSET(0x3F5B980)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F5BAC0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int TrackedDeviceRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex = 14218;

	class TrackedDeviceRaycaster_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::System::Object*>** StaticGet_F66507BF291AAAE8()
		{
			return (::System::ADDF5F55A85EB950<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 A50F527852BC7428(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_E411716FF061BB45 BE5F3F8ED1EE787F, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_E411716FF061BB45 E13619F196867521)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_E411716FF061BB45, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_E411716FF061BB45))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_F5628F8349D4A8A6_A50F527852BC7428_OFFSET))(this, BE5F3F8ED1EE787F, E13619F196867521);
		}
	};
}
