#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/DynamicBitfield.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_ADD_OFFSET UNITYSDK_OFFSET(0x93C780)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x93C7A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET UNITYSDK_OFFSET(0x93C7E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x363220)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x93C7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET UNITYSDK_OFFSET(0x93C790)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_StateChangeMonitorsForDevice_TypeDefinitionIndex = 31755;

	struct alignas(8) InputManager_StateChangeMonitorsForDevice
	{
		::Il2CppArray<::System::Object*>* memoryRegions; // 0x10
		::Il2CppArray<::System::Object*>* listeners; // 0x18
		::UnityEngine::InputSystem::DynamicBitfield signalled; // 0x20
		::System::Boolean needToCompactArrays; // 0x40

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_ADD_OFFSET))(this, control, monitor, monitorIndex);
		}

		::System::Void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex, ::System::Boolean deferRemoval)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET))(this, monitor, monitorIndex, deferRemoval);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET))(this);
		}

		::System::Void CompactArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET))(this, i);
		}
	};
}
