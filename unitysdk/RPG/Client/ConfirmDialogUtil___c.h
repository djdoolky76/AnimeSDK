#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD538840)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD538880)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_0_OFFSET UNITYSDK_OFFSET(0xD538B10)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_1_OFFSET UNITYSDK_OFFSET(0xD538B60)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_2_OFFSET UNITYSDK_OFFSET(0xD538BF0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFBYMTP_B__18_0_OFFSET UNITYSDK_OFFSET(0xD538A00)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYCHANGEDPWD_B__20_0_OFFSET UNITYSDK_OFFSET(0xD538A90)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYEXPIRED_B__19_0_OFFSET UNITYSDK_OFFSET(0xD538A50)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYMUIP_B__21_0_OFFSET UNITYSDK_OFFSET(0xD538AD0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYSQUEEZED_B__17_0_OFFSET UNITYSDK_OFFSET(0xD538960)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTNOTINWHITELIST_B__15_0_OFFSET UNITYSDK_OFFSET(0xD538910)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRELOGINHINT_B__13_0_OFFSET UNITYSDK_OFFSET(0xD5388D0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRESTARTHINT_B__6_0_OFFSET UNITYSDK_OFFSET(0xD538890)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWVIDEONOTEXITCONFIRMDIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0xD538C40)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c_TypeDefinitionIndex = 74795;

	class ConfirmDialogUtil___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2C0);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2C8);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_2()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2D8);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2E0);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2E8);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2F0);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D2F8);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D300);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D308);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D310);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D318);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowRestartHint_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRESTARTHINT_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _ShowReloginHint_b__13_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRELOGINHINT_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffHintNotInWhiteList_b__15_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTNOTINWHITELIST_B__15_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffHintBySqueezed_b__17_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYSQUEEZED_B__17_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffByMTP_b__18_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFBYMTP_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffHintByExpired_b__19_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYEXPIRED_B__19_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffHintByChangedPwd_b__20_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYCHANGEDPWD_B__20_0_OFFSET))(this, a1);
		}

		::System::Void _ShowKickOffHintByMUIP_b__21_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYMUIP_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _ShowAntiAddictionHint_b__22_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_0_OFFSET))(this, a1);
		}

		::System::Void _ShowAntiAddictionHint_b__22_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_1_OFFSET))(this, a1);
		}

		::System::Void _ShowAntiAddictionHint_b__22_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_2_OFFSET))(this, a1);
		}

		::System::Void _ShowVideoNotExitConfirmDialog_b__26_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWVIDEONOTEXITCONFIRMDIALOG_B__26_0_OFFSET))(this, a1);
		}

	};
}
