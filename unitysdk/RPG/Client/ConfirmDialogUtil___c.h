#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C99F3B0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99F3F0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_0_OFFSET UNITYSDK_OFFSET(0x1B7D4C00)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_1_OFFSET UNITYSDK_OFFSET(0x1B7D4C50)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWANTIADDICTIONHINT_B__22_2_OFFSET UNITYSDK_OFFSET(0x1B7D4CE0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFBYMTP_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B7D4AF0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYCHANGEDPWD_B__20_0_OFFSET UNITYSDK_OFFSET(0x1B7D4B80)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYEXPIRED_B__19_0_OFFSET UNITYSDK_OFFSET(0x1B7D4B40)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYMUIP_B__21_0_OFFSET UNITYSDK_OFFSET(0x1B7D4BC0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTBYSQUEEZED_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B7D4A50)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWKICKOFFHINTNOTINWHITELIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C99F480)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRELOGINHINT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1C99F440)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWRESTARTHINT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C99F400)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__SHOWVIDEONOTEXITCONFIRMDIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B7D4D30)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c_TypeDefinitionIndex = 74794;

	class ConfirmDialogUtil___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E840);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E848);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E850);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E858);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E860);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E868);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E870);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E878);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E880);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E888);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E890);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E898);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__22_2()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1E8A0);
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
