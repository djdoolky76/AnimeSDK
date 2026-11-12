#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CAFPFNAKODN;
class CHKMFJDANOL;
class FAHFBEJCKLF;
class FDIOCFOAMLD;
class FHNIMGBMPLN;
class HEACNLOGGPH;
class HKENHAIMOCH;
class JEHPCNCCGFE;
class NAPKJBIKFNA;
namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE3F32B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE3F19E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE3F1BD0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETALLENTITYENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE3E6C20)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xE3DF260)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETFLOORSTARTANCHORLAYER_OFFSET UNITYSDK_OFFSET(0xE3C7F20)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET UNITYSDK_OFFSET(0xE3ED860)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET UNITYSDK_OFFSET(0xE3ED5B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0xE3F3590)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0xE3F3530)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xE3F1870)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xE3EDD90)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0xE3F28C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0xE3CA560)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xE3F29F0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xE3F2B20)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xE3F1F70)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xE3F3120)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE3F18C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xE3F2FF0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xE3F2670)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISINONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xE3F2850)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE3E23C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LAYERNUMBER_OFFSET UNITYSDK_OFFSET(0xE3F2C50)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LIGHTENSECTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xE3C4C00)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0xE3CC230)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xE3CD200)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xE3F2830)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xE3F1820)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xE3F28A0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_TAGCONTAINER_OFFSET UNITYSDK_OFFSET(0xE3F2D80)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_VALIDSUBMAPLIST_OFFSET UNITYSDK_OFFSET(0xE3F3400)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0xE3F1E70)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET UNITYSDK_OFFSET(0xE3F1D70)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET UNITYSDK_OFFSET(0xE3E9610)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET UNITYSDK_OFFSET(0xE3E8E90)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET UNITYSDK_OFFSET(0xE3F3250)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xE3F2840)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xE3F28B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xE3F20A0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET UNITYSDK_OFFSET(0xE3F2EB0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET UNITYSDK_OFFSET(0xE3E45E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xE3F1C00)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0xE3CAC70)
#define RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET UNITYSDK_OFFSET(0xE3F2200)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapData_TypeDefinitionIndex = 76768;

	class MapData : public ::System::Object
	{
	public:
		::HEACNLOGGPH* _SceneMapInfo; // 0x10
		::RPG::Client::ChestAndRaidInfoCollector* _ChestAndRaidInfoCollector; // 0x18
		::RPG::Client::MapDataKey* _MapDataKey; // 0x20
		::CHKMFJDANOL* _CrossMapDataStrategy; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedChestMonsterHashSet; // 0x30
		::System::Boolean _SyncedWithServer_k__BackingField; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 _PlaneID_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::MapData* Create(::RPG::Client::MapDataKey* a1)
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean TryGetGroupProperty(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::NAPKJBIKFNA* get__CurrentStrategy()
		{
			return ((::NAPKJBIKFNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* GetSubNavMapLinkEntity(::System::UInt32 a1)
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET))(this, a1);
		}

		::System::Void SyncServerData(::HEACNLOGGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEACNLOGGPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MapDataKey* get_Key()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_KEY_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ISCURRENTMAP_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsInOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ISINONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_SyncedWithServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_SYNCEDWITHSERVER_OFFSET))(this);
		}

		::System::Void set_SyncedWithServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET))(this, a1);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::String* get_EnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::HKENHAIMOCH* get_FiveDimNavGraphConfig()
		{
			return ((::HKENHAIMOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FiveDimRequireSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET))(this);
		}

		::FHNIMGBMPLN* get_FloorBakedInfoConfig()
		{
			return ((::FHNIMGBMPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
		}

		::System::Int32 get_LayerNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_LAYERNUMBER_OFFSET))(this);
		}

		::System::Int32 GetFloorStartAnchorLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETFLOORSTARTANCHORLAYER_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* get_TagContainer()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_TAGCONTAINER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_LightenSectionIDList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_LIGHTENSECTIONIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* GetAllEntityEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETALLENTITYENUMERATOR_OFFSET))(this);
		}

		::System::Boolean TryGetEntity(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* TryGetAllEntityInGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* get_AnchorDefs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* TryGetRuntimeGroupInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::FloorSavedData* get_FloorSavedValues()
		{
			return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET))(this);
		}

		::JEHPCNCCGFE* get_FloorConstValues()
		{
			return ((::JEHPCNCCGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET))(this);
		}

		::System::Boolean IsChestMonsterFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsCanLoad(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET))(this, a1);
		}

		::System::Boolean IsCanLoad_1(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckMonsterAvailable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* get_ValidSubMapList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_VALIDSUBMAPLIST_OFFSET))(this);
		}

		::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
		{
			return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ERAFLIPCONFIG_OFFSET))(this);
		}

		::RPG::Client::MapRotationInfo* get_MapRotationInfo()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_MAPROTATIONINFO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FAHFBEJCKLF*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FAHFBEJCKLF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CAFPFNAKODN*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CAFPFNAKODN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Void _UpdateFinishedChestMonster(::HEACNLOGGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEACNLOGGPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET))(this, a1);
		}

		::FDIOCFOAMLD* get__CurrentMapDataStrategy()
		{
			return ((::FDIOCFOAMLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET))(this);
		}

	};
}
