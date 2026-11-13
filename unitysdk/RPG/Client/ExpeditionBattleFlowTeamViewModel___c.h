#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FGAAFLAALBF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB6A550)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6A590)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETCOMMONTALK_B__21_0_OFFSET UNITYSDK_OFFSET(0x1DB6A5C0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETSTARTTALK_B__20_0_OFFSET UNITYSDK_OFFSET(0x1DB6A5A0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETVICTORYTALK_B__22_0_OFFSET UNITYSDK_OFFSET(0x1DB6A5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex = 65359;

	class ExpeditionBattleFlowTeamViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x589B0);
		}

		static ::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x589B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x589C0);
		}

		static ::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x589C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID _GetStartTalk_b__20_0(::FGAAFLAALBF* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::FGAAFLAALBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETSTARTTALK_B__20_0_OFFSET))(this, a1);
		}

		::RPG::Client::TextID _GetCommonTalk_b__21_0(::FGAAFLAALBF* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::FGAAFLAALBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETCOMMONTALK_B__21_0_OFFSET))(this, a1);
		}

		::RPG::Client::TextID _GetVictoryTalk_b__22_0(::FGAAFLAALBF* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::FGAAFLAALBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETVICTORYTALK_B__22_0_OFFSET))(this, a1);
		}

	};
}
