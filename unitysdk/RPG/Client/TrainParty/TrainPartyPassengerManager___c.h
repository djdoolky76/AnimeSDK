#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerStatusRankConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2F91F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2F9220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET UNITYSDK_OFFSET(0xE2F9230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET UNITYSDK_OFFSET(0xE2F9430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET UNITYSDK_OFFSET(0xE2F9320)

namespace RPG::Client::TrainParty
{
	class TrainPartyPassengerManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__22_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x24CD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x24CD8);
		}

		static ::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x24CE0);
		}

		static ::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>** StaticGet___9__46_0()
		{
			return (::System::Predicate_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>**)UnitySDK::FromName("RPG.Client.TrainParty", "<>c")->GetStaticField(0x24CE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPassengerList_b__22_0(::RPG::Client::TrainParty::TrainPartyPassengerData* a1, ::RPG::Client::TrainParty::TrainPartyPassengerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GETALLPASSENGERLIST_B__22_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __InitPassengerStatusRankConfig_b__29_0(::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* a1, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*, ::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C___INITPASSENGERSTATUSRANKCONFIG_B__29_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_LeaderPassengerData_b__46_0(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__GET_LEADERPASSENGERDATA_B__46_0_OFFSET))(this, a1);
		}

	};
}
