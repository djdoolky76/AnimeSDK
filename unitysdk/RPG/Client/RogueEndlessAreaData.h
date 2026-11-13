#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOGKOJCAFAE.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HGFJAHILCAA;
class NLNFLEDEKGM;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueEndlessAreaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace RPG::GameCore { class RogueAreaConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7CFEF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D0140)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARS_OFFSET UNITYSDK_OFFSET(0x1C7D04B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET UNITYSDK_OFFSET(0x1C7D0890)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET UNITYSDK_OFFSET(0x1C7D0930)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C7D03B0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C7D0430)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET UNITYSDK_OFFSET(0x1C7D0C60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET UNITYSDK_OFFSET(0x1C7D0E90)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1C7D0BC0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0x1C7D1970)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C7D18E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET UNITYSDK_OFFSET(0x1C7D1950)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C7D1D50)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7D1A00)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1FC0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET UNITYSDK_OFFSET(0x1C7D2000)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C7D1FE0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1CD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET UNITYSDK_OFFSET(0x1C7D1A70)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET UNITYSDK_OFFSET(0x1C7D1AC0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x1C7D1D30)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x1C7D0B70)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1C7D1EC0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0x1C7D1F10)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1C7D1E40)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x1C7D1DF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET UNITYSDK_OFFSET(0x1C7D1F30)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C7CFE90)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET UNITYSDK_OFFSET(0x1C7D1430)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7D1990)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1F80)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1FA0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1CB0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7D1DD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C7D20E0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7D1B10)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET UNITYSDK_OFFSET(0x1C7D1C60)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C7D20A0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET UNITYSDK_OFFSET(0x1C7D1900)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C7D12F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET UNITYSDK_OFFSET(0x1C7D09D0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET UNITYSDK_OFFSET(0x1C7D0AD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C7CF6C0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET UNITYSDK_OFFSET(0x1C7D1980)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C7D18F0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET UNITYSDK_OFFSET(0x1C7D1960)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1FD0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C7D1FF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x1C7D1D40)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET UNITYSDK_OFFSET(0x1C7D1F20)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1F90)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1FB0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C7D1CC0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7D1DE0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C7D0230)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C7D0CF0)
#define RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1C7D13D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessAreaData_TypeDefinitionIndex = 69391;

	class RogueEndlessAreaData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAreaConfigRow* _AreaRow_k__BackingField; // 0x10
		::RPG::Client::RogueReviveAvatarInfo* _CurrentReviveAvatarInfo; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _FreeBuffDatas_k__BackingField; // 0x20
		::RPG::Client::RoguePickAvatarInfo* _CurrentPickAvatarInfo; // 0x28
		::RPG::GameCore::ActivityRogueAreaConfigRow* _ActivityAreaRow_k__BackingField; // 0x30
		::RPG::Client::RogueMiracleInfo* _CurrentMiracleInfo; // 0x38
		::NLNFLEDEKGM* _CurrentBuffInfo; // 0x40
		::System::UInt32 _NormalMaxProgress_k__BackingField; // 0x48
		::NOGKOJCAFAE _NormalStatus_k__BackingField; // 0x4C
		::System::UInt32 _RogueMapID; // 0x50
		::System::UInt32 _AreaID_k__BackingField; // 0x54
		::System::UInt32 _EndlessAchievedProgress_k__BackingField; // 0x58
		::System::UInt32 _NormalAchievedProgress_k__BackingField; // 0x5C
		::System::UInt32 _NormalCurrentProgress_k__BackingField; // 0x60
		::System::Boolean _HasEnteredEndless_k__BackingField; // 0x64
		::System::Boolean hasRegisterSchedule; // 0x65
		::System::Byte _padding0[0x2];
		::System::UInt32 _EndlessAchievedScore_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessAreaData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::HGFJAHILCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGFJAHILCAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentSelfAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTSELFAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCurrentTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetCurrentAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetCurrentBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTBUFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* GetCurrentMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETCURRENTMIRACLES_OFFSET))(this);
		}

		::System::Boolean IsFreeBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEBUFF_OFFSET))(this, a1);
		}

		::System::Boolean IsFreeMiracle(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_ISFREEMIRACLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETREWARDQUESTIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetEndlessWaveIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetEndlessWaveMonsterDatas(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GETENDLESSWAVEMONSTERDATAS_OFFSET))(this, a1);
		}

		::System::Void RegisterSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_REGISTERSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 _GetEndlessStageInfiniteGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__GETENDLESSSTAGEINFINITEGROUPID_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA__ONSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_MechanismTexts()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_MECHANISMTEXTS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ROGUEMAPID_OFFSET))(this);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_AreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_AREAROW_OFFSET))(this);
		}

		::System::Void set_AreaRow(::RPG::GameCore::RogueAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_AREAROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRogueAreaConfigRow* get_ActivityAreaRow()
		{
			return ((::RPG::GameCore::ActivityRogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ACTIVITYAREAROW_OFFSET))(this);
		}

		::System::Void set_ActivityAreaRow(::RPG::GameCore::ActivityRogueAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ACTIVITYAREAROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_EntranceImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCEIMAGE_OFFSET))(this);
		}

		::System::String* get_EntranceLockedImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENTRANCELOCKEDIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_RECOMMENDTYPES_OFFSET))(this);
		}

		::System::UInt32 get_NormalMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALMAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalMaxProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALMAXPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSMAXPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_FreeBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_FreeBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_FREEBUFFDATAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_FreeMiracleIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_FREEMIRACLEIDS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::NOGKOJCAFAE get_NormalStatus()
		{
			return ((::NOGKOJCAFAE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALSTATUS_OFFSET))(this);
		}

		::System::Void set_NormalStatus(::NOGKOJCAFAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOGKOJCAFAE))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISDOING_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Boolean get_HasEnteredEndless()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENTEREDENDLESS_OFFSET))(this);
		}

		::System::Void set_HasEnteredEndless(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_HASENTEREDENDLESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNormalFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ISNORMALFINISHED_OFFSET))(this);
		}

		::System::Boolean get_HasEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_HASENDLESSSCORE_OFFSET))(this);
		}

		::System::UInt32 get_NormalAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalAchievedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALACHIEVEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_NormalCurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_NORMALCURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void set_NormalCurrentProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_NORMALCURRENTPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessAchievedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessAchievedScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDSCORE_OFFSET))(this);
		}

		::System::Void set_EndlessAchievedScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_SET_ENDLESSACHIEVEDSCORE_OFFSET))(this, a1);
		}

		::System::Int32 get_EndlessAchievedRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_ENDLESSACHIEVEDRANK_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSAREADATA_GET_PICKAVATARINFO_OFFSET))(this);
		}

	};
}
