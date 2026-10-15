#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF0B60)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1BCF8480)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1BCF85A0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1BCF86C0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1BCF86E0)

namespace MiHoYo::SDK::Win
{
	class BindManager___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x10
		::System::String* strUIName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverseaGuestBindMailPluginUI_b__0(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGuestBindMailPluginUI_b__1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGuestBindMailPluginUI_b__2(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGuestBindMailPluginUI_b__3(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS51_0__SHOWOVERSEAGUESTBINDMAILPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

	};
}
