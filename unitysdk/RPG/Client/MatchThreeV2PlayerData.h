#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class JKEBEAKOHJJ;
class KPCHPLEJCKC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MatchThreeV2PlayerBird; }
namespace RPG::Client { class MatchThreeV2PlayerData; }
namespace RPG::Client { class MatchThreeV2PlayerProp; }
namespace RPG::Client { class MatchThreeV2PlayerPveCareer; }
namespace RPG::Client { class MatchThreeV2PlayerPvpCareer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET UNITYSDK_OFFSET(0xE016F90)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE011720)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE014700)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0122F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xE010AB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET UNITYSDK_OFFSET(0xE016850)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_BIRDS_OFFSET UNITYSDK_OFFSET(0xE013BD0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_COSTITEMDATA_OFFSET UNITYSDK_OFFSET(0xE014530)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_MAXPROPSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xE014390)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPSFORPVP_OFFSET UNITYSDK_OFFSET(0xE013E30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPS_OFFSET UNITYSDK_OFFSET(0xE013D00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVECAREER_OFFSET UNITYSDK_OFFSET(0xE014350)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0xE014370)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0xE0147E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE016600)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0xE016730)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET UNITYSDK_OFFSET(0xE016690)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET UNITYSDK_OFFSET(0xE016D60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xE016B20)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE0167C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE016900)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET UNITYSDK_OFFSET(0xE0171C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET UNITYSDK_OFFSET(0xE014360)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0xE014380)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET UNITYSDK_OFFSET(0xE00ED00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xE0157E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET UNITYSDK_OFFSET(0xE014CB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xE010210)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET UNITYSDK_OFFSET(0xE00FF60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0xE016280)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xE0149A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVECAREER_OFFSET UNITYSDK_OFFSET(0xE014840)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVPCAREER_OFFSET UNITYSDK_OFFSET(0xE014920)
#define RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xE0162D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerData_TypeDefinitionIndex = 67940;

	class MatchThreeV2PlayerData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2PlayerPvpCareer* _PvpCareer_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2PlayerProp*>* _Props; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2PlayerBird*>* _Birds; // 0x20
		::RPG::Client::MatchThreeV2PlayerPveCareer* _PveCareer_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerBird*>* get_Birds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerBird*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_BIRDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>* get_Props()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>* get_PropsForPvp()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2PlayerProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PROPSFORPVP_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2PlayerPveCareer* get_PveCareer()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPveCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVECAREER_OFFSET))(this);
		}

		::System::Void set_PveCareer(::RPG::Client::MatchThreeV2PlayerPveCareer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPveCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVECAREER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerPvpCareer* get_PvpCareer()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPvpCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_PVPCAREER_OFFSET))(this);
		}

		::System::Void set_PvpCareer(::RPG::Client::MatchThreeV2PlayerPvpCareer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPvpCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SET_PVPCAREER_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPropSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_MAXPROPSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_CostItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GET_COSTITEMDATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2PlayerData* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAllData(::JKEBEAKOHJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEBEAKOHJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLDATA_OFFSET))(this, a1);
		}

		::System::Void _SetupPveCareer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVECAREER_OFFSET))(this);
		}

		::System::Void _OnPassedLevelsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__ONPASSEDLEVELSCHANGED_OFFSET))(this);
		}

		::System::Void _SetupPvpCareer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPPVPCAREER_OFFSET))(this);
		}

		::System::Boolean IsBirdUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISBIRDUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerBird* GetPlayerBird(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PlayerBird*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Void _SetupInitialUnlockPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__SETUPINITIALUNLOCKPLAYERBIRD_OFFSET))(this);
		}

		::System::Void _UpdateUnlockedPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA__UPDATEUNLOCKEDPLAYERBIRD_OFFSET))(this);
		}

		::System::Void SyncAllPlayerBird(::Google::Protobuf::Collections::RepeatedField_1<::KPCHPLEJCKC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KPCHPLEJCKC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Void SyncSinglePlayerBird(::KPCHPLEJCKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCHPLEJCKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERBIRD_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelsAllFinished(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELSALLFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISLEVELFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsPropUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerProp* GetPlayerProp(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_GETPLAYERPROP_OFFSET))(this, a1);
		}

		::System::Boolean IsPropUpgradeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPUPGRADEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsPropAtMaxLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPropAtMaxLevel_1(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_ISPROPATMAXLEVEL_1_OFFSET))(this, a1);
		}

		::System::Boolean CanAffordToUpgradeProp(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_CANAFFORDTOUPGRADEPROP_OFFSET))(this, a1);
		}

		::System::Void SyncAllPlayerProp(::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCALLPLAYERPROP_OFFSET))(this, a1);
		}

		::System::Void SyncSinglePlayerProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_SYNCSINGLEPLAYERPROP_OFFSET))(this, a1, a2);
		}

		::System::Void MarkAllPropSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERDATA_MARKALLPROPSEEN_OFFSET))(this);
		}

	};
}
