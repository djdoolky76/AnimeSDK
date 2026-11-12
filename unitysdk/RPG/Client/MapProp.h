#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BPIEHCCAMIA;
class EOABGMGNKGA;
class LJLDEDPLHIL;
class NNDAJDLAHNC;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageObjectCapture; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAPPROP_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0xDFAD860)
#define RPG_CLIENT_MAPPROP_BEGINFADEOUT_OFFSET UNITYSDK_OFFSET(0xDFAE0A0)
#define RPG_CLIENT_MAPPROP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDFAB150)
#define RPG_CLIENT_MAPPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFAB120)
#define RPG_CLIENT_MAPPROP_DEFERLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xDFACB50)
#define RPG_CLIENT_MAPPROP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFAC060)
#define RPG_CLIENT_MAPPROP_GET_ANCHORGROUPID_OFFSET UNITYSDK_OFFSET(0xDFAADD0)
#define RPG_CLIENT_MAPPROP_GET_ANCHORINSTANCEID_OFFSET UNITYSDK_OFFSET(0xDFAAE80)
#define RPG_CLIENT_MAPPROP_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xDFAACF0)
#define RPG_CLIENT_MAPPROP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xDFAAC40)
#define RPG_CLIENT_MAPPROP_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xDFAAB30)
#define RPG_CLIENT_MAPPROP_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xDFAAB50)
#define RPG_CLIENT_MAPPROP_GET_ISCREATEONINITIAL_OFFSET UNITYSDK_OFFSET(0xDFAAB90)
#define RPG_CLIENT_MAPPROP_GET_ISDEFERLOAD_OFFSET UNITYSDK_OFFSET(0xDFAB050)
#define RPG_CLIENT_MAPPROP_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xDFAAD60)
#define RPG_CLIENT_MAPPROP_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xDFAAD50)
#define RPG_CLIENT_MAPPROP_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0xDFAAD70)
#define RPG_CLIENT_MAPPROP_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xDFAADA0)
#define RPG_CLIENT_MAPPROP_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xDFAAB20)
#define RPG_CLIENT_MAPPROP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xDFAAFF0)
#define RPG_CLIENT_MAPPROP_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDFAAC50)
#define RPG_CLIENT_MAPPROP_GET_PROPENTITY_OFFSET UNITYSDK_OFFSET(0xDFAACE0)
#define RPG_CLIENT_MAPPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xDFAADB0)
#define RPG_CLIENT_MAPPROP_GET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xDFAB030)
#define RPG_CLIENT_MAPPROP_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xDFAAC80)
#define RPG_CLIENT_MAPPROP_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xDFAACB0)
#define RPG_CLIENT_MAPPROP_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xDFAAB70)
#define RPG_CLIENT_MAPPROP_GET_STAGEOBJECTCAPTURE_OFFSET UNITYSDK_OFFSET(0xDFAAF30)
#define RPG_CLIENT_MAPPROP_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDFAAD80)
#define RPG_CLIENT_MAPPROP_ONTARGETGOLOADED_OFFSET UNITYSDK_OFFSET(0xDFACBE0)
#define RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACKWITHOUTPARAM_OFFSET UNITYSDK_OFFSET(0xDFACA20)
#define RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xDFAC8F0)
#define RPG_CLIENT_MAPPROP_SET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xDFAB040)
#define RPG_CLIENT_MAPPROP_SET_STATE_OFFSET UNITYSDK_OFFSET(0xDFAAD90)
#define RPG_CLIENT_MAPPROP_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDFADF90)
#define RPG_CLIENT_MAPPROP_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0xDFAD8D0)
#define RPG_CLIENT_MAPPROP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDFAE3F0)
#define RPG_CLIENT_MAPPROP_TRYFORCELOADCAPTUREDOBJECT_OFFSET UNITYSDK_OFFSET(0xDFAC6D0)
#define RPG_CLIENT_MAPPROP__AFTERLOADEDPROCESS_OFFSET UNITYSDK_OFFSET(0xDFAD590)
#define RPG_CLIENT_MAPPROP__BUILDPROPFRIENDLYNAMEBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xDFACF00)
#define RPG_CLIENT_MAPPROP__BUILDPROPNAMEBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xDFACE80)
#define RPG_CLIENT_MAPPROP__CALCPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0xDFACF40)
#define RPG_CLIENT_MAPPROP__FAILLOAD_OFFSET UNITYSDK_OFFSET(0xDFABB20)
#define RPG_CLIENT_MAPPROP__GETCAPTUREINSTANCE_OFFSET UNITYSDK_OFFSET(0xDFAB250)
#define RPG_CLIENT_MAPPROP__GETENTITYCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xDFAE500)
#define RPG_CLIENT_MAPPROP__GETSTAGEOBJECTCAPTUREHANDLER_OFFSET UNITYSDK_OFFSET(0xDFAD210)
#define RPG_CLIENT_MAPPROP__HASCAPTUREDOBJECTCONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xDFAB180)
#define RPG_CLIENT_MAPPROP__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0xDFAE490)
#define RPG_CLIENT_MAPPROP__RELEASECAPTUREREGISTRATION_OFFSET UNITYSDK_OFFSET(0xDFAB7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapProp_TypeDefinitionIndex = 62263;

	class MapProp : public ::System::Object
	{
	public:
		::BPIEHCCAMIA* _DelayDispose; // 0x10
		::RPG::Client::OpenWorld::StreamingItemData* _CaptureItemData; // 0x18
		::LJLDEDPLHIL* _Owner; // 0x20
		::RPG::GameCore::GameEntity* _PropEntity; // 0x28
		::System::Action_1<::RPG::Client::MapProp*>* _DeferLoadCallback; // 0x30
		::RPG::Client::MapPropDef* _mapPropDef; // 0x38
		::UnityEngine::GameObject* _TargetGO; // 0x40
		::System::Action* _DeferLoadCallback_withoutParam; // 0x48
		::RPG::Client::MapObjectState _State_k__BackingField; // 0x50
		::UnityEngine::Quaternion _RotationFromConfig_k__BackingField; // 0x54
		::System::Boolean _RequiresOwner; // 0x64
		::System::Boolean _OwnsCaptureLock; // 0x65
		::System::Boolean _CaptureCallbackRegistered; // 0x66
		::System::Void _ctor(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::MapPropDef* a1, ::LJLDEDPLHIL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::LJLDEDPLHIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_MAPPROPDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_SERVERENTITYID_OFFSET))(this);
		}

		::System::Boolean get_IsCreateOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISCREATEONINITIAL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ENTITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_SCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PropEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_PROPENTITY_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISTOBEREMOVED_OFFSET))(this);
		}

		::RPG::Client::MapObjectState get_State()
		{
			return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MapObjectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::MapEntityDef* get_MapEntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_MAPENTITYDEF_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ANCHORGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ANCHORINSTANCEID_OFFSET))(this);
		}

		::RPG::GameCore::StageObjectCapture* get_StageObjectCapture()
		{
			return ((::RPG::GameCore::StageObjectCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_STAGEOBJECTCAPTURE_OFFSET))(this);
		}

		::LJLDEDPLHIL* get_Owner()
		{
			return ((::LJLDEDPLHIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_OWNER_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_RotationFromConfig()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ROTATIONFROMCONFIG_OFFSET))(this);
		}

		::System::Void set_RotationFromConfig(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SET_ROTATIONFROMCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDeferLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISDEFERLOAD_OFFSET))(this);
		}

		::System::Boolean _HasCapturedObjectConfigEntityPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__HASCAPTUREDOBJECTCONFIGENTITYPATH_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetCaptureInstance(::System::Boolean a1, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__GETCAPTUREINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseCaptureRegistration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__RELEASECAPTUREREGISTRATION_OFFSET))(this);
		}

		::System::Void _FailLoad(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__FAILLOAD_OFFSET))(this, a1);
		}

		::System::Boolean TryForceLoadCapturedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_TRYFORCELOADCAPTUREDOBJECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean SetDeferLoadCallback(::System::Action_1<::RPG::Client::MapProp*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::RPG::Client::MapProp*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetDeferLoadCallbackWithoutParam(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACKWITHOUTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void DeferLoadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_DEFERLOADCALLBACK_OFFSET))(this);
		}

		::System::Void OnTargetGOLoaded(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_ONTARGETGOLOADED_OFFSET))(this, a1, a2);
		}

		static ::System::String* _BuildPropNameByMapPropDef(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::String*(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__BUILDPROPNAMEBYMAPPROPDEF_OFFSET))(a1);
		}

		static ::System::String* _BuildPropFriendlyNameByMapPropDef(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::String*(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__BUILDPROPFRIENDLYNAMEBYMAPPROPDEF_OFFSET))(a1);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> _CalcPositionAndRotation(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__CALCPOSITIONANDROTATION_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingItemData* _GetStageObjectCaptureHandler()
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__GETSTAGEOBJECTCAPTUREHANDLER_OFFSET))(this);
		}

		::System::Void _AfterLoadedProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__AFTERLOADEDPROCESS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* AsyncLoad()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_ASYNCLOAD_OFFSET))(this);
		}

		::System::Void SyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SYNCLOAD_OFFSET))(this);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void BeginFadeOut(::System::Action_1<::EOABGMGNKGA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EOABGMGNKGA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_BEGINFADEOUT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_TOSTRING_OFFSET))(this);
		}

		::System::Void _OnAsyncLoadFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ONASYNCLOADFINISH_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityClassifyType _GetEntityClassifyType()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__GETENTITYCLASSIFYTYPE_OFFSET))(this);
		}

	};
}
