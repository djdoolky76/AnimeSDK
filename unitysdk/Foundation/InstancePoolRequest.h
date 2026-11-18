#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestBase.h"
#include "unitysdk/Foundation/InstancePoolRequest_DependencyState.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/InstanceCreateRequestHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace Foundation { class InstanceCreateRequest; }
namespace Foundation { class InstancePoolRequest_InstanceAssetSource; }
namespace Foundation { class InstanceStore; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCEPOOLREQUEST_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E09F290)
#define FOUNDATION_INSTANCEPOOLREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1E09E6F0)
#define FOUNDATION_INSTANCEPOOLREQUEST_CANCELPENDINGREQUESTS_OFFSET UNITYSDK_OFFSET(0x1E09E390)
#define FOUNDATION_INSTANCEPOOLREQUEST_CHECKDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1E09DDE0)
#define FOUNDATION_INSTANCEPOOLREQUEST_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E0976A0)
#define FOUNDATION_INSTANCEPOOLREQUEST_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E09F130)
#define FOUNDATION_INSTANCEPOOLREQUEST_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E09F430)
#define FOUNDATION_INSTANCEPOOLREQUEST_CLEARSTOREDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E09E640)
#define FOUNDATION_INSTANCEPOOLREQUEST_COMPLETECREATEREQUEST_OFFSET UNITYSDK_OFFSET(0x1E09F5F0)
#define FOUNDATION_INSTANCEPOOLREQUEST_CONTINUEWAITINGDEPENDENCYREQUESTS_OFFSET UNITYSDK_OFFSET(0x1E09FAA0)
#define FOUNDATION_INSTANCEPOOLREQUEST_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E09FE20)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E09EA80)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1E09E9E0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1E097BE0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E09E750)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETPENDINGREQUESTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1E09F180)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1E09F4E0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GET_ISPROXYHANDLEVALID_OFFSET UNITYSDK_OFFSET(0x1E08CB70)
#define FOUNDATION_INSTANCEPOOLREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1E09F0D0)
#define FOUNDATION_INSTANCEPOOLREQUEST_HASDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1E08CBE0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INIT_OFFSET UNITYSDK_OFFSET(0x1E08DA60)
#define FOUNDATION_INSTANCEPOOLREQUEST_ISREQUESTPENDING_OFFSET UNITYSDK_OFFSET(0x1E09F560)
#define FOUNDATION_INSTANCEPOOLREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E09E260)
#define FOUNDATION_INSTANCEPOOLREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1E08DC30)
#define FOUNDATION_INSTANCEPOOLREQUEST_MARKSUCCEEDED_OFFSET UNITYSDK_OFFSET(0x1E09FFA0)
#define FOUNDATION_INSTANCEPOOLREQUEST_ONINSTANTIATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E09FCB0)
#define FOUNDATION_INSTANCEPOOLREQUEST_ONSOURCEASSETREADY_OFFSET UNITYSDK_OFFSET(0x1E09FA30)
#define FOUNDATION_INSTANCEPOOLREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1E096A40)
#define FOUNDATION_INSTANCEPOOLREQUEST_SETDEPENDENCYFAILED_OFFSET UNITYSDK_OFFSET(0x1E09E1B0)
#define FOUNDATION_INSTANCEPOOLREQUEST_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E08D250)
#define FOUNDATION_INSTANCEPOOLREQUEST_TRYADVANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1E09ED70)
#define FOUNDATION_INSTANCEPOOLREQUEST_TRYPOPPOOLEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E09E950)
#define FOUNDATION_INSTANCEPOOLREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1E096990)
#define FOUNDATION_INSTANCEPOOLREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E097B30)
#define FOUNDATION_INSTANCEPOOLREQUEST_WAITFORREQUESTCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1E0A0040)
#define FOUNDATION_INSTANCEPOOLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A0290)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E0A02A0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1E0A0330)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E0A0340)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E0A03D0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E0A0460)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E0A0610)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1E0A05D0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0A0750)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E0A0500)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0A07E0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1E0A04F0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E0A0870)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1E0A0910)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E0A0920)

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest_TypeDefinitionIndex = 7828;

	class InstancePoolRequest : public ::Foundation::AssetRequestBase
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::InstanceCreateRequest*>* pendingRequests; // 0x78
		::Foundation::InstanceStore* instanceStore; // 0x80
		::Foundation::InstancePoolRequest_InstanceAssetSource* sourceAsset; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProxyHandleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GET_ISPROXYHANDLEVALID_OFFSET))(this);
		}

		::System::Boolean HasDependency(::Foundation::AssetRequestBase* dependency)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_HASDEPENDENCY_OFFSET))(this, dependency);
		}

		::System::Void Init(::Foundation::AssetRequestBase* dependency, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestBase*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INIT_OFFSET))(this, dependency, handle);
		}

		::System::Boolean SetLoadPriority(::System::Int32 priority)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_SETLOADPRIORITY_OFFSET))(this, priority);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Boolean GetInstanceAsync_1(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstanceCreateRequestHandle& createHandle, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstanceCreateRequestHandle&, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_1_OFFSET))(this, completed, createHandle, param);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 CheckUsedInstances(::System::Boolean deepCheck)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CHECKUSEDINSTANCES_OFFSET))(this, deepCheck);
		}

		::System::Void AddPoolInstance(::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Boolean TryAdvanceRequest(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_TRYADVANCEREQUEST_OFFSET))(this, request, result);
		}

		::System::Void OnSourceAssetReady(::Foundation::InstancePoolRequest_InstanceAssetSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::InstancePoolRequest_InstanceAssetSource*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_ONSOURCEASSETREADY_OFFSET))(this, source);
		}

		::System::Void ContinueWaitingDependencyRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CONTINUEWAITINGDEPENDENCYREQUESTS_OFFSET))(this);
		}

		::System::Void OnInstantiateCompleted(::Foundation::InstanceCreateRequest* request, ::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::InstanceCreateRequest*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_ONINSTANTIATECOMPLETED_OFFSET))(this, request, operation);
		}

		::UnityEngine::Object* CompleteCreateRequest(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* result, ::System::Boolean invokeCompleted)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_COMPLETECREATEREQUEST_OFFSET))(this, request, result, invokeCompleted);
		}

		::System::Void CancelPendingRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CANCELPENDINGREQUESTS_OFFSET))(this);
		}

		::Foundation::InstancePoolRequest_DependencyState CheckDependency(::UnityEngine::Object*& source)
		{
			return ((::Foundation::InstancePoolRequest_DependencyState(*)(::PVOID, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CHECKDEPENDENCY_OFFSET))(this, source);
		}

		::System::Void MarkSucceeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_MARKSUCCEEDED_OFFSET))(this);
		}

		::System::Void SetDependencyFailed(::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_SETDEPENDENCYFAILED_OFFSET))(this, error);
		}

		::System::Boolean TryPopPooledInstance(::Foundation::InstantiationParameters param, ::UnityEngine::Object*& instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::InstantiationParameters, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_TRYPOPPOOLEDINSTANCE_OFFSET))(this, param, instance);
		}

		::System::Void ClearStoredInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CLEARSTOREDINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPendingRequestsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETPENDINGREQUESTSCOUNT_OFFSET))(this);
		}

		::System::Boolean IsRequestPending(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_ISREQUESTPENDING_OFFSET))(this, request);
		}

		::UnityEngine::Object* WaitForRequestCompletion(::Foundation::InstanceCreateRequestHandle createHandle)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstanceCreateRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_WAITFORREQUESTCOMPLETION_OFFSET))(this, createHandle);
		}

		static ::System::Void DestroyInstance(::UnityEngine::Object* instance)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_DESTROYINSTANCE_OFFSET))(instance);
		}

		::System::Void __base_AddPoolInstance(::UnityEngine::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_ADDPOOLINSTANCE_OFFSET))(this, P0);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Int32 __base_CheckUsedInstances(::System::Boolean P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CHECKUSEDINSTANCES_OFFSET))(this, P0);
		}

		::System::Void __base_ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Void __base_ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::UnityEngine::Object* __base_GetInstance(::Foundation::InstantiationParameters P0)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCE_OFFSET))(this, P0);
		}

		::System::Boolean __base_GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstantiationParameters P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GetInstanceAsync_1(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstanceCreateRequestHandle& P1, ::Foundation::InstantiationParameters P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstanceCreateRequestHandle&, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_1_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 __base_GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 __base_GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Boolean __base_SetLoadPriority(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_SETLOADPRIORITY_OFFSET))(this, P0);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
