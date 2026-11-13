#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakTeam; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C052B20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C052B60)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET UNITYSDK_OFFSET(0x1C052B90)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET UNITYSDK_OFFSET(0x1C052B70)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C052BB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C052C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c_TypeDefinitionIndex = 64632;

	class ChallengePeakTeamContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71530);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71538);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71540);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTeam*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71548);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckAnyNormalTeamIsEmpty_b__29_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMISEMPTY_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAnyNormalTeamHasChanged_b__30_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMHASCHANGED_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAnyNormalTeamNeedForceSave_b__31_0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__CHECKANYNORMALTEAMNEEDFORCESAVE_B__31_0_OFFSET))(this, a1);
		}

		::System::UInt32 __CheckHaveEquipmentConflict_b__42_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C___CHECKHAVEEQUIPMENTCONFLICT_B__42_0_OFFSET))(this, a1);
		}

	};
}
