#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGDJANDMKOB.h"
#include "unitysdk/RPG/Client/MiniMapManager_EMinimapIconListState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DDBOKLCFEEA;
class JGIBKJLGLIC;
namespace RPG::Client { class Map; }
namespace RPG::Client { class MiniMapLayer; }
namespace RPG::Client { class MiniMapZone; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class UnlockSectionInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MINIMAPMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1460E0)
#define RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE146620)
#define RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET UNITYSDK_OFFSET(0xE14A140)
#define RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0xE14AC70)
#define RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0xE151710)
#define RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0xE1516F0)
#define RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET UNITYSDK_OFFSET(0xE149BD0)
#define RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET UNITYSDK_OFFSET(0xE149EE0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET UNITYSDK_OFFSET(0xE149910)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0xE1497C0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET UNITYSDK_OFFSET(0xE148DD0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0xE149C70)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERONLINEPLAYROOMJUKEBOXICON_OFFSET UNITYSDK_OFFSET(0xE149710)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0xE1490D0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET UNITYSDK_OFFSET(0xE1495B0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET UNITYSDK_OFFSET(0xE149660)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET UNITYSDK_OFFSET(0xE147C30)
#define RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET UNITYSDK_OFFSET(0xE1499E0)
#define RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0xE151720)
#define RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0xE151700)
#define RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0xE14ACB0)
#define RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xE146BB0)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET UNITYSDK_OFFSET(0xE149270)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0xE149890)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET UNITYSDK_OFFSET(0xE1491E0)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0xE149E90)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET UNITYSDK_OFFSET(0xE1488E0)
#define RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0xE14D170)
#define RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET UNITYSDK_OFFSET(0xE14B030)
#define RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0xE14F310)
#define RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xE14E4D0)
#define RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xE14E470)
#define RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET UNITYSDK_OFFSET(0xE14A020)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET UNITYSDK_OFFSET(0xE149000)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET UNITYSDK_OFFSET(0xE1492C0)
#define RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0xE14EED0)
#define RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xE14E3D0)
#define RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xE14DFB0)
#define RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE14BA60)
#define RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xE14E420)
#define RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0xE14E000)
#define RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET UNITYSDK_OFFSET(0xE14DF50)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0xE148250)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE148690)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0xE14DD00)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET UNITYSDK_OFFSET(0xE14AA50)
#define RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET UNITYSDK_OFFSET(0xE147BD0)
#define RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET UNITYSDK_OFFSET(0xE147340)
#define RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET UNITYSDK_OFFSET(0xE147B40)
#define RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET UNITYSDK_OFFSET(0xE14F7D0)
#define RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xE150250)
#define RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0xE148BC0)
#define RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET UNITYSDK_OFFSET(0xE148070)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_TypeDefinitionIndex = 62033;

	class MiniMapManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* _FilteredMiniMapIcons; // 0x10
		::RPG::Client::UnlockSectionInfo* _Info; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapLayer*>* _MapLayers; // 0x20
		::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* _MiniMapIcons; // 0x28
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x30
		::DDBOKLCFEEA* _LimitAreaData_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _PlayerTrack; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _LocateSectionIdxs; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideWhiteList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapZone*>* _DiscreteMapZones; // 0x58
		::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* _MissionIcons; // 0x60
		::RPG::Client::MiniMapZone* PlayerZone; // 0x68
		::RPG::Client::MiniMapLayer* PlayerLayer; // 0x70
		::System::Collections::Generic::HashSet_1<::System::String*>* _FSVToSectionKeys; // 0x78
		::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* _FindChestIcons; // 0x80
		::System::Int32 _CurrentMapShowLayer; // 0x88
		::System::Single _Time; // 0x8C
		::System::Int32 _AllocID; // 0x90
		::JGDJANDMKOB _LocateSectionNearBounds; // 0x94
		::System::Int32 _MissionIconNum; // 0xA4
		::System::Single _LastFootprintTime; // 0xA8
		::System::UInt32 _LightScreenIconID; // 0xAC
		::System::Boolean _FindChestInfoStateDirty; // 0xB0
		::System::Boolean _IgnoreEnlightSection_k__BackingField; // 0xB1
		::System::Boolean _TrackingInfoStateDirty; // 0xB2
		::System::Boolean _InHide; // 0xB3
		::RPG::Client::MiniMapManager_EMinimapIconListState _IconListState; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Int32 RegisterZone(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterZone(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET))(this, a1);
		}

		::System::Void RegisterIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterOutControlTeamLeaderIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterAllIcon(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET))(this, a1);
		}

		::System::Void RegisterSwitchHandHandIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterTravelShipDockIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterOnlinePlayRoomJukeBoxIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERONLINEPLAYROOMJUKEBOXICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterIconForProp(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterIconForProp(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET))(this, a1);
		}

		::System::Void RegisterIconForDailyProp(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET))(this, a1, a2);
		}

		::System::Void SetEntityIconsHide(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsIconHidden(::JGIBKJLGLIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGIBKJLGLIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET))(this, a1);
		}

		::System::Void RegisterLimitArea(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnRegisterLimitArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET))(this);
		}

		::RPG::Client::MiniMapZone* QueryZone(::UnityEngine::Vector3 a1, ::RPG::Client::MiniMapZone* a2, ::RPG::Client::MiniMapLayer* a3)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* GetMiniMapIcons()
		{
			return ((::System::Collections::Generic::List_1<::JGIBKJLGLIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetPlayerTrack()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET))(this);
		}

		::System::Void ShitPlayerTrack(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET))(this, a1);
		}

		::System::Void _ArrangeZoneToLayer(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapZone* _GetZoneInLayer(::RPG::Client::MiniMapLayer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::RPG::Client::MiniMapLayer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET))(this, a1, a2);
		}

		::System::Int32 _RegisterZoneInternal(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET))(this, a1);
		}

		::System::Void _WriteZone(::RPG::GameCore::LevelNavmapConfig* a1, ::RPG::Client::MiniMapZone* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::RPG::Client::MiniMapZone*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterFSVToSections(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void _UnRegisterFSVToSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET))(this);
		}

		::System::Void _OnFloorSavedValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerZone(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET))(this, a1);
		}

		::System::Void _InternalAddIcon(::JGIBKJLGLIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGIBKJLGLIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET))(this, a1);
		}

		::System::Void _InternalRemoveTargetAllIcons(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET))(this, a1);
		}

		::System::Void _OnTrackingInfoRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnFindChestInfoRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAddTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void _OnRemoveTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void _TickRefreshTrackingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET))(this);
		}

		::System::Void _TickFindChestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET))(this);
		}

		::System::Void _DoTrackingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET))(this);
		}

		::System::Void _MissionRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET))(this);
		}

		::System::Void _TryRefreshSubMission(::RPG::Client::Map* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET))(this, a1, a2);
		}

		::System::Void _AssistWaypointRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET))(this);
		}

		::System::Void _TrackingIconRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET))(this);
		}

		::System::Void _DoChestMappingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET))(this);
		}

		static ::System::Void _RemoveInvalidIcons(::System::Collections::Generic::List_1<::JGIBKJLGLIC*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::JGIBKJLGLIC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET))(a1);
		}

		::System::Void _AddIconInSections(::JGIBKJLGLIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGIBKJLGLIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET))(this, a1);
		}

		::System::Void _RemoveIconInSections(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET))(this, a1);
		}

		::DDBOKLCFEEA* get_LimitAreaData()
		{
			return ((::DDBOKLCFEEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET))(this);
		}

		::System::Void set_LimitAreaData(::DDBOKLCFEEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDBOKLCFEEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreEnlightSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET))(this);
		}

		::System::Void set_IgnoreEnlightSection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET))(this, a1);
		}

	};
}
