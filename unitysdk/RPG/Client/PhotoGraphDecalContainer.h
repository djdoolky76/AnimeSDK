#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDecalRaycast_DecalResultState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class CameraDecalRaycast; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::Client { class PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE54F5F0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CASTDECAL_OFFSET UNITYSDK_OFFSET(0xE54DC20)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CLEARALLDECALS_OFFSET UNITYSDK_OFFSET(0xE54E610)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0xE5517A0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE54F5A0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GETDECALCOUNT_OFFSET UNITYSDK_OFFSET(0xE54F510)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE551050)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALWIDTH_OFFSET UNITYSDK_OFFSET(0xE550F80)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET UNITYSDK_OFFSET(0xE5511F0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHTESTVARIANCE_OFFSET UNITYSDK_OFFSET(0xE5512C0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHVARIANCE_OFFSET UNITYSDK_OFFSET(0xE551120)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0xE550EC0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_INITPARAM_OFFSET UNITYSDK_OFFSET(0xE5514F0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE54FDA0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE54F8B0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERDECALCOUNTCHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xE54F4C0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERPREVIEWSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xE54F470)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETDECALTEXT_OFFSET UNITYSDK_OFFSET(0xE54ECA0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETENABLE_OFFSET UNITYSDK_OFFSET(0xE54DBD0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE5510B0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALWIDTH_OFFSET UNITYSDK_OFFSET(0xE550FE0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET UNITYSDK_OFFSET(0xE551250)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHTESTVARIANCE_OFFSET UNITYSDK_OFFSET(0xE551320)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHVARIANCE_OFFSET UNITYSDK_OFFSET(0xE551180)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0xE550F20)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SHOWPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xE54F080)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE54F560)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_UNDOLASTDECAL_OFFSET UNITYSDK_OFFSET(0xE54E9C0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE5502D0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CLEARDECALS_OFFSET UNITYSDK_OFFSET(0xE54E8D0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CREATEDECAL_OFFSET UNITYSDK_OFFSET(0xE54F140)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEALLDECALS_OFFSET UNITYSDK_OFFSET(0xE5505E0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEASSETS_OFFSET UNITYSDK_OFFSET(0xE54FC20)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEDECALLIST_OFFSET UNITYSDK_OFFSET(0xE54FB10)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xE54F980)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__GETTEXTUREFROMPATH_OFFSET UNITYSDK_OFFSET(0xE54ED10)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INIT_OFFSET UNITYSDK_OFFSET(0xE54F640)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INVOKEDECALCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0xE550670)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__LOADDECALSFROMCACHE_OFFSET UNITYSDK_OFFSET(0xE550030)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ONDECALPUZZLECLEAR_OFFSET UNITYSDK_OFFSET(0xE551380)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVEDECALWITHANIFADEOUT_OFFSET UNITYSDK_OFFSET(0xE54DD70)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE54FCE0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTCLEARDECAL_OFFSET UNITYSDK_OFFSET(0xE54E6C0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTDECALCAST_OFFSET UNITYSDK_OFFSET(0xE550710)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTUNDODECAL_OFFSET UNITYSDK_OFFSET(0xE54EA90)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__RESETDECALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xE54E560)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SAVEDECALSTOCACHE_OFFSET UNITYSDK_OFFSET(0xE54F9F0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SETDECALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xE54F370)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SHOTDECAL_OFFSET UNITYSDK_OFFSET(0xE54DE00)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATECASTINFO_OFFSET UNITYSDK_OFFSET(0xE54FF30)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEDECALMOVEDESTROY_OFFSET UNITYSDK_OFFSET(0xE550DF0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECALTEX_OFFSET UNITYSDK_OFFSET(0xE54EEE0)
#define RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECAL_OFFSET UNITYSDK_OFFSET(0xE550920)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphDecalContainer_TypeDefinitionIndex = 71398;

	class PhotoGraphDecalContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DecalScale; // 0x18
		::System::Single FadeInAnimeSpeed; // 0x1C
		::System::Single FadeOutAnimeSpeed; // 0x20
		::System::Single PreviewDecalAlpha; // 0x24
		::System::Single PreviewDecalCD; // 0x28
		::System::Int32 MaxDecalCount; // 0x2C
		::System::Boolean _IsUpdating; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* _CurSelectedDecalTex; // 0x38
		::System::UInt32 _CurSelectedDecalID; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::CameraDecalRaycast* _CastModule; // 0x48
		::UnityEngine::GameObject* _DecalAssetRef; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* _DecalList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* _DecalTexsDict; // 0x60
		::RPG::Client::FreeDecal* _PreviewDecal; // 0x68
		::System::Action_1<::System::Boolean>* _PreviewStateChangeHandler; // 0x70
		::System::Action_1<::System::Int32>* _DecalCountChangeHandler; // 0x78
		// static const ::System::Object _DefaultRenderQueueIndex; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETENABLE_OFFSET))(this, a1);
		}

		::RPG::Client::CameraDecalRaycast_DecalResultState CastDecal()
		{
			return ((::RPG::Client::CameraDecalRaycast_DecalResultState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CASTDECAL_OFFSET))(this);
		}

		::System::Void ClearAllDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_CLEARALLDECALS_OFFSET))(this);
		}

		::System::Void UndoLastDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_UNDOLASTDECAL_OFFSET))(this);
		}

		::System::Void SetDecalText(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SETDECALTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPreviewDecal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SHOWPREVIEWDECAL_OFFSET))(this, a1);
		}

		::System::Void RegisterPreviewStateHandler(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERPREVIEWSTATEHANDLER_OFFSET))(this, a1);
		}

		::System::Void RegisterDecalCountChangeHandler(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_REGISTERDECALCOUNTCHANGEHANDLER_OFFSET))(this, a1);
		}

		::System::Int32 GetDecalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GETDECALCOUNT_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_DESPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INIT_OFFSET))(this);
		}

		::System::Boolean _SaveDecalsToCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SAVEDECALSTOCACHE_OFFSET))(this);
		}

		::System::Void _LoadDecalsFromCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__LOADDECALSFROMCACHE_OFFSET))(this);
		}

		::System::Void _ResetDecalRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__RESETDECALRENDERQUEUE_OFFSET))(this);
		}

		::System::Void _DisposeAllDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEALLDECALS_OFFSET))(this);
		}

		::System::Void _DisposeDecalList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEDECALLIST_OFFSET))(this);
		}

		::System::Void _DisposePreviewDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEPREVIEWDECAL_OFFSET))(this);
		}

		::System::Void _DisposeAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__DISPOSEASSETS_OFFSET))(this);
		}

		::System::Void _ShotDecal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SHOTDECAL_OFFSET))(this, a1);
		}

		::RPG::Client::FreeDecal* _CreateDecal(::System::Single a1)
		{
			return ((::RPG::Client::FreeDecal*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CREATEDECAL_OFFSET))(this, a1);
		}

		::System::Void _SetDecalRenderQueue(::RPG::Client::FreeDecal* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__SETDECALRENDERQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearDecals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__CLEARDECALS_OFFSET))(this);
		}

		::System::Void _RemoveDecalWithAniFadeOut(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVEDECALWITHANIFADEOUT_OFFSET))(this, a1);
		}

		::System::Void _UpdatePreviewDecalTex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECALTEX_OFFSET))(this);
		}

		::System::Void _UpdateCastInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATECASTINFO_OFFSET))(this);
		}

		::System::Void _UpdatePreviewDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEPREVIEWDECAL_OFFSET))(this);
		}

		::System::Void _UpdateDecalMoveDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__UPDATEDECALMOVEDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture* _GetTextureFromPath(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__GETTEXTUREFROMPATH_OFFSET))(this, a1);
		}

		::System::Void _InvokeDecalCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__INVOKEDECALCOUNTCHANGE_OFFSET))(this);
		}

		::System::Single get_MaxRaycastLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXRAYCASTLENGTH_OFFSET))(this);
		}

		::System::Void set_MaxRaycastLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXRAYCASTLENGTH_OFFSET))(this, a1);
		}

		::System::Single get_DecalWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALWIDTH_OFFSET))(this);
		}

		::System::Void set_DecalWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_DecalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DECALHEIGHT_OFFSET))(this);
		}

		::System::Void set_DecalHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DECALHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_MaxDepthVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHVARIANCE_OFFSET))(this);
		}

		::System::Void set_MaxDepthVariance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHVARIANCE_OFFSET))(this, a1);
		}

		::System::Single get_DepthBufferSampleRadiusRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET))(this);
		}

		::System::Void set_DepthBufferSampleRadiusRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_DEPTHBUFFERSAMPLERADIUSRATIO_OFFSET))(this, a1);
		}

		::System::Single get_MaxDepthTestVariance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_GET_MAXDEPTHTESTVARIANCE_OFFSET))(this);
		}

		::System::Void set_MaxDepthTestVariance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_SET_MAXDEPTHTESTVARIANCE_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnDecalPuzzleClear(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__ONDECALPUZZLECLEAR_OFFSET))(this, a1);
		}

		::System::Void _ReportDecalCast(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTDECALCAST_OFFSET))(this, a1);
		}

		::System::Void _ReportUndoDecal(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTUNDODECAL_OFFSET))(this, a1);
		}

		::System::Void _ReportClearDecal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER__REPORTCLEARDECAL_OFFSET))(this);
		}

		::System::Void InitParam(::RPG::Client::PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphDecalContainer_PhotoGraphDecalContainerInitParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHDECALCONTAINER_INITPARAM_OFFSET))(this, a1);
		}

	};
}
