#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::Client { class TreasureDungeonExitParam; }
namespace RPG::Client { class TreasureDungeonGroupData; }
namespace RPG::Client { class TreasureDungeonLevel; }
namespace RPG::Client { class TreasureDungeonModule; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xED99150)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED97440)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET UNITYSDK_OFFSET(0xED98E80)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xED98D80)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xED98E40)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_CURRENTTREASUREDUNGEONLEVELID_OFFSET UNITYSDK_OFFSET(0xED960F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xED95D70)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xED97230)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET UNITYSDK_OFFSET(0xED95DF0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xED97490)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xED975D0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET UNITYSDK_OFFSET(0xED98F70)
#define RPG_CLIENT_TREASUREDUNGEONMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xED97330)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xED978F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xED97EB0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__INITALLTREASUREDUNGEONGROUP_OFFSET UNITYSDK_OFFSET(0xED976E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xED98740)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0xED98D20)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xED97CA0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xED98450)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xED97A50)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xED988C0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0xED974E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xED98830)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET UNITYSDK_OFFSET(0xED989F0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTDUNGEONBATTLEEND_OFFSET UNITYSDK_OFFSET(0xED970E0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTENTERDUNGEON_OFFSET UNITYSDK_OFFSET(0xED96FC0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xED98A90)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xED98B30)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xED98960)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET UNITYSDK_OFFSET(0xED97AC0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET UNITYSDK_OFFSET(0xED969A0)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONGIVEUP_OFFSET UNITYSDK_OFFSET(0xED96340)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONLEAVE_OFFSET UNITYSDK_OFFSET(0xED96670)
#define RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET UNITYSDK_OFFSET(0xED96CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonModule_TypeDefinitionIndex = 70142;

	class TreasureDungeonModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::TreasureDungeonExitParam* _CachedExitParam; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGroupData*>* AllGroupDatas; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedDungeonIDSet; // 0x20
		::RPG::Client::TreasureDungeonLevel* _LevelInstance; // 0x28
		::System::UInt32 _ReportStartTimeStamp; // 0x30
		::System::UInt32 _ReportFloorBattleTime; // 0x34
		::System::Boolean _ShouldAutoShow; // 0x38
		::System::Boolean _IsGiveUp; // 0x39
		::System::Boolean _ReportInDungeon; // 0x3A
		// static const ::System::Object _ReportStatusTypeLeave; // 0x0
		// static const ::System::Object _ReportStatusTypeFinishFail; // 0x0
		// static const ::System::Object _ReportStatusTypeFinishSuccess; // 0x0
		// static const ::System::Object _ReportStatusTypeGiveUp; // 0x0
		// static const ::System::Object _ReportStatusTypeNextFloor; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_CTOR_OFFSET))(this);
		}

		::System::Void _ReportDungeonGiveUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONGIVEUP_OFFSET))(this);
		}

		::System::Void _ReportDungeonLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONLEAVE_OFFSET))(this);
		}

		::System::Void _ReportDungeonFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONFINISH_OFFSET))(this, a1);
		}

		::System::Void _ReportDungeonNextFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__REPORTDUNGEONNEXTFLOOR_OFFSET))(this, a1);
		}

		::System::Void _OnReportEnterDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTENTERDUNGEON_OFFSET))(this);
		}

		::System::Void _OnReportDungeonBattleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONREPORTDUNGEONBATTLEEND_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void _OnModuleInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONMODULEINIT_OFFSET))(this);
		}

		::System::Void _InitAllTreasureDungeonGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__INITALLTREASUREDUNGEONGROUP_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetTreasureDungeonActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONGETTREASUREDUNGEONACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterTreasureDungeonScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONENTERTREASUREDUNGEONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOpenTreasureDungeonGridScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONOPENTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInteractTreasureDungeonGridScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONINTERACTTREASUREDUNGEONGRIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUseTreasureDungeonItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONUSETREASUREDUNGEONITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnQuitTreasureDungeonScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONQUITTREASUREDUNGEONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTreasureDungeonDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTreasureDungeonFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONTREASUREDUNGEONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightTreasureDungeonMonsterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__ONFIGHTTREASUREDUNGEONMONSTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDungeonFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_ISDUNGEONFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonGroupData* GetGroupDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonLevel* GetTreasureDungeonLevelInstance()
		{
			return ((::RPG::Client::TreasureDungeonLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETTREASUREDUNGEONLEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonGroupData* GetCurDoingGroup()
		{
			return ((::RPG::Client::TreasureDungeonGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GETCURDOINGGROUP_OFFSET))(this);
		}

		::System::Void TryQuitLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_TRYQUITLEVEL_OFFSET))(this, a1);
		}

		::System::Void _QuitTreasureDungeon(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE__QUITTREASUREDUNGEON_OFFSET))(this, a1);
		}

		static ::RPG::Client::TreasureDungeonModule* get_Instance()
		{
			return ((::RPG::Client::TreasureDungeonModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get_CurrentTreasureDungeonLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONMODULE_GET_CURRENTTREASUREDUNGEONLEVELID_OFFSET))(this);
		}

	};
}
