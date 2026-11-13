#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACFF7C0)
#define RPG_CLIENT_ROGUETOURNUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFF7F0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_0_OFFSET UNITYSDK_OFFSET(0x1ACFFB40)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_1_OFFSET UNITYSDK_OFFSET(0x1ACFFBC0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_2_OFFSET UNITYSDK_OFFSET(0x1ACFFC90)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_3_OFFSET UNITYSDK_OFFSET(0x1ACFFD20)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_4_OFFSET UNITYSDK_OFFSET(0x1ACFFD80)
#define RPG_CLIENT_ROGUETOURNUTILS___C__GETSORTEDROOMCARDINGAME_B__26_0_OFFSET UNITYSDK_OFFSET(0x1ACFF800)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__36_0_OFFSET UNITYSDK_OFFSET(0x1ACFF810)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__36_1_OFFSET UNITYSDK_OFFSET(0x1ACFFA70)
#define RPG_CLIENT_ROGUETOURNUTILS___C__TRANSFEROPENMODESELECTPAGE_B__54_2_OFFSET UNITYSDK_OFFSET(0x1ACFFE50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c_TypeDefinitionIndex = 69760;

	class RogueTournUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732A0);
		}

		static ::System::Action** StaticGet___9__53_4()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732A8);
		}

		static ::System::Action** StaticGet___9__54_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732B0);
		}

		static ::System::Action** StaticGet___9__53_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732C0);
		}

		static ::System::Action** StaticGet___9__53_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732C8);
		}

		static ::System::Action** StaticGet___9__53_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732D0);
		}

		static ::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__53_3()
		{
			return (::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732D8);
		}

		static ::System::Action** StaticGet___9__36_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732E0);
		}

		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x732E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* _GetSortedRoomCardInGame_b__26_0(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__GETSORTEDROOMCARDINGAME_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__36_0_OFFSET))(this);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__36_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_0_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__53_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__53_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BackToModeSelectPage_b__53_3(::XLua::LuaTable* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_3_OFFSET))(this, a1);
		}

		::System::Void _BackToModeSelectPage_b__53_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__53_4_OFFSET))(this);
		}

		::System::Void _TransferOpenModeSelectPage_b__54_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__TRANSFEROPENMODESELECTPAGE_B__54_2_OFFSET))(this);
		}

	};
}
