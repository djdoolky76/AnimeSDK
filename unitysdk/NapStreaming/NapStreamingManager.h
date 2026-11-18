#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace NapStreaming { class NapStreamingData; }
namespace NapStreaming { class NapStreamingManager_InitAsyncLoadState; }
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER_ADDADDITIONALPOSITION_OFFSET UNITYSDK_OFFSET(0x10605FE0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0x10606630)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x13A35AA0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10605410)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET UNITYSDK_OFFSET(0x13A363D0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_COMPLETEINITASSETASYNC_OFFSET UNITYSDK_OFFSET(0x13A372C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_COMPLETEINITLOADING_OFFSET UNITYSDK_OFFSET(0x13A374A0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x10607EE0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0x10606DA0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETCURRENTINITLOADINGCOUNT_OFFSET UNITYSDK_OFFSET(0x13A371D0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x106053D0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x10605340)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETSTREAMINGLAYERLOADDISTANCE_OFFSET UNITYSDK_OFFSET(0x13A350E0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x106080C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET UNITYSDK_OFFSET(0x10607790)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET UNITYSDK_OFFSET(0x10607640)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_INVOKEADDITIONALPOSITIONLOADDONE_OFFSET UNITYSDK_OFFSET(0x10606270)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13A37AD0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x10607DE0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET UNITYSDK_OFFSET(0x106079B0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13A37BA0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_RECONCILEINITASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x13A36F20)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET UNITYSDK_OFFSET(0x10607450)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVEADDITIONALPOSITION_OFFSET UNITYSDK_OFFSET(0x10606400)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVECOMPLETEDINITASYNCLOADSTATES_OFFSET UNITYSDK_OFFSET(0x13A35EF0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0x10606820)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET UNITYSDK_OFFSET(0x10605E10)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET UNITYSDK_OFFSET(0x10605C40)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x10605380)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x106052F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERLOADDISTANCE_OFFSET UNITYSDK_OFFSET(0x13A35420)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x13A34B90)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x13A35760)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET UNITYSDK_OFFSET(0x13A35DD0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET UNITYSDK_OFFSET(0x10605880)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SUBMITINITASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x13A367F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_TRYCOMPLETEINITLOADING_OFFSET UNITYSDK_OFFSET(0x13A37110)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x10607F60)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x13A37520)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0x13A36050)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13A379F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A38160)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A37F70)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager_TypeDefinitionIndex = 64449;

	class NapStreamingManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>** StaticGet_AdditionalLoadDoneCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35940);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_PosProviders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35948);
		}
		static ::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>** StaticGet_ModifiedLayerLoadDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35950);
		}
		static ::NapStreaming::NapStreamingManager** StaticGet_s_currentInstance()
		{
			return (::NapStreaming::NapStreamingManager**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35958);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>** StaticGet_AdditionalPositions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35960);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ProviderTags()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x35968);
		}
		static ::System::Single* StaticGet_LoadDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB570);
		}
		static ::System::Int32* StaticGet_UnloadCurrentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB574);
		}
		static ::System::Boolean* StaticGet_OpenLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB578);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB579);
		}
		static ::System::Boolean* StaticGet_EnablePVS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB57A);
		}
		static ::System::Boolean* StaticGet_EnablePOI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB57B);
		}
		static ::UnityEngine::Vector3* StaticGet_ForceUpdateGap()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB57C);
		}
		static ::System::Boolean* StaticGet_OpenLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB588);
		}
		static ::System::Boolean* StaticGet_UseLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB589);
		}
		static ::System::Boolean* StaticGet_EnableAsyncInitLoading()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB58A);
		}
		static ::System::Int32* StaticGet_AdditionalGlobalId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB58C);
		}
		static ::System::Int32* StaticGet_UnloadBatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB590);
		}
		static ::System::Single* StaticGet_HLODDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xB594);
		}
		// static const ::System::String* SceneLoadTag; // 0x0
		// static const ::System::Int32 InitTickCount = 0x3C; // 0x0
		// static const ::System::Single AdditionDistanceGap; // 0x0
		::NapStreaming::NapStreamingData* data; // 0x18
		::System::Boolean showAll; // 0x20
		::System::Byte _padding0[0x3];
		::NapStreaming::StreamingLayer selectLayer; // 0x24
		::System::Boolean checkVisible; // 0x28
		::System::Boolean checkPOI; // 0x29
		::System::Boolean forceStop; // 0x2A
		::System::Boolean forceUseLowPrefab; // 0x2B
		::System::Boolean inInitLoading; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*>* startLoadedPaths; // 0x30
		::System::Boolean additionalDirty; // 0x38
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* tickPaths; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*>>* initAsyncBatch; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* initAsyncLoadStates; // 0x50
		::System::Int32 initLoadingGeneration; // 0x58
		::System::Boolean useAsyncInitLoading; // 0x5C
		::System::Byte _padding3[0x3];
		::System::Action* initLoadCallback; // 0x60
		::UnityEngine::Camera* mainCamera; // 0x68
		::UnityEngine::Vector3 providerLastPos; // 0x70
		::System::Single exitProviderGap; // 0x7C
		::System::Boolean isForceLowPrefab; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetLoggingSupport(::System::Boolean b)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET))(b);
		}

		static ::System::Boolean GetLoggingSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET))();
		}

		static ::System::Void SetLoggingCostTime(::System::UInt64 costTime)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET))(costTime);
		}

		static ::System::UInt64 GetLoggingCostTime()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET))(this);
		}

		static ::System::Void SetEnablePVS(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET))(enabled);
		}

		static ::System::Void SetEnablePOI(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET))(enabled);
		}

		static ::System::Int32 AddAdditionalPosition(::UnityEngine::Vector3 position, ::System::Action* loadDoneCallback)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ADDADDITIONALPOSITION_OFFSET))(position, loadDoneCallback);
		}

		static ::System::Void InvokeAdditionalPositionLoadDone(::System::Int32 additionalId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_INVOKEADDITIONALPOSITIONLOADDONE_OFFSET))(additionalId);
		}

		static ::System::Void RemoveAdditionalPosition(::System::Int32 additionalId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVEADDITIONALPOSITION_OFFSET))(additionalId);
		}

		static ::System::Void AddStreamingPosProvider(::System::String* tag, ::NapStreaming::NapStreamingManager_StreamingPosProvider* provider)
		{
			return ((::System::Void(*)(::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET))(tag, provider);
		}

		static ::System::Void RemoveStreamingPosProvider(::System::String* tag, ::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET))(tag, forceUpdate);
		}

		static ::System::Void ForceUpdateStreaming()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET))();
		}

		static ::System::Void RegisterOrRunAfterLoadAction(::System::Action* initLoadCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET))(initLoadCallback);
		}

		static ::System::Boolean get_InStreamingScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET))();
		}

		static ::System::Boolean get_InInitLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET))();
		}

		static ::System::Void LoadInitAsset(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET))(p, callback);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET))(p, callback);
		}

		static ::System::Void DestroyObject(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET))(go);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle h, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET))(h, immediate);
		}

		static ::System::Boolean GetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer)
		{
			return ((::System::Boolean(*)(::NapStreaming::StreamingLayer))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETSTREAMINGLAYERNEEDLOAD_OFFSET))(layer);
		}

		static ::System::Void SetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer, ::System::Boolean needLoad)
		{
			return ((::System::Void(*)(::NapStreaming::StreamingLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET))(layer, needLoad);
		}

		static ::System::Single GetStreamingLayerLoadDistance(::NapStreaming::StreamingLayer layer, ::System::Single defaultDistance)
		{
			return ((::System::Single(*)(::NapStreaming::StreamingLayer, ::System::Single))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETSTREAMINGLAYERLOADDISTANCE_OFFSET))(layer, defaultDistance);
		}

		static ::System::Void SetStreamingLayerLoadDistance(::NapStreaming::StreamingLayer layer, ::System::Single loadDistance)
		{
			return ((::System::Void(*)(::NapStreaming::StreamingLayer, ::System::Single))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERLOADDISTANCE_OFFSET))(layer, loadDistance);
		}

		static ::System::Void SetStreamingObjectsVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET))(isVisible);
		}

		::System::Void ApplyStreamingLayerNeedLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET))(this);
		}

		::System::Void StartStreaming(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET))(this, cb);
		}

		::System::Void CheckIsStreamingDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET))(this);
		}

		::System::Void SubmitInitAssetsAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SUBMITINITASSETSASYNC_OFFSET))(this);
		}

		::System::Int32 GetCurrentInitLoadingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETCURRENTINITLOADINGCOUNT_OFFSET))(this);
		}

		::System::Void ReconcileInitAssetsAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_RECONCILEINITASSETSASYNC_OFFSET))(this);
		}

		::System::Void RemoveCompletedInitAsyncLoadStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVECOMPLETEDINITASYNCLOADSTATES_OFFSET))(this);
		}

		::System::Void CompleteInitAssetAsync(::NapStreaming::NapStreamingManager_InitAsyncLoadState* state, ::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingManager_InitAsyncLoadState*, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_COMPLETEINITASSETASYNC_OFFSET))(this, state, asset, handle);
		}

		::System::Void TryCompleteInitLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_TRYCOMPLETEINITLOADING_OFFSET))(this);
		}

		::System::Void CompleteInitLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_COMPLETEINITLOADING_OFFSET))(this);
		}

		::System::Void UpdateStreamingByMainCamera(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET))(this, forceUpdate);
		}

		::System::Void UpdateStreaming(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET))(this, forceUpdate);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
