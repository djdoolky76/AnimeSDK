#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
namespace MiHoYo::SDK::Console { class ConsoleReactivateDialog; }
namespace System { class Action; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BC8EEC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1BC8FAA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC8FB10)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1BC8FA70)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8FAD0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BC6C160)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BC8FA10)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BC6AA20)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BC8EDC0)

namespace MiHoYo::SDK::Console
{
	class ConsoleReactivateDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		::System::Action* OnReactivateAccount; // 0xC0
		::System::Action* OnBack; // 0xC8
		::System::Boolean Interactable; // 0xD0
		static ::MiHoYo::SDK::Console::ConsoleReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleReactivateDialog**)UnitySDK::FromName("MiHoYo.SDK.Console", "ConsoleReactivateDialog")->GetStaticField(0x32320);
		}

		static ::System::Boolean* StaticGet_IsAccountPlatform()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.Console", "ConsoleReactivateDialog")->GetStaticField(0xA990);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CCTOR_OFFSET))();
		}

		static ::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

	};
}
