#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GRANTMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED01A0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED01E0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET UNITYSDK_OFFSET(0x1CED01F0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET UNITYSDK_OFFSET(0x1CED03A0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET UNITYSDK_OFFSET(0x1CED0600)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager___c_TypeDefinitionIndex = 9373;

	class GrantManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29B40);
		}

		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__20_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29B48);
		}

		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__22_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29B50);
		}

		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__24_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET))(this, a1, a2);
		}

	};
}
