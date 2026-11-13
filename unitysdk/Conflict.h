#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class Conflict_ConflictGroupUnit;
class GCICBJENBEH;
class LALJPPIKONN;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_ADDDISTRICTTOUNIT_OFFSET UNITYSDK_OFFSET(0x1992DFE0)
#define CONFLICT_ADDNPCTOUNIT_OFFSET UNITYSDK_OFFSET(0x1992C3E0)
#define CONFLICT_ADDPROPTOUNIT_OFFSET UNITYSDK_OFFSET(0x1992D320)
#define CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET UNITYSDK_OFFSET(0x19923900)
#define CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET UNITYSDK_OFFSET(0x19926A90)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x19929280)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET UNITYSDK_OFFSET(0x19929B70)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0x19929360)
#define CONFLICT_CLEARCONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x19923F10)
#define CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x19924C70)
#define CONFLICT_COMPARETOBYMISSIONID_OFFSET UNITYSDK_OFFSET(0x1992F7C0)
#define CONFLICT_CTOR_OFFSET UNITYSDK_OFFSET(0x1992EE00)
#define CONFLICT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1992F1F0)
#define CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x19925E90)
#define CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET UNITYSDK_OFFSET(0x19930970)
#define CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET UNITYSDK_OFFSET(0x1992C2F0)
#define CONFLICT_GETMAINMISSIONPATCH_OFFSET UNITYSDK_OFFSET(0x1992CB70)
#define CONFLICT_GETMISSIONPOINTS_OFFSET UNITYSDK_OFFSET(0x1992F940)
#define CONFLICT_GETMISSIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x1992F980)
#define CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1992F5F0)
#define CONFLICT_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1992F420)
#define CONFLICT_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1992F310)
#define CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET UNITYSDK_OFFSET(0x199254A0)
#define CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET UNITYSDK_OFFSET(0x1992E9E0)
#define CONFLICT_REMOVENPCFROMUNIT_OFFSET UNITYSDK_OFFSET(0x1992CFD0)
#define CONFLICT_REMOVEPROPFROMUNIT_OFFSET UNITYSDK_OFFSET(0x1992DD20)
#define CONFLICT_SELECTPATCHMISSIONID_OFFSET UNITYSDK_OFFSET(0x1992ECA0)
#define CONFLICT_UPDATECONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x19923E10)
#define CONFLICT_UPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x1992AA00)
#define CONFLICT__ADDCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x19923090)
#define CONFLICT__BUILDMODELSSIM_OFFSET UNITYSDK_OFFSET(0x19924E00)
#define CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET UNITYSDK_OFFSET(0x19931B60)
#define CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x199276A0)
#define CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x199287D0)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x19926EA0)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x19927CE0)
#define CONFLICT__CLEARCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x19922F90)
#define CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x199323E0)
#define CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x1992F9C0)
#define CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x199301C0)
#define CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x1992BD90)
#define CONFLICT__DOUPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x1992B140)
#define CONFLICT__GETGROUPCATEGORY_1_OFFSET UNITYSDK_OFFSET(0x1992D8A0)
#define CONFLICT__GETGROUPCATEGORY_2_OFFSET UNITYSDK_OFFSET(0x1992E560)
#define CONFLICT__GETGROUPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1992CA30)
#define CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET UNITYSDK_OFFSET(0x1992D9E0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET UNITYSDK_OFFSET(0x1992E7E0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x1992CC10)
#define CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET UNITYSDK_OFFSET(0x1992DBE0)
#define CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET UNITYSDK_OFFSET(0x1992E6A0)
#define CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1992CE90)
#define CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x199240B0)
#define CONFLICT__ONGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x19931510)
#define CONFLICT__ONGROUPUNLOADED_OFFSET UNITYSDK_OFFSET(0x19931870)
#define CONFLICT__UNIONHASHSET_1_OFFSET UNITYSDK_OFFSET(0x1992C200)
#define CONFLICT__UNIONHASHSET_OFFSET UNITYSDK_OFFSET(0x1992C140)
#define CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET UNITYSDK_OFFSET(0x19923290)
#define CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x199234B0)
#define CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x19932610)
#define CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x199237B0)
#define CONFLICT__WILLCONFLICTCHANGE_OFFSET UNITYSDK_OFFSET(0x1992AC10)

