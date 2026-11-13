#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/MazeFloorCartographerIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/VerseParam.h"
namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class UniverseData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_SUBTABDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x19E67910)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19E6D5A0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19E6D180)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19E6D560)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLPREPAREMAPDATAKEYS_OFFSET UNITYSDK_OFFSET(0x19E5CD00)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x19E5F2D0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x19E6D7E0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x19E6DAE0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0x19E6D6F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0x19E335D0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x19E6DB70)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x19E6D930)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0x19E33CC0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_COMPLETELYUNLOCK_OFFSET UNITYSDK_OFFSET(0x19E6E240)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONDITIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19E6E750)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x19E5F470)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x19E6E6F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x19E34200)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19E6E950)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x19E6E810)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x19E6DBF0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0x19E35290)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x19E33BC0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0x19E6E710)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISUNLOCKAFTERENTER_OFFSET UNITYSDK_OFFSET(0x19E6E530)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0x19E6D7C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19E6AD20)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x19E6E060)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x19E6E080)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x19E5F3F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_SUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x19E2C400)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNIVERSE_OFFSET UNITYSDK_OFFSET(0x19E45880)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x19E35780)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0x19E5F380)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x19E6E7F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_ISHERE_OFFSET UNITYSDK_OFFSET(0x19E6DFB0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x19E67960)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_PREPAREMAPDATA_OFFSET UNITYSDK_OFFSET(0x19E6D860)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_CONDITIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19E6E760)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x19E6E700)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19E6E970)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0x19E6D7D0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x19E6E070)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_SUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x19E6E8C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x19E6E800)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x19E64090)
#define RPG_CLIENT_NAVMAP_SUBTABDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x19E6E980)
#define RPG_CLIENT_NAVMAP_SUBTABDATA__ISSHOWCURRENTTRACEMISSIONIN_OFFSET UNITYSDK_OFFSET(0x19E6DC40)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SubTabData_TypeDefinitionIndex = 76780;

	class SubTabData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* _AllSubNavMaps; // 0x10
		::System::String* _ConditionExpression_k__BackingField; // 0x18
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x20
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x28
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x30
		::RPG::Client::NavMap::IMainTab* _Parent_k__BackingField; // 0x38
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* _SubNavMaps; // 0x40
		::RPG::Client::NavMap::MazeFloorCartographerIdentifier _Identifier_k__BackingField; // 0x48
		::System::UInt32 _EntryID_k__BackingField; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SubTabData* Create(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::Client::NavMap::IMainTab* a2)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::NavMap::SubTabData* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::WorldData* a3)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETMAPDATA_OFFSET))(this);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_UPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_MAPDATAKEY_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* GetCartographyData()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETCARTOGRAPHYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* GetSyncedCartographyData(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET))(this, a1);
		}

		::System::Void PrepareMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_PREPAREMAPDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MapDataKey*>* GetAllPrepareMapDataKeys()
		{
			return ((::Il2CppArray<::RPG::Client::MapDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLPREPAREMAPDATAKEYS_OFFSET))(this);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::ISubNavMap* GetSubNavMapData(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETSUBNAVMAPDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* GetAllSubNavMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLSUBNAVMAPS_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetOnlinePlayRoomSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETONLINEPLAYROOMSUBTAB_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::Boolean _IsShowCurrentTraceMissionIn(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA__ISSHOWCURRENTTRACEMISSIONIN_OFFSET))(this, a1);
		}

		::System::Boolean IsHere(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_ISHERE_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IMainTab* get_Parent()
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_PARENT_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::UniverseData* get_Universe()
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNIVERSE_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PLANEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_CompletelyUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_COMPLETELYUNLOCK_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubNavMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSUBNAVMAP_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::String* get_ConditionExpression()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONDITIONEXPRESSION_OFFSET))(this);
		}

		::System::Void set_ConditionExpression(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_CONDITIONEXPRESSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_WORLD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlockAfterEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISUNLOCKAFTERENTER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* get_SubNavMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_SUBNAVMAPS_OFFSET))(this);
		}

		::System::Void set_SubNavMaps(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_SUBNAVMAPS_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::MazeFloorCartographerIdentifier get_Identifier()
		{
			return ((::RPG::Client::NavMap::MazeFloorCartographerIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::NavMap::MazeFloorCartographerIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MazeFloorCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* _GetSyncedCartographyData_b__11_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET))(this, a1);
		}

	};
}
