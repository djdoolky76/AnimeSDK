#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetRequestStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/InstanceCreateRequestHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation { class AssetRequestCompleteDelWithUserData; }
namespace Foundation { class AssetRequestDestroyDel; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET UNITYSDK_OFFSET(0x1F2D1880)
#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2D1580)
#define FOUNDATION_ASSETREQUESTBASE_ADDDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2D2530)
#define FOUNDATION_ASSETREQUESTBASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F2D2F50)
#define FOUNDATION_ASSETREQUESTBASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1F2D1100)
#define FOUNDATION_ASSETREQUESTBASE_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1F2D2F00)
#define FOUNDATION_ASSETREQUESTBASE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1F2D2E80)
#define FOUNDATION_ASSETREQUESTBASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1F2D2FA0)
#define FOUNDATION_ASSETREQUESTBASE_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1F2D1350)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F2D2DA0)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1F2D2CF0)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2D2EC0)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F2D2C90)
#define FOUNDATION_ASSETREQUESTBASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2D2FE0)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1F2D1450)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1F2D1430)
#define FOUNDATION_ASSETREQUESTBASE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F2D2C80)
#define FOUNDATION_ASSETREQUESTBASE_GET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F2D1390)
#define FOUNDATION_ASSETREQUESTBASE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F2D1540)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1F2D1570)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1F2D1090)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1F2D1560)
#define FOUNDATION_ASSETREQUESTBASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1F2D14B0)
#define FOUNDATION_ASSETREQUESTBASE_GET_LOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F2D13B0)
#define FOUNDATION_ASSETREQUESTBASE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1F2D14C0)
#define FOUNDATION_ASSETREQUESTBASE_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2D2A80)
#define FOUNDATION_ASSETREQUESTBASE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1F2D1530)
#define FOUNDATION_ASSETREQUESTBASE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1F2D1470)
#define FOUNDATION_ASSETREQUESTBASE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F2D1490)
#define FOUNDATION_ASSETREQUESTBASE_INVOKECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2CFFF0)
#define FOUNDATION_ASSETREQUESTBASE_INVOKEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2CF780)
#define FOUNDATION_ASSETREQUESTBASE_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x1F2D2BA0)
#define FOUNDATION_ASSETREQUESTBASE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F2D2BF0)
#define FOUNDATION_ASSETREQUESTBASE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F2CFFA0)
#define FOUNDATION_ASSETREQUESTBASE_ONUNUSED_OFFSET UNITYSDK_OFFSET(0x1F2D0F50)
#define FOUNDATION_ASSETREQUESTBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F2D2B00)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEALLCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2D1D50)
#define FOUNDATION_ASSETREQUESTBASE_REMOVECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2D22E0)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F2D2870)
#define FOUNDATION_ASSETREQUESTBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1F2D2C40)
#define FOUNDATION_ASSETREQUESTBASE_RETAIN_OFFSET UNITYSDK_OFFSET(0x1F2D2AA0)
#define FOUNDATION_ASSETREQUESTBASE_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F2D13D0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1F2D1460)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1F2D1440)
#define FOUNDATION_ASSETREQUESTBASE_SET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F2D13A0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F2D1550)
#define FOUNDATION_ASSETREQUESTBASE_SET_LOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F2D13C0)
#define FOUNDATION_ASSETREQUESTBASE_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2D2A90)
#define FOUNDATION_ASSETREQUESTBASE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1F2CFEA0)
#define FOUNDATION_ASSETREQUESTBASE_SET_URL_OFFSET UNITYSDK_OFFSET(0x1F2D1480)
#define FOUNDATION_ASSETREQUESTBASE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F2D14A0)
#define FOUNDATION_ASSETREQUESTBASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F2CF380)
#define FOUNDATION_ASSETREQUESTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F2D10A0)
#define FOUNDATION_ASSETREQUESTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D3020)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestBase_TypeDefinitionIndex = 8338;

	class AssetRequestBase : public ::System::Object
	{
	public:
		::System::String* _Error_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestDestroyDel*>*>* destroyCallbackDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDel*>*>* completeCallbackDict; // 0x20
		::System::Type* _AssetType_k__BackingField; // 0x28
		::UnityEngine::Object* _Asset_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::System::Object*>*>* completeCallbackUserDataDict; // 0x38
		::Foundation::AssetPath _Url_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDelWithUserData*>*>* completeCallbackWithUserDataDict; // 0x50
		::System::Int32 _LoadPriority_k__BackingField; // 0x58
		::System::Int32 _RefCount_k__BackingField; // 0x5C
		::System::Int32 _Version_k__BackingField; // 0x60
		::Foundation::Coroutine::CoroutineHandle destroyCallbackHandle; // 0x64
		::Foundation::AssetRequestStatus statusCode; // 0x68
		::Foundation::Coroutine::CoroutineHandle completeCallbackHandle; // 0x6C
		::System::Boolean _DestroyImmediately_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_UNLOAD_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUnused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ONUNUSED_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_UPDATE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetRequestBase*>* GetDependencies()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetRequestBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETDEPENDENCIES_OFFSET))(this);
		}

		::System::Boolean get_DestroyImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_DESTROYIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_DestroyImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_DESTROYIMMEDIATELY_OFFSET))(this, value);
		}

		::System::Int32 get_LoadPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_LOADPRIORITY_OFFSET))(this);
		}

		::System::Void set_LoadPriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_LOADPRIORITY_OFFSET))(this, value);
		}

		::System::Boolean SetLoadPriority(::System::Int32 priority)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SETLOADPRIORITY_OFFSET))(this, priority);
		}

		::UnityEngine::Object* get_Asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ASSET_OFFSET))(this);
		}

		::System::Void set_Asset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ASSET_OFFSET))(this, value);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ASSETTYPE_OFFSET))(this, value);
		}

		::Foundation::AssetPath get_Url()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::Foundation::AssetPath value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_URL_OFFSET))(this, value);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_VERSION_OFFSET))(this, value);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_PROGRESS_OFFSET))(this);
		}

		::Foundation::AssetRequestStatus get_Status()
		{
			return ((::Foundation::AssetRequestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Foundation::AssetRequestStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestStatus))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_STATUS_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ERROR_OFFSET))(this, value);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void AddCompleteCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void AddCompleteCallbackWithUserData(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDelWithUserData* callback, ::System::Object* inUserData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDelWithUserData*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET))(this, requestHandle, callback, inUserData);
		}

		::System::Void RemoveAllCompleteCallback(::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVEALLCOMPLETECALLBACK_OFFSET))(this, requestHandle);
		}

		::System::Void RemoveCompleteCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVECOMPLETECALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void InvokeCompleteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_INVOKECOMPLETECALLBACK_OFFSET))(this);
		}

		::System::Void AddDestroyCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDDESTROYCALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void RemoveDestroyCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVEDESTROYCALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void InvokeDestroyCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_INVOKEDESTROYCALLBACK_OFFSET))(this);
		}

		::System::Int32 get_RefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_REFCOUNT_OFFSET))(this);
		}

		::System::Void set_RefCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_REFCOUNT_OFFSET))(this, value);
		}

		::System::Void Retain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RETAIN_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsUnused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ISUNUSED_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_CURRENT_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Boolean GetInstanceAsync_1(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstanceCreateRequestHandle& createHandle, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstanceCreateRequestHandle&, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_1_OFFSET))(this, completed, createHandle, param);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 CheckUsedInstances(::System::Boolean deepCheck)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CHECKUSEDINSTANCES_OFFSET))(this, deepCheck);
		}

		::System::Void AddPoolInstance(::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}
	};
}
