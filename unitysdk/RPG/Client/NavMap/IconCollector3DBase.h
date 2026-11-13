#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/IconCollectorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x19E2E4A0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x19E49230)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0x19E4B1C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DPLAYERICON_OFFSET UNITYSDK_OFFSET(0x19E2F6E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_NAVMAPAREADATA_OFFSET UNITYSDK_OFFSET(0x19E4B220)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x19E2F830)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__CARTOGRAPHY3D_OFFSET UNITYSDK_OFFSET(0x19E47510)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__MAP3DICONS_OFFSET UNITYSDK_OFFSET(0x19E4B200)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_INIT_OFFSET UNITYSDK_OFFSET(0x19E2E4F0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_SET__MAP3DICONS_OFFSET UNITYSDK_OFFSET(0x19E4B210)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x19E2EE60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEPLAYER3DICON_OFFSET UNITYSDK_OFFSET(0x19E2E730)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_1_OFFSET UNITYSDK_OFFSET(0x19E49870)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_OFFSET UNITYSDK_OFFSET(0x19E492B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__BUILDMISSIONGUIDEICON_OFFSET UNITYSDK_OFFSET(0x19E46790)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CANCOLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x19E48C00)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICONS_OFFSET UNITYSDK_OFFSET(0x19E48330)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x19E482B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMISSION3DICON_OFFSET UNITYSDK_OFFSET(0x19E46B90)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTSUBNAVMAPLINK3DICONS_OFFSET UNITYSDK_OFFSET(0x19E48670)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTELEPORT3DICON_OFFSET UNITYSDK_OFFSET(0x19E4A6B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTEMPSHOW3DICON_OFFSET UNITYSDK_OFFSET(0x19E47410)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTRACKMONSTER3DICON_OFFSET UNITYSDK_OFFSET(0x19E47310)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CREATEPOSEIDS_OFFSET UNITYSDK_OFFSET(0x19E49460)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0x19E48DB0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMONSTER3DICON_OFFSET UNITYSDK_OFFSET(0x19E49B70)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDTEMPSHOW3DICON_OFFSET UNITYSDK_OFFSET(0x19E49E80)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollector3DBase_TypeDefinitionIndex = 76671;

	class IconCollector3DBase : public ::RPG::Client::NavMap::IconCollectorBase
	{
	public:
		::RPG::Client::NavMap::NavMap3DIconData* _Map3DPlayerIcon; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* __Map3DIcons_k__BackingField; // 0x58
		::RPG::Client::NavMap::NavMap3DIconData* _OutControlTeamLeader3DIcon; // 0x60
		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_INIT_OFFSET))(this);
		}

		::System::Void UpdatePlayer3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEPLAYER3DICON_OFFSET))(this);
		}

		::System::Void _BuildMissionGuideIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__BUILDMISSIONGUIDEICON_OFFSET))(this);
		}

		::System::Void _CollectMappingInfo3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICON_OFFSET))(this);
		}

		::System::Void _CollectMappingInfo3DIcons(::RPG::Client::MapRotationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICONS_OFFSET))(this, a1);
		}

		::System::Void _CollectSubNavMapLink3DIcons(::RPG::Client::MapRotationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTSUBNAVMAPLINK3DICONS_OFFSET))(this, a1);
		}

		::System::Boolean _CanCollectMappingInfo3DIcon(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CANCOLLECTMAPPINGINFO3DICON_OFFSET))(this, a1);
		}

		::System::Void _TryAddMappingInfo3DIcon(::RPG::Client::MapMappingInfoData* a1, ::RPG::Client::MapRotationInfo* a2, ::RPG::Client::NavMap::ISubNavMap* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*, ::RPG::Client::MapRotationInfo*, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMAPPINGINFO3DICON_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CreatePoseIDs(::System::UInt32 a1, ::RPG::Client::MapPropDef* a2, ::RPG::Client::MapRotationInfo* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CREATEPOSEIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CollectMission3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMISSION3DICON_OFFSET))(this);
		}

		::System::Void UpdateOutControlTeamLeader3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::System::Void _CollectTrackMonster3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTRACKMONSTER3DICON_OFFSET))(this);
		}

		::System::Void _TryAddMonster3DIcon(::RPG::Client::MapTrackMonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMONSTER3DICON_OFFSET))(this, a1);
		}

		::System::Void _CollectTempShow3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTEMPSHOW3DICON_OFFSET))(this);
		}

		::System::Void _TryAddTempShow3DIcon(::RPG::Client::IBigMapIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDTEMPSHOW3DICON_OFFSET))(this, a1);
		}

		::System::Void _CollectTeleport3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTELEPORT3DICON_OFFSET))(this);
		}

		::System::Void _AddIcon(::RPG::Client::IBigMapIcon* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::UnityEngine::Quaternion a3, ::RPG::Client::NavMap::ISubNavMap* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _AddIcon_1(::RPG::Client::MapMissionData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMissionData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>* get_Map3DIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DICONLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_Map3DPlayerIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DPLAYERICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_OutControlTeamLeader3DIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartography3D* get__Cartography3D()
		{
			return ((::RPG::Client::NavMap::ICartography3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__CARTOGRAPHY3D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* get__Map3DIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__MAP3DICONS_OFFSET))(this);
		}

		::System::Void set__Map3DIcons(::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_SET__MAP3DICONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_AREAID_OFFSET))(this);
		}

		::RPG::Client::NavMap::AreaData* get_NavMapAreaData()
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_NAVMAPAREADATA_OFFSET))(this);
		}

	};
}
