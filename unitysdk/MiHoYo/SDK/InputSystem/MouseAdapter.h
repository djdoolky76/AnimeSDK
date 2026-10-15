#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::InputSystem { class IMouseService; }
namespace MiHoYo::SDK::InputSystem { class MouseAdapter; }

#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDD220)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1BBDABD0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1BBDB380)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1BBDB060)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBDA7E0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1BBDD240)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBDD230)

namespace MiHoYo::SDK::InputSystem
{
	class MouseAdapter : public ::System::Object
	{
	public:
		::MiHoYo::SDK::InputSystem::IMouseService* m_service; // 0x10
		static ::MiHoYo::SDK::InputSystem::MouseAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::MouseAdapter**)UnitySDK::FromName("MiHoYo.SDK.InputSystem", "MouseAdapter")->GetStaticField(0x730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::MouseAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::MouseAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::MouseAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::MouseAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IMouseService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}

	};
}
