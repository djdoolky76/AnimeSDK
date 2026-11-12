#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class APAMFCKFHLL;
class BDKIMOIFPIL;
class CGBPOHBACGE;
class ELPBDFINJGH;
class EPOFJMLCFPI;
class GDLPHFCCCFL;
class PEPEHIDAKKK;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET UNITYSDK_OFFSET(0xCE3B080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0xCE3B010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xCE3AFA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0xCE3AB10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xCE3A7C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCE3BFE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETCURPOWER_OFFSET UNITYSDK_OFFSET(0xCE3AB60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE3B170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xCE3BF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_LIMITLEVEL_OFFSET UNITYSDK_OFFSET(0xCE3BE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET UNITYSDK_OFFSET(0xCE38E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCE37E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISALLSLOTSFULL_OFFSET UNITYSDK_OFFSET(0xCE3A820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET UNITYSDK_OFFSET(0xCE39D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0xCE38090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0xCE38BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0xCE37EC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xCE3ABC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET UNITYSDK_OFFSET(0xCE3A560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET UNITYSDK_OFFSET(0xCE37F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xCE3A6F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xCE39590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE39530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CONVERTSLOTDATASTOAVATARIDS_OFFSET UNITYSDK_OFFSET(0xCE39FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET UNITYSDK_OFFSET(0xCE3BB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0xCE39A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET UNITYSDK_OFFSET(0xCE381D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0xCE38270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0xCE38CD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamInfo_TypeDefinitionIndex = 77428;

	class IdleLiveTeamInfo : public ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TeamAvatarIdDict; // 0x40
		::RPG::Client::Promises::Promise* _ReplaceTeamPromise; // 0x48
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPower; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* _BattleAvatarIdList; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void SyncPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET))(this);
		}

		::System::Void OnAvatarInfoProtocolReceived(::System::Object* a1, ::EPOFJMLCFPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::EPOFJMLCFPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* a1, ::EPOFJMLCFPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::EPOFJMLCFPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void InitTeam(::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET))(this, a1);
		}

		::System::Void Update(::ELPBDFINJGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPBDFINJGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::BDKIMOIFPIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDKIMOIFPIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentTeamSameAsBattleTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET))(this);
		}

		::System::Void ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* SyncTeam()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCTEAM_OFFSET))(this);
		}

		::System::Void ClearAllTeamAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CLEARALLTEAMAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAllSlotsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISALLSLOTSFULL_OFFSET))(this);
		}

		::System::Boolean CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CHECKTEAMISVALID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetCurPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETCURPOWER_OFFSET))(this);
		}

		::System::Void RemoveTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddTeamAvatarByEventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateAddAvatar(::PEPEHIDAKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPEHIDAKKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateMgrInfo(::CGBPOHBACGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBPOHBACGE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET))(this, a1);
		}

		::System::Void _UpdateUpgradeSlot(::GDLPHFCCCFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLPHFCCCFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET))(this, a1);
		}

		::System::Void _OnPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET))(this);
		}

		::System::Void _CreateAndRegisterAvatar(::PEPEHIDAKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPEHIDAKKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ConvertSlotDatasToAvatarIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CONVERTSLOTDATASTOAVATARIDS_OFFSET))(this);
		}

		::System::Int32 get_LimitLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_LIMITLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

	};
}
