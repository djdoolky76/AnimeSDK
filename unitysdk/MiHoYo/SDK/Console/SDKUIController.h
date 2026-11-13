#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/SDKUIController_Direction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace MiHoYo::SDK::Console { class SDKUIController; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4ACF0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DD4A940)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DD49D50)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DD4A660)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DD49D60)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1DD49D70)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DD49D80)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 8980;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Console::SDKUIController** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::Console::SDKUIController**)UnitySDK::FromName("MiHoYo.SDK.Console", "SDKUIController")->GetStaticField(0x47F30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::SDKUIController* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::Console::SDKUIController* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Console::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetActiveGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET))(this);
		}

		::System::Void HighlightNextGameObject(::MiHoYo::SDK::Console::SDKUIController_Direction a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::SDKUIController_Direction))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET))(this, a1);
		}

	};
}
