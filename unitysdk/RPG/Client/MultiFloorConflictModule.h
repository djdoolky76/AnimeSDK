#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MultiFloorConflictModule_PamOccupyDetail; }
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CONFLICTCONSIDERFORCESHOWTRAINNORMALPAM_OFFSET UNITYSDK_OFFSET(0xE329310)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xE32BF50)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE32AA10)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETALLFLOORMAPDEFSINCONFLICTGROUP_OFFSET UNITYSDK_OFFSET(0xE32BC50)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETCONFLICTGROUPID_OFFSET UNITYSDK_OFFSET(0xE32BB40)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUPWHENPAMSIM_OFFSET UNITYSDK_OFFSET(0xE32BA30)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUP_OFFSET UNITYSDK_OFFSET(0xE32B9A0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GET_ISFORCESHOWTRAINNORMALPAM_OFFSET UNITYSDK_OFFSET(0xE3292D0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INITPAMOCCUPYSTATE_OFFSET UNITYSDK_OFFSET(0xE32B210)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE32A580)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISFLOORBELONGMULTIFLOORCONFLICT_OFFSET UNITYSDK_OFFSET(0xE32B2F0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISOTHERFLOORDIMENSIONBYCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xE32B390)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISTRAINPAMOCCUPYBYMISSION_OFFSET UNITYSDK_OFFSET(0xE32A480)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONMISSIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xE32BEB0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONTRACKINGMISSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE32BDA0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xE32AF50)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SETTRAINPAMFORCESHOW_OFFSET UNITYSDK_OFFSET(0xE32A4E0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SHOULDCONSIDERMULTIFLOORCONFLICT_OFFSET UNITYSDK_OFFSET(0xE32B7A0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_UPDATECURRENTCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xE32B480)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2CONFLICTGROUPMAP_OFFSET UNITYSDK_OFFSET(0xE32A680)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_1_OFFSET UNITYSDK_OFFSET(0xE32A850)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_OFFSET UNITYSDK_OFFSET(0xE32ADD0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITTRAINCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xE3293C0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__ONGETRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xE32B2B0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_BUILDMODELS_OFFSET UNITYSDK_OFFSET(0xE3295B0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_DISTRIBUTEGROUPS_OFFSET UNITYSDK_OFFSET(0xE329B20)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_OFFSET UNITYSDK_OFFSET(0xE329D10)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOOR2MISSIONMAP_OFFSET UNITYSDK_OFFSET(0xE32ACB0)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOORID2CONFLICTGROUPMAP_OFFSET UNITYSDK_OFFSET(0xE32AD40)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITTRAINCONFLICTGROUPMAPDEFS_OFFSET UNITYSDK_OFFSET(0xE329520)
#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UPDATEPAMOCCUPYSTATE_OFFSET UNITYSDK_OFFSET(0xE32A410)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiFloorConflictModule_TypeDefinitionIndex = 68237;

	class MultiFloorConflictModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*>* FloorID2RelativeMissionID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* _OtherMapDefsInConflictGroup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FloorID2ConflictGroupMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* _TrainMapDefs; // 0x28
		::RPG::Client::MultiFloorConflictModule_PamOccupyDetail* _CurrentDetail; // 0x30
		::System::Boolean _ForceShowTrainNormalPam; // 0x38
		// static const ::System::Object PamConflictID; // 0x0
		// static const ::System::Object TrainConflictGroupID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsForceShowTrainNormalPam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GET_ISFORCESHOWTRAINNORMALPAM_OFFSET))(this);
		}

		::System::Boolean ConflictConsiderForceShowTrainNormalPam(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_CONFLICTCONSIDERFORCESHOWTRAINNORMALPAM_OFFSET))(this, a1);
		}

		::System::Void _InitTrainConflictGroupMapDefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITTRAINCONFLICTGROUPMAPDEFS_OFFSET))(this);
		}

		::System::Void _UnInitTrainConflictGroupMapDefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITTRAINCONFLICTGROUPMAPDEFS_OFFSET))(this);
		}

		::System::Void _SimulatePamOccupyStateDetail_BuildModels(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_BUILDMODELS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SimulatePamOccupyStateDetail_DistributeGroups(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_DISTRIBUTEGROUPS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SimulatePamOccupyStateDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__SIMULATEPAMOCCUPYSTATEDETAIL_OFFSET))(this);
		}

		::System::Void _UpdatePamOccupyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UPDATEPAMOCCUPYSTATE_OFFSET))(this);
		}

		::System::Boolean IsTrainPamOccupyByMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISTRAINPAMOCCUPYBYMISSION_OFFSET))(this);
		}

		::System::Void SetTrainPamForceShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SETTRAINPAMFORCESHOW_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitFloorID2ConflictGroupMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2CONFLICTGROUPMAP_OFFSET))(this);
		}

		::System::Void _UnInitFloorID2ConflictGroupMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOORID2CONFLICTGROUPMAP_OFFSET))(this);
		}

		::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* _InitFloorID2RelativeMissionID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_OFFSET))(this, a1);
		}

		::System::Void _InitFloorID2RelativeMissionID_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__INITFLOORID2RELATIVEMISSIONID_1_OFFSET))(this);
		}

		::System::Void _UnInitFloor2MissionMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__UNINITFLOOR2MISSIONMAP_OFFSET))(this);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Void InitPamOccupyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_INITPAMOCCUPYSTATE_OFFSET))(this);
		}

		::System::Void _OnGetRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE__ONGETRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsFloorBelongMultiFloorConflict(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISFLOORBELONGMULTIFLOORCONFLICT_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsOtherFloorDimensionByCurrentMap(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ISOTHERFLOORDIMENSIONBYCURRENTMAP_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdateCurrentConflictGroupMapDefs(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_UPDATECURRENTCONFLICTGROUPMAPDEFS_OFFSET))(this, a1);
		}

		::System::Boolean ShouldConsiderMultiFloorConflict(::RPG::Client::MapDef* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_SHOULDCONSIDERMULTIFLOORCONFLICT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapDef* GetMapDefInConflictGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapDef* GetMapDefInConflictGroupWhenPamSim(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETMAPDEFINCONFLICTGROUPWHENPAMSIM_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetConflictGroupID(::RPG::Client::MapDef* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETCONFLICTGROUPID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* GetAllFloorMapDefsInConflictGroup(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_GETALLFLOORMAPDEFSINCONFLICTGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void OnTrackingMissionChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONTRACKINGMISSIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnMissionStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_ONMISSIONSTATECHANGE_OFFSET))(this, a1);
		}

	};
}