inline static constexpr unsigned int Conflict_TypeDefinitionIndex = 48177;

	class Conflict : public ::System::Object
	{
	public:
		::RPG::Client::MapDef* _MapDef; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempSameMissionConflictIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _ConflictModelsDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _CurrentFloorMissionGroupUnits; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempConflictIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* _OtherFloorMissionGroupUnits; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _ConflictModelsList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _CurrentFloorNormalGroupUnits; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempInitConflictIDs; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* _OtherFloorNormalNpcGroupUnits; // 0x58
		::System::Boolean _IsInConflictTransfer; // 0x60
		::System::Void _ctor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ClearConflictModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__CLEARCONFLICTMODEL_OFFSET))(this);
		}

		::System::Void _AddConflictModel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT__ADDCONFLICTMODEL_OFFSET))(this, a1);
		}

		::System::Void _UpdateConflictModel_CurrentFloor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET))(this);
		}

		::System::Void _UpdateConflictModel_MultiFloor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET))(this);
		}

		::System::Void _UpdateOtherFloorGroupUnits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET))(this);
		}

		::System::Void UpdateConflictModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTMODEL_OFFSET))(this);
		}

		::System::Void ClearConflictView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CLEARCONFLICTVIEW_OFFSET))(this);
		}

		::System::Void _InitCurrentFloorMissionGroupUnits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CollectOtherFloorGroupConflictIDs(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*> _BuildModelsSim(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>* a1)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CONFLICT__BUILDMODELSSIM_OFFSET))(a1);
		}

		static ::System::Void MissionGroupConflictSim(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*> CalculateOtherFloorConflictGroupUnit(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*>(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>* CalculateOtherFloorHoyoGroupLoadStatesEX(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET))(a1, a2);
		}

		static ::System::Void _CalculateOtherFloorHoyoMissionGroupUnits(::RPG::Client::MapDef* a1, ::LALJPPIKONN* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::LALJPPIKONN*, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _CalculateOtherFloorLegacyMissionGroupUnits(::RPG::Client::MapDef* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET))(a1, a2);
		}

		static ::System::Void _CalculateOtherFloorLegacyNormalNpcGroupUnits(::RPG::Client::MapDef* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET))(a1, a2);
		}

		static ::System::Void _CalculateOtherFloorHoyoNormalNpcGroupUnits(::RPG::Client::MapDef* a1, ::LALJPPIKONN* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::LALJPPIKONN*, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdateConflictView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTVIEW_OFFSET))(this, a1);
		}

		::System::Boolean _WillConflictChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__WILLCONFLICTCHANGE_OFFSET))(this);
		}

		::System::Void _DoUpdateConflictView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DOUPDATECONFLICTVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetConnectSubmissionIDListFromNpc(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET))(this, a1, a2);
		}

		::System::Void AddNPCToUnit(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_ADDNPCTOUNIT_OFFSET))(this, a1);
		}

		::System::Void RemoveNPCFromUnit(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVENPCFROMUNIT_OFFSET))(this, a1);
		}

		::System::Void AddPropToUnit(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_ADDPROPTOUNIT_OFFSET))(this, a1);
		}

		::System::Void RemovePropFromUnit(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEPROPFROMUNIT_OFFSET))(this, a1);
		}

		::System::Void AddDistrictToUnit(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_ADDDISTRICTTOUNIT_OFFSET))(this, a1);
		}

		::System::Void RemoveDistrictFromUnit(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GroupCategory _GetGroupCategory(::RPG::Client::MapNpc* a1)
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GroupCategory _GetGroupCategory_1(::RPG::Client::MapProp* a1)
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GroupCategory _GetGroupCategory_2(::RPG::Client::MapDistrict* a1)
		{
			return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetGroupOwnerMainMission(::RPG::Client::MapNpc* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 _GetGroupOwnerMainMission_1(::RPG::Client::MapProp* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetGroupOwnerMainMission_2(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::LevelGroupMainMissionIssuePatch* GetMainMissionPatch(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMAINMISSIONPATCH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 SelectPatchMissionID(::System::Collections::Generic::List_1<::System::Object*>* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatch* a2, ::Conflict_ConflictGroupUnit* a3)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_SELECTPATCHMISSIONID_OFFSET))(a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs(::RPG::Client::MapNpc* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_1(::RPG::Client::MapProp* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_2(::RPG::Client::MapDistrict* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsGroupOccupied(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISGROUPOCCUPIED_OFFSET))(this, a1);
		}

		::System::Boolean IsEntityOccupied(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISENTITYOCCUPIED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 a1)
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET))(this, a1);
		}

		static ::System::Int32 CompareToByMissionID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_COMPARETOBYMISSIONID_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetMissionPoints(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPOINTS_OFFSET))(a1);
		}

		static ::System::UInt32 GetMissionPriority(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPRIORITY_OFFSET))(a1);
		}

		::System::Void _DistributeMissionUnitToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET))(this);
		}

		::System::Void _DistributeNormalUnitToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET))(this);
		}

		static ::System::Void DistributeOtherFloorMissionUnitToModel(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DistributeOtherFloorNormalNpcToModel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _DistributeUnitToModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET))(this);
		}

		::System::Void _OnGroupLoaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__ONGROUPLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnGroupUnloaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__ONGROUPUNLOADED_OFFSET))(this, a1);
		}

		static ::System::Void _UnionHashSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_OFFSET))(a1, a2);
		}

		static ::System::Void _UnionHashSet_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_1_OFFSET))(a1, a2);
		}

		static ::System::Void _CalculateOtherFloorGroupActiveState_MissionGroup(::GCICBJENBEH* a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Void(*)(::GCICBJENBEH*, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET))(a1, a2, a3);
		}

		static ::GCICBJENBEH* CalculateOtherFloorMissionGroupsActiveState(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::GCICBJENBEH*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET))(a1, a2);
		}

		static ::LALJPPIKONN* CalculateOtherFloorMissionGroupsLoadState_PerFloorSpaceConflict(::GCICBJENBEH* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::LALJPPIKONN*(*)(::GCICBJENBEH*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>* CalculateOtherFloorMissionGroupsLoadState_CombineNpcConflict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LALJPPIKONN*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _CollectAllOtherFloorsMainMissions(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET))(a1);
		}

		::System::Void _UpdateConflictView_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET))(this);
		}

	};
