#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GRANTMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD471F0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD47230)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET UNITYSDK_OFFSET(0x1BD47240)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET UNITYSDK_OFFSET(0x1BD473F0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET UNITYSDK_OFFSET(0x1BD47650)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager___c_TypeDefinitionIndex = 9365;

	class GrantManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x203E0);
		}

		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x203E8);
		}

		static ::System::Action** StaticGet___9__20_4()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x203F0);
		}

		static ::System::Action** StaticGet___9__24_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x203F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_4(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET))(this, a1, a2);
		}

	};
}
