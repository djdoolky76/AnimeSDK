#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::InputSystem { class IKeyboardService; }
namespace MiHoYo::SDK::InputSystem { class KeyboardAdapter; }

#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDCA80)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1BBDCAA0)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1BBDCF90)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1BBDCD10)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBDA620)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1BBDD210)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBDCA90)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int KeyboardAdapter_TypeDefinitionIndex = 10096;

	class KeyboardAdapter : public ::System::Object
	{
	public:
		::MiHoYo::SDK::InputSystem::IKeyboardService* m_service; // 0x10
		static ::MiHoYo::SDK::InputSystem::KeyboardAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::KeyboardAdapter**)UnitySDK::FromName("MiHoYo.SDK.InputSystem", "KeyboardAdapter")->GetStaticField(0x720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::KeyboardAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::KeyboardAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::KeyboardAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::KeyboardAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetKeyDown(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYDOWN_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKey(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKeyUp(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYUP_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IKeyboardService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyboardService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}

	};
}
