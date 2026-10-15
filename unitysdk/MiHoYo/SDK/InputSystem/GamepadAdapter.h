#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::InputSystem { class GamepadAdapter; }
namespace MiHoYo::SDK::InputSystem { class IGamepadService; }

#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9A20)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1BBD9A40)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1BBD9E90)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1BBD9C60)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBD99B0)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1BBDA0C0)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBD9A30)

namespace MiHoYo::SDK::InputSystem
{
	class GamepadAdapter : public ::System::Object
	{
	public:
		::MiHoYo::SDK::InputSystem::IGamepadService* m_service; // 0x10
		static ::MiHoYo::SDK::InputSystem::GamepadAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::GamepadAdapter**)UnitySDK::FromName("MiHoYo.SDK.InputSystem", "GamepadAdapter")->GetStaticField(0x6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::GamepadAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::GamepadAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::GamepadAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::GamepadAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetKeyDown(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYDOWN_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKey(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKeyUp(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYUP_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IGamepadService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IGamepadService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}

	};
}
