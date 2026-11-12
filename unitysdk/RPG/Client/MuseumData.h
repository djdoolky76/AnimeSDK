#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBAEPOLFFMG.h"
#include "unitysdk/System/Object.h"
class CHIBEKJIAMC;
class EAINGAEAJIN;
class EIBGMKIJNDK;
class EJLFOBMAPEJ;
class FCCDKHNGIPH;
class FEHHKDIIENA;
class IKADIECNGND;
class OPLMCLODKAJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumRandomEventData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTargetData; }
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET UNITYSDK_OFFSET(0xE345BD0)
#define RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET UNITYSDK_OFFSET(0xE345AE0)
#define RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET UNITYSDK_OFFSET(0xE3444C0)
#define RPG_CLIENT_MUSEUMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE3455C0)
#define RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET UNITYSDK_OFFSET(0xE345DD0)
#define RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET UNITYSDK_OFFSET(0xE345870)
#define RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET UNITYSDK_OFFSET(0xE345F60)
#define RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0xE346FD0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xE346FB0)
#define RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347030)
#define RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xE347090)
#define RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347050)
#define RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE3437B0)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0xE346F70)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xE3470B0)
#define RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET UNITYSDK_OFFSET(0xE3470D0)
#define RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0xE346F90)
#define RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE345A00)
#define RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET UNITYSDK_OFFSET(0xE347070)
#define RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347010)
#define RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xE346000)
#define RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET UNITYSDK_OFFSET(0xE345960)
#define RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET UNITYSDK_OFFSET(0xE345A40)
#define RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET UNITYSDK_OFFSET(0xE346190)
#define RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xE346FC0)
#define RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347040)
#define RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET UNITYSDK_OFFSET(0xE3470A0)
#define RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347060)
#define RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE346270)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET UNITYSDK_OFFSET(0xE346F80)
#define RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0xE3470C0)
#define RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET UNITYSDK_OFFSET(0xE346FA0)
#define RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET UNITYSDK_OFFSET(0xE347080)
#define RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE347020)
#define RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET UNITYSDK_OFFSET(0xE346D00)
#define RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET UNITYSDK_OFFSET(0xE346CA0)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET UNITYSDK_OFFSET(0xE346BC0)
#define RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xE3460A0)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET UNITYSDK_OFFSET(0xE346DE0)
#define RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET UNITYSDK_OFFSET(0xE346D50)
#define RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET UNITYSDK_OFFSET(0xE345910)
#define RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET UNITYSDK_OFFSET(0xE346EE0)
#define RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET UNITYSDK_OFFSET(0xE346A20)
#define RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET UNITYSDK_OFFSET(0xE346760)
#define RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET UNITYSDK_OFFSET(0xE346360)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumData_TypeDefinitionIndex = 68266;

	class MuseumData : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumPhaseRow* _Row; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _ExhibitStuffs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _Staffs_k__BackingField; // 0x20
		::RPG::Client::MuseumRandomEventData* _MuseumRandomEventData_k__BackingField; // 0x28
		::Il2CppArray<::RPG::Client::MuseumAreaData*>* _MuseumAreaDatas_k__BackingField; // 0x30
		::RPG::Client::MuseumPropertyData* _RenewPointData_k__BackingField; // 0x38
		::RPG::Client::MuseumTargetData* _MuseumTargetData_k__BackingField; // 0x40
		::System::UInt32 _CurTurnCount_k__BackingField; // 0x48
		::System::UInt32 _TurnCount_k__BackingField; // 0x4C
		::System::UInt32 _CurFunds; // 0x50
		::System::UInt32 _CurRenewPoint_k__BackingField; // 0x54
		::System::UInt32 _FinishTurnCount_k__BackingField; // 0x58
		// static const ::System::Object MAX_AREA_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_CTOR_OFFSET))(this);
		}

		::System::Void CalculateAndUpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_CALCULATEANDUPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MuseumAreaData* GetAreaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean IsPhaseLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISPHASELOCK_OFFSET))(this);
		}

		::System::Void SetStaff(::RPG::Client::MuseumStaffData* a1, ::GBAEPOLFFMG a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::GBAEPOLFFMG))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SETSTAFF_OFFSET))(this, a1, a2);
		}

		::System::Void AddStaff(::RPG::Client::MuseumStaffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDSTAFF_OFFSET))(this, a1);
		}

		::System::Void AddExhibitItem(::RPG::Client::MuseumExhibitItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumExhibitItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ADDEXHIBITITEM_OFFSET))(this, a1);
		}

		::System::Void FinishCurTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_FINISHCURTURN_OFFSET))(this);
		}

		::System::Int32 GetUnlockAreaNum(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GETUNLOCKAREANUM_OFFSET))(this, a1);
		}

		::System::Boolean IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void SyncMuseumData(::IKADIECNGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKADIECNGND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_OFFSET))(this, a1);
		}

		::System::Void SyncMuseumData_1(::EJLFOBMAPEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJLFOBMAPEJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCMUSEUMDATA_1_OFFSET))(this, a1);
		}

		::System::Void SyncFundsChange(::OPLMCLODKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPLMCLODKAJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFUNDSCHANGE_OFFSET))(this, a1);
		}

		::System::Void SyncFinishCurTurn(::CHIBEKJIAMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHIBEKJIAMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCFINISHCURTURN_OFFSET))(this, a1);
		}

		::System::Void SyncUpgradeArea(::EIBGMKIJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIBGMKIJNDK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREA_OFFSET))(this, a1);
		}

		::System::Void SyncUpgradeAreaStat(::EAINGAEAJIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAINGAEAJIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SYNCUPGRADEAREASTAT_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaDatas(::Google::Protobuf::Collections::RepeatedField_1<::FCCDKHNGIPH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::FCCDKHNGIPH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCAREADATAS_OFFSET))(this, a1);
		}

		::System::Void _ResetAreasState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__RESETAREASSTATE_OFFSET))(this);
		}

		::System::Void _SyncStaffs(::Google::Protobuf::Collections::RepeatedField_1<::FEHHKDIIENA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::FEHHKDIIENA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCSTAFFS_OFFSET))(this, a1);
		}

		::System::Void _SyncExhibitItems(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__SYNCEXHIBITITEMS_OFFSET))(this, a1);
		}

		::System::Int32 _GetIndexByAreaID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA__GETINDEXBYAREAID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::MuseumAreaData*>* get_MuseumAreaDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MuseumAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMAREADATAS_OFFSET))(this);
		}

		::System::Void set_MuseumAreaDatas(::Il2CppArray<::RPG::Client::MuseumAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MuseumAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMAREADATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumPropertyData* get_RenewPointData()
		{
			return ((::RPG::Client::MuseumPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_RENEWPOINTDATA_OFFSET))(this);
		}

		::System::Void set_RenewPointData(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_RENEWPOINTDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumPhaseRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_CurRenewPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_CurRenewPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURRENEWPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurFunds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURFUNDS_OFFSET))(this);
		}

		::System::Void set_CurFunds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURFUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_TURNCOUNT_OFFSET))(this);
		}

		::System::Void set_TurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_TURNCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_CURTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_CurTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_CURTURNCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_FINISHTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_FINISHTURNCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_Staffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_STAFFS_OFFSET))(this);
		}

		::System::Void set_Staffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_STAFFS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_ExhibitStuffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_EXHIBITSTUFFS_OFFSET))(this);
		}

		::System::Void set_ExhibitStuffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_EXHIBITSTUFFS_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumRandomEventData* get_MuseumRandomEventData()
		{
			return ((::RPG::Client::MuseumRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMRANDOMEVENTDATA_OFFSET))(this);
		}

		::System::Void set_MuseumRandomEventData(::RPG::Client::MuseumRandomEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_SET_MUSEUMRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTargetData* get_MuseumTargetData()
		{
			return ((::RPG::Client::MuseumTargetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMDATA_GET_MUSEUMTARGETDATA_OFFSET))(this);
		}

	};
}
