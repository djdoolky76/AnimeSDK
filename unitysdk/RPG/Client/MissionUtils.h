#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class MissionUtils_SubMissionSortItem; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MainMissionPerformanceConfig; }
namespace RPG::GameCore { class PerformanceSortedItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1AD410)
#define RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0xE18B6C0)
#define RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET UNITYSDK_OFFSET(0xE1A80A0)
#define RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0xE1A7D00)
#define RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE18B720)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE1AA6D0)
#define RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET UNITYSDK_OFFSET(0xE19AD50)
#define RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET UNITYSDK_OFFSET(0xE19D1F0)
#define RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xE1A7E30)
#define RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE1AAC80)
#define RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE1AADF0)
#define RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET UNITYSDK_OFFSET(0xE18B020)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE1A8CC0)
#define RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0xE1A8BE0)
#define RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET UNITYSDK_OFFSET(0xE1A84D0)
#define RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET UNITYSDK_OFFSET(0xE1A81D0)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0xE1ABBD0)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET UNITYSDK_OFFSET(0xE1A9950)
#define RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET UNITYSDK_OFFSET(0xE1AAF30)
#define RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET UNITYSDK_OFFSET(0xE1A8DD0)
#define RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0xE1ACCE0)
#define RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET UNITYSDK_OFFSET(0xE1AC260)
#define RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0xE1AA2B0)
#define RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET UNITYSDK_OFFSET(0xE1AB270)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0xE1AB6D0)
#define RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET UNITYSDK_OFFSET(0xE1AB510)
#define RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET UNITYSDK_OFFSET(0xE1AA180)
#define RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET UNITYSDK_OFFSET(0xE1AD2F0)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0xE1AA460)
#define RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET UNITYSDK_OFFSET(0xE1AC8E0)
#define RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET UNITYSDK_OFFSET(0xE1ABFF0)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0xE1A94A0)
#define RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0xE1AA810)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils_TypeDefinitionIndex = 68125;

	class MissionUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__mainMissionPerformanceConfigRootPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A70);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::System::Object*>** StaticGet__performanceInfoMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A78);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__startSubMissionList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A80);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet__subMissionChildToParentGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A88);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>** StaticGet__subMissionMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A90);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__mainMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69A98);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__subMissionVisited()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AA0);
		}

		static ::RPG::GameCore::MainMissionPerformanceConfig** StaticGet__mainMissionPerformanceConfig()
		{
			return (::RPG::GameCore::MainMissionPerformanceConfig**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet__subMissionParentToChildGraph()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AB0);
		}

		static ::System::String** StaticGet__mainMissionPerformanceIndexConfigPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionParentToChildMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AC0);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__subMissionTopologicalSortResult()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__topoMainMissionChildToParentMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AD0);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__topoStartMainMissionResult()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "MissionUtils")->GetStaticField(0x69AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetDisplayRewardID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETDISPLAYREWARDID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPreMissionIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPREMISSIONIDLIST_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsControlHintByDistance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISCONTROLHINTBYDISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckIsWorldMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_CHECKISWORLDMISSION_OFFSET))(a1);
		}

		static ::System::Single GetHintMaxDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETHINTMAXDISTANCE_OFFSET))(a1);
		}

		static ::System::UInt32 GetWayPointType(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::SubmissionLogicType a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Boolean, ::RPG::GameCore::SubmissionLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETWAYPOINTTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PrepareSubmissionMapData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_PREPARESUBMISSIONMAPDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsPlayerCloseToSubMissionWaypoint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISPLAYERCLOSETOSUBMISSIONWAYPOINT_OFFSET))(a1);
		}

		static ::System::Boolean IsAssistWayPointHasOneClickCompleteConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTHASONECLICKCOMPLETECONFIG_OFFSET))();
		}

		static ::System::Boolean IsAssistWayPointActiveOneClickComplete()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_ISASSISTWAYPOINTACTIVEONECLICKCOMPLETE_OFFSET))();
		}

		static ::System::Boolean TryAssistWayPointOneClickCompleteTransfer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetMainMissionSortedItems(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONSORTEDITEMS_OFFSET))(a1, a2);
		}

		static ::System::Void TopologicalSortAllMainMission(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLMAINMISSION_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetMainMissionIDByPerformance(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETMAINMISSIONIDBYPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRealMainMissionIDByPerformance(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETREALMAINMISSIONIDBYPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetSubMissionIDByPerformance(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETSUBMISSIONIDBYPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::PerformanceSortedItem* GetPerformanceSortedItem(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::RPG::GameCore::PerformanceSortedItem*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_GETPERFORMANCESORTEDITEM_OFFSET))(a1, a2);
		}

		static ::System::Void _ClearMainMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARMAINMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _TryLoadPerformanceInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADPERFORMANCEINFO_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionPerformanceConfig* _TryLoadMissionToPerformanceConfig()
		{
			return ((::RPG::GameCore::MainMissionPerformanceConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__TRYLOADMISSIONTOPERFORMANCECONFIG_OFFSET))();
		}

		static ::System::Boolean _IsPerformanceInfoValid(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PerformanceSortedItem* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PerformanceSortedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ISPERFORMANCEINFOVALID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SearchNextMainMissionByDfs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTMAINMISSIONBYDFS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* TopologicalSortAllSubMission(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSORTALLSUBMISSION_OFFSET))(a1, a2);
		}

		static ::System::Void TopologicalSearchAllSubMission(::RPG::GameCore::MainMissionInfoConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS_TOPOLOGICALSEARCHALLSUBMISSION_OFFSET))(a1);
		}

		static ::System::Void _CalculateSubMissionIndent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CALCULATESUBMISSIONINDENT_OFFSET))(a1);
		}

		static ::System::Boolean _SearchNextSubMissionByDfs(::RPG::Client::MissionUtils_SubMissionSortItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SEARCHNEXTSUBMISSIONBYDFS_OFFSET))(a1);
		}

		static ::System::Void _ClearSubMissionSortItem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__CLEARSUBMISSIONSORTITEM_OFFSET))();
		}

		static ::System::Void _InitSubMissionMap(::RPG::GameCore::MainMissionInfoConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONMAP_OFFSET))(a1);
		}

		static ::System::Void _InitSubMissionConnectGraph(::RPG::GameCore::MainMissionInfoConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__INITSUBMISSIONCONNECTGRAPH_OFFSET))(a1);
		}

		static ::System::Void _SortSubMissionConnectGraph()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SORTSUBMISSIONCONNECTGRAPH_OFFSET))();
		}

		static ::System::Int32 _SameParentSubMissionSort(::RPG::Client::MissionUtils_SubMissionSortItem* a1, ::RPG::Client::MissionUtils_SubMissionSortItem* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MissionUtils_SubMissionSortItem*, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__SAMEPARENTSUBMISSIONSORT_OFFSET))(a1, a2);
		}

		static ::System::Void _AddToSubMissionConnectGraph(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS__ADDTOSUBMISSIONCONNECTGRAPH_OFFSET))(a1, a2);
		}

	};
}
