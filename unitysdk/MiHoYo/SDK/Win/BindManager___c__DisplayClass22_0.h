#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCEBAC0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1BCF4E60)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1BCF4EB0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1BCF4F60)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1BCF5230)

namespace MiHoYo::SDK::Win
{
	class BindManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x10
		::System::String* ticket; // 0x18
		::MiHoYo::SDK::AccountModel* userData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindMailPluginUI_b__0(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMailPluginUI_b__1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMailPluginUI_b__2(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMailPluginUI_b__3(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_0__SHOWBINDMAILPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

	};
}
