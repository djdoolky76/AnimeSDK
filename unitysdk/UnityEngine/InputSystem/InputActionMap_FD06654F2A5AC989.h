#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_A42BDB63AA5F57A8_OFFSET UNITYSDK_OFFSET(0x3F472C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x3F471E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_B98284D3039A3468_OFFSET UNITYSDK_OFFSET(0x3F47310)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_FFC8F57E8D4599A9_OFFSET UNITYSDK_OFFSET(0x3F473B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_FD06654F2A5AC989_TypeDefinitionIndex = 14159;

	struct alignas(8) InputActionMap_FD06654F2A5AC989
	{
		::System::Boolean EE80F7032C0780E4; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 F11035CD7479246E; // 0x14
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* B07CAF7F38ECBBD9; // 0x18

		::System::Int32 A42BDB63AA5F57A8(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_A42BDB63AA5F57A8_OFFSET))(this, B9AD68262157E9E0);
		}

		::System::Boolean B98284D3039A3468(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_B98284D3039A3468_OFFSET))(this, B9AD68262157E9E0);
		}

		::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>> A66245FDD0182C57()
		{
			return ((::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_A66245FDD0182C57_OFFSET))(this);
		}

		::System::Boolean FFC8F57E8D4599A9(::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>> E978532DFFAD34CF)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FD06654F2A5AC989_FFC8F57E8D4599A9_OFFSET))(this, E978532DFFAD34CF);
		}
	};
}
