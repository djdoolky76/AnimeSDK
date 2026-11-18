#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBuffers_DoubleBuffers.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET UNITYSDK_OFFSET(0x8FF270)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E450450)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET UNITYSDK_OFFSET(0x8FF280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1E4502B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET UNITYSDK_OFFSET(0x8FF260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1E450270)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET UNITYSDK_OFFSET(0x8FF380)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E450730)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E450870)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E450920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1E4504B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET UNITYSDK_OFFSET(0x1E4502F0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_TypeDefinitionIndex = 32016;

	struct alignas(8) InputStateBuffers
	{
		static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers* StaticGet_s_CurrentBuffers()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers*)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x8010);
		}
		static ::PVOID* StaticGet_s_DefaultStateBuffer()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x8018);
		}
		static ::PVOID* StaticGet_s_NoiseMaskBuffer()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x8020);
		}
		static ::PVOID* StaticGet_s_ResetMaskBuffer()
		{
			return (::PVOID*)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x8028);
		}
		::System::UInt32 sizePerBuffer; // 0x10
		::System::UInt32 totalSize; // 0x14
		::PVOID defaultStateBuffer; // 0x18
		::PVOID noiseMaskBuffer; // 0x20
		::PVOID resetMaskBuffer; // 0x28
		::PVOID m_AllBuffers; // 0x30
		::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers m_PlayerStateBuffers; // 0x38

		::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET))(this, updateType);
		}

		static ::PVOID GetFrontBufferForDevice(::System::Int32 deviceIndex)
		{
			return ((::PVOID(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET))(deviceIndex);
		}

		static ::PVOID GetBackBufferForDevice(::System::Int32 deviceIndex)
		{
			return ((::PVOID(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET))(deviceIndex);
		}

		/*
		static ::System::Void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType update)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET))(buffers, update);
		}
		*/

		::System::Void AllocateAll(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET))(this, devices, deviceCount);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers SetUpDeviceToBufferMappings(::System::Int32 deviceCount, ::PVOID& bufferPtr, ::System::UInt32 sizePerBuffer, ::System::UInt32 mappingTableSizePerBuffer)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers(*)(::System::Int32, ::PVOID&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET))(deviceCount, bufferPtr, sizePerBuffer, mappingTableSizePerBuffer);
		}

		::System::Void FreeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET))(this);
		}

		/*
		::System::Void MigrateAll(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET))(this, devices, deviceCount, oldBuffers);
		}
		*/

		static ::System::Void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers newBuffer, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers oldBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET))(newBuffer, devices, deviceCount, oldBuffer);
		}

		static ::System::Void MigrateSingleBuffer(::PVOID newBuffer, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::PVOID oldBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET))(newBuffer, devices, deviceCount, oldBuffer);
		}

		static ::System::UInt32 ComputeSizeOfSingleStateBuffer(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET))(devices, deviceCount);
		}

		static ::System::UInt32 NextDeviceOffset(::System::UInt32 currentOffset, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET))(currentOffset, device);
		}
	};
}
