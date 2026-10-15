#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FFCGHKGDAJF;
class GFBAEDGGPMM;
class HKGBEHLFIND;
class IOEPMPAKMOK;
class NNPMENNGJLH;
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MapConnectivityModule; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD951200)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD94DCB0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0xD94E080)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0xD94E060)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD94DFC0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD94DC30)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0xD94E040)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD94DF60)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET UNITYSDK_OFFSET(0xD94E090)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET UNITYSDK_OFFSET(0xD94E070)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET UNITYSDK_OFFSET(0xD94E050)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0xD94F7A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET UNITYSDK_OFFSET(0xD94FB10)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xD94FBA0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0xD94FC40)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0xD9501A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0xD950900)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0xD94F140)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD94E0A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET UNITYSDK_OFFSET(0xD94EC20)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0xD950840)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET UNITYSDK_OFFSET(0xD951190)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET UNITYSDK_OFFSET(0xD950C20)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET UNITYSDK_OFFSET(0xD94F000)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xD94E350)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xD94E300)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET UNITYSDK_OFFSET(0xD94E580)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET UNITYSDK_OFFSET(0xD94E3E0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET UNITYSDK_OFFSET(0xD94E650)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET UNITYSDK_OFFSET(0xD94ED20)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0xD94F720)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET UNITYSDK_OFFSET(0xD94FD50)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0xD94F890)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0xD9505B0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET UNITYSDK_OFFSET(0xD94F2A0)
#define RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET UNITYSDK_OFFSET(0xD94EC80)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapConnectivityModule_TypeDefinitionIndex = 74559;

	class MapConnectivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::IOEPMPAKMOK* _CurNavArea_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ObjectPool; // 0x18
		::UnityEngine::GameObject* _RootGameObject; // 0x20
		::HKGBEHLFIND* _WaypointRefresher_k__BackingField; // 0x28
		::FFCGHKGDAJF* _CurWeightedGraph_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_ROOTGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetGameObject(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GETGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void ReturnGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_RETURNGAMEOBJECT_OFFSET))(this, a1);
		}

		static ::RPG::Client::NavMap::MapConnectivityModule* get_Instance()
		{
			return ((::RPG::Client::NavMap::MapConnectivityModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_INSTANCE_OFFSET))();
		}

		::HKGBEHLFIND* get_WaypointRefresher()
		{
			return ((::HKGBEHLFIND*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_WAYPOINTREFRESHER_OFFSET))(this);
		}

		::System::Void set_WaypointRefresher(::HKGBEHLFIND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKGBEHLFIND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_WAYPOINTREFRESHER_OFFSET))(this, a1);
		}

		::FFCGHKGDAJF* get_CurWeightedGraph()
		{
			return ((::FFCGHKGDAJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURWEIGHTEDGRAPH_OFFSET))(this);
		}

		::System::Void set_CurWeightedGraph(::FFCGHKGDAJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURWEIGHTEDGRAPH_OFFSET))(this, a1);
		}

		::IOEPMPAKMOK* get_CurNavArea()
		{
			return ((::IOEPMPAKMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_GET_CURNAVAREA_OFFSET))(this);
		}

		::System::Void set_CurNavArea(::IOEPMPAKMOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_SET_CURNAVAREA_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnMazeMapInfoUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONMAZEMAPINFOUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnFiveDimLeaveFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ONFIVEDIMLEAVEFINISH_OFFSET))(this, a1);
		}

		::System::Void _RequestCurMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__REQUESTCURMAPDATA_OFFSET))(this);
		}

		::System::Void _ClearCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__CLEARCURGRAPH_OFFSET))(this);
		}

		::System::Void _UpdateCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__UPDATECURGRAPH_OFFSET))(this);
		}

		::System::Void _SetupCurGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__SETUPCURGRAPH_OFFSET))(this);
		}

		::System::Boolean _IsNeedCreateNavGraph(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISNEEDCREATENAVGRAPH_OFFSET))(this, a1);
		}

		::System::Void TryUpdateCurNavNode(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYUPDATECURNAVNODE_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateCurNavNode(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYUPDATECURNAVNODE_OFFSET))(this, a1);
		}

		::System::Void _TryForceUpdateCurNavNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYFORCEUPDATECURNAVNODE_OFFSET))(this);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeByCartographer(::RPG::Client::NavMap::ICartographer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEBYCARTOGRAPHER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNodeForFiveDim(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODEFORFIVEDIM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single TryGetNearestMappingInfoNodeToTargetDistance(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODETOTARGETDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::NavMap::MappingInfoNode* TryGetNearestMappingInfoNode(::RPG::Client::MapDataKey* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, a1, a2, a3);
		}

		::GFBAEDGGPMM* _TryGetNearestMappingInfoNode(::RPG::Client::NavMap::ICartographer* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
		{
			return ((::GFBAEDGGPMM*(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_OFFSET))(this, a1, a2);
		}

		::GFBAEDGGPMM* _TryGetNearestMappingInfoNode_1(::RPG::Client::MapDataKey* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
		{
			return ((::GFBAEDGGPMM*(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEARESTMAPPINGINFONODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetNextWaypoint(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETNEXTWAYPOINT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::NavMap::ITrackPointInfo* _TryGetNextWaypoint(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__TRYGETNEXTWAYPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single TryGetPlayerToTargetDistance(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE_TRYGETPLAYERTOTARGETDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _IsInSameScene(::RPG::Client::NavMap::ICartographer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__ISINSAMESCENE_OFFSET))(this, a1);
		}

		::System::Boolean _HandleException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Boolean _HandleNavShortestPathException(::NNPMENNGJLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNPMENNGJLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPCONNECTIVITYMODULE__HANDLENAVSHORTESTPATHEXCEPTION_OFFSET))(this, a1);
		}

	};
}
