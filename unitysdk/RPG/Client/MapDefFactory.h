#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDKKDPIHFKL;
class FEHLIMILEMA;
class HBCLPBGJHDJ;
class KHNBFDNKLHE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class PerformanceStartSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class PerformanceBackupConfig; }
namespace RPG::GameCore { class PerformanceStandalonePlayOverrideConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET UNITYSDK_OFFSET(0xD5474B0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET UNITYSDK_OFFSET(0xD547590)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD5439B0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD543510)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET UNITYSDK_OFFSET(0xD549850)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET UNITYSDK_OFFSET(0xD5480C0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET UNITYSDK_OFFSET(0xD548930)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET UNITYSDK_OFFSET(0xD5490F0)
#define RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET UNITYSDK_OFFSET(0xD549010)
#define RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD542C10)
#define RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD5471C0)
#define RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET UNITYSDK_OFFSET(0xD546FC0)
#define RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET UNITYSDK_OFFSET(0xD546BA0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET UNITYSDK_OFFSET(0xD543010)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET UNITYSDK_OFFSET(0xD542E50)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD5450A0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xD5433C0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD545510)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD5436B0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET UNITYSDK_OFFSET(0xD543320)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD545B80)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD543700)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET UNITYSDK_OFFSET(0xD5431D0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD542EA0)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET UNITYSDK_OFFSET(0xD543450)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET UNITYSDK_OFFSET(0xD542D30)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xD544590)
#define RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET UNITYSDK_OFFSET(0xD547760)
#define RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET UNITYSDK_OFFSET(0xD543130)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET UNITYSDK_OFFSET(0xD543DC0)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET UNITYSDK_OFFSET(0xD543E80)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET UNITYSDK_OFFSET(0xD546670)
#define RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD543B50)
#define RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD546160)
#define RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET UNITYSDK_OFFSET(0xD546E90)
#define RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD546D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDefFactory_TypeDefinitionIndex = 62097;

	class MapDefFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef* Create(::KHNBFDNKLHE* a1)
		{
			return ((::RPG::Client::MapDef*(*)(::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MapDef* CreateByStandalonePerformance(::HBCLPBGJHDJ* a1, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig* a2)
		{
			return ((::RPG::Client::MapDef*(*)(::HBCLPBGJHDJ*, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYSTANDALONEPERFORMANCE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapDef* CreateByPerformanceSnapshot(::Proto::PerformanceStartSnapshot* a1, ::RPG::GameCore::PerformanceBackupConfig* a2)
		{
			return ((::RPG::Client::MapDef*(*)(::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYPERFORMANCESNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshot(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2, ::RPG::GameCore::PerformanceBackupConfig* a3)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _OverridePerformanceSnapshotByCustom(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYCUSTOM_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshotGroupByCustom(::RPG::Client::MapDef* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTGROUPBYCUSTOM_OFFSET))(a1, a2);
		}

		static ::System::Void _HandlePerformanceSnapshotChest(::Proto::EntitySnapshot* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__HANDLEPERFORMANCESNAPSHOTCHEST_OFFSET))(a1, a2);
		}

		static ::System::Void _OverridePerformanceSnapshotByTable(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__OVERRIDEPERFORMANCESNAPSHOTBYTABLE_OFFSET))(a1, a2);
		}

		static ::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>* _GetGroupSnapshotListByGroupID(::RPG::GameCore::RuntimeGroupInfo* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GroupSnapshot*>*(*)(::RPG::GameCore::RuntimeGroupInfo*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__GETGROUPSNAPSHOTLISTBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _TryAddSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYADDSINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _TryRemoveSingleExtraActiveGroupSnapshot(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYREMOVESINGLEEXTRAACTIVEGROUPSNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::Proto::GroupSnapshot* _TryGetGroupSnapshotByGroupID(::RPG::Client::MapDef* a1, ::Proto::PerformanceStartSnapshot* a2, ::System::UInt32 a3)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::Client::MapDef*, ::Proto::PerformanceStartSnapshot*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__TRYGETGROUPSNAPSHOTBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::Proto::GroupSnapshot* _CreateOverrideGroupSnapshot(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::Proto::GroupSnapshot*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__CREATEOVERRIDEGROUPSNAPSHOT_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefServerPart_PerformanceReplay(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefClientPart_PerformanceReplay(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue_PerformanceReplay(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue_PerformanceReplay(::FEHLIMILEMA* a1, ::Proto::PerformanceStartSnapshot* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::Proto::PerformanceStartSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_PERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue_StandalonePerformanceReplay(::FEHLIMILEMA* a1, ::HBCLPBGJHDJ* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::HBCLPBGJHDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue_StandalonePerformanceReplay(::FEHLIMILEMA* a1, ::HBCLPBGJHDJ* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::HBCLPBGJHDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_STANDALONEPERFORMANCEREPLAY_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapDef* CreateByCrossMap(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYCROSSMAP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::MapDef* CreateByOffline(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* a5)
		{
			return ((::RPG::Client::MapDef*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEBYOFFLINE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _InitMapObjects_Offine(::FEHLIMILEMA* a1)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPOBJECTS_OFFINE_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefServerPart(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFSERVERPART_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefClientPart(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFCLIENTPART_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefLightenSectionList(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFLIGHTENSECTIONLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefGroupCustomSaveData(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFGROUPCUSTOMSAVEDATA_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorSavedValue(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORSAVEDVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefFloorCustomValue(::FEHLIMILEMA* a1)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFFLOORCUSTOMVALUE_OFFSET))(a1);
		}

		static ::System::Void _InitMapDefBuffers(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFBUFFERS_OFFSET))(a1, a2);
		}

		static ::System::Void _InitOpenedChests(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITOPENEDCHESTS_OFFSET))(a1, a2);
		}

		static ::System::Void _InitMapDefMazeCrossFloorCondition(::FEHLIMILEMA* a1, ::KHNBFDNKLHE* a2)
		{
			return ((::System::Void(*)(::FEHLIMILEMA*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY__INITMAPDEFMAZECROSSFLOORCONDITION_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcDef(::RPG::Client::MapDef* a1, ::FDKKDPIHFKL* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::FDKKDPIHFKL*, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCDEF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::MapNpcDef* CreateNpcMonsterDef(::RPG::Client::MapDef* a1, ::FDKKDPIHFKL* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::MapDef*, ::FDKKDPIHFKL*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATENPCMONSTERDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef(::RPG::Client::MapDef* a1, ::FDKKDPIHFKL* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapPropDef*(*)(::RPG::Client::MapDef*, ::FDKKDPIHFKL*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapPropDef* CreatePropDef_1(::FDKKDPIHFKL* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapPropDef*(*)(::FDKKDPIHFKL*, ::RPG::GameCore::RuntimeGroupInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEPROPDEF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MapDistrictDef* CreateDistrictpDef(::RPG::Client::MapDef* a1, ::FDKKDPIHFKL* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::RPG::Client::MapDef*, ::FDKKDPIHFKL*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEFFACTORY_CREATEDISTRICTPDEF_OFFSET))(a1, a2, a3, a4);
		}

	};
}
