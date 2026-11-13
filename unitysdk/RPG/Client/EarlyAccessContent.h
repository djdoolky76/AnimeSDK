#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMLPMPKAPHE.h"
#include "unitysdk/System/Object.h"
class DAGNHGIBCPG;
class PBNOGIFIKBC;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ContentPackageConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0x17BBBFE0)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET UNITYSDK_OFFSET(0x17BBBD30)
#define RPG_CLIENT_EARLYACCESSCONTENT_COLLECTPRECONDITIONSSTOPATOUTOFSCHEDULECONTENT_OFFSET UNITYSDK_OFFSET(0x17BBC6F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET UNITYSDK_OFFSET(0x17BBB520)
#define RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET UNITYSDK_OFFSET(0x17BBB660)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET UNITYSDK_OFFSET(0x17BBAC80)
#define RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET UNITYSDK_OFFSET(0x17BBA8E0)
#define RPG_CLIENT_EARLYACCESSCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0x17BBA970)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0x17BBB2A0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET UNITYSDK_OFFSET(0x17BBB1B0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETDOINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0x17BBB7A0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17BBCFA0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x17BBC620)
#define RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET UNITYSDK_OFFSET(0x17BBB700)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_CANUNLOCK_OFFSET UNITYSDK_OFFSET(0x17BBA5F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x17BBA4C0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x17BBA740)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x17BBA640)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x17BBA690)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x17BBA830)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0x17BBA780)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0x17BBA6F0)
#define RPG_CLIENT_EARLYACCESSCONTENT_GET_ISUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0x17BBA500)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORHIDEINNAVMAPSUBTAB_OFFSET UNITYSDK_OFFSET(0x17BBB480)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17BBB100)
#define RPG_CLIENT_EARLYACCESSCONTENT_ISMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0x17BBCD80)
#define RPG_CLIENT_EARLYACCESSCONTENT_MARKISBLOCK_OFFSET UNITYSDK_OFFSET(0x17BBCD40)
#define RPG_CLIENT_EARLYACCESSCONTENT_NEEDSHOWREMAINTIMER_OFFSET UNITYSDK_OFFSET(0x17BBCE50)
#define RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x17BBAD00)
#define RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x17BBB0B0)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET UNITYSDK_OFFSET(0x17BBBC50)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x17BBBB20)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x17BBCEC0)
#define RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET UNITYSDK_OFFSET(0x17BBA550)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET UNITYSDK_OFFSET(0x17BBAA50)
#define RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17BBA9B0)
#define RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET UNITYSDK_OFFSET(0x17BBA7E0)
#define RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0x17BBAF60)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent_TypeDefinitionIndex = 65083;

	class EarlyAccessContent : public ::System::Object
	{
	public:
		::RPG::GameCore::ContentPackageConfigRow* _Row; // 0x10
		::RPG::Client::ConditionChecker* _ReleaseCondition; // 0x18
		::RPG::Client::ConditionChecker* _GuideCondition; // 0x20
		::DAGNHGIBCPG* _SrvData; // 0x28
		::System::Collections::Generic::List_1<::PBNOGIFIKBC*>* _ContentFloors; // 0x30
		::System::Boolean _IsBlock; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 _ContentID; // 0x3C
		// static const ::System::Object MAIN_CONTENT_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsUnavailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISUNAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_CanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_CANUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISDOING_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsMainContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISMAINCONTENT_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GET_ISINSCHEDULE_OFFSET))(this);
		}

		static ::RPG::Client::EarlyAccessContent* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::EarlyAccessContent* CreateMainDimension()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CREATEMAINDIMENSION_OFFSET))();
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_PREPAREDATA_OFFSET))(this);
		}

		::System::Void Update(::DAGNHGIBCPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGNHGIBCPG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORUNLOCKED_OFFSET))(this, a1);
		}

		::PBNOGIFIKBC* GetContentFloor(::System::UInt32 a1)
		{
			return ((::PBNOGIFIKBC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETCONTENTFLOOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::Boolean IsFloorHideInNavMapSubTab(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISFLOORHIDEINNAVMAPSUBTAB_OFFSET))(this, a1);
		}

		::System::Boolean ContainsDimension(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSDIMENSION_OFFSET))(this, a1);
		}

		::System::Boolean ContainsMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_CONTAINSMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 GetTransferEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETTRANSFERENTRANCEID_OFFSET))(this);
		}

		::System::Void CollectMissionsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTMISSIONSFROMRELEASECONDITION_OFFSET))(this, a1);
		}

		::System::Void CollectContentIDsFromReleaseCondition(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTCONTENTIDSFROMRELEASECONDITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetReleaseConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETRELEASECONDITIONMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void CollectPreConditionsStopAtOutOfScheduleContent(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_COLLECTPRECONDITIONSSTOPATOUTOFSCHEDULECONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void MarkIsBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_MARKISBLOCK_OFFSET))(this);
		}

		::System::Boolean _IsMainContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__ISMAINCONTENT_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _InitContentFloors(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__INITCONTENTFLOORS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__PREPAREFLOORDATA_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDByGuideState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYGUIDESTATE_OFFSET))(this);
		}

		::System::UInt32 _GetEntranceIDBySubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETENTRANCEIDBYSUBMISSION_OFFSET))(this, a1);
		}

		::NMLPMPKAPHE _GetStatus()
		{
			return ((::NMLPMPKAPHE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETSTATUS_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetDoingSubMission()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETDOINGSUBMISSION_OFFSET))(this);
		}

		::System::Boolean IsMainMissionAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_ISMAINMISSIONALLFINISHED_OFFSET))(this);
		}

		::System::Boolean NeedShowRemainTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_NEEDSHOWREMAINTIMER_OFFSET))(this);
		}

		::System::UInt32 GetEndTimestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT_GETENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT__GETSCHEDULEDATA_OFFSET))(this);
		}

	};
}
