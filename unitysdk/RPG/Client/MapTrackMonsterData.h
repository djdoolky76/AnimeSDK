#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPTRACKMONSTERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E08EF40)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08EE70)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E08F960)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x1E090100)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1E08FF40)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1E090190)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E0900A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1E08F610)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1E08FE70)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1E08F7C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x1E08F770)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E08F800)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1E0901E0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0x1E08FBA0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x1E08FC20)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x1E08FFC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1E08F660)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x1E08F700)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x1E08F8C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x1E08F920)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x1E08F880)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0x1E08FF00)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1E08F840)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x1E08FB60)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x1E08F9F0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x1E08FA50)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x1E08FAF0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E090040)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1E08FEC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x1E090000)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1E08FF80)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1E08F9B0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1E090140)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1E08F590)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__INITMAPTRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1E08F090)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x1E08F3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTrackMonsterData_TypeDefinitionIndex = 64362;

	class MapTrackMonsterData : public ::System::Object
	{
	public:
		::RPG::Client::MapIconAreaData* _AreaData; // 0x10
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x18
		::RPG::Client::MapDataKey* _MapDataKey; // 0x20
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x28
		::System::Int32 _AreaID; // 0x30
		::System::Int32 _MapLayer; // 0x34
		::System::UInt32 _GroupID; // 0x38
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x3C
		::System::UInt32 _MappingInfoID; // 0x44
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0x48
		::System::UInt32 _OriginMappingInfoID; // 0x4C
		::System::UInt32 _MapIconType; // 0x50
		::UnityEngine::Color _MapIconColor; // 0x54
		::System::Int32 _SectionID; // 0x64
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x68
		::UnityEngine::Vector3 _MapPosition; // 0x6C
		::System::UInt32 _InstanceId; // 0x78
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x7C
		::System::UInt32 _EntranceID; // 0x80
		::System::UInt32 _IdentificationID; // 0x84
		::UnityEngine::Vector3 _MapRotation; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapTrackMonsterData* Create(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapNpcDef* a3)
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitMapTrackMonsterData(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapNpcDef* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__INITMAPTRACKMONSTERDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryOverrideMappingInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}

	};
}
