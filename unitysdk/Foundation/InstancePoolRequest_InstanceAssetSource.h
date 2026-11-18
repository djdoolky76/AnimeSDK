#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestBase; }
namespace Foundation { class AssetRequestCompleteDel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1F3DE4B0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1F3DE270)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F3DE390)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1F3DE290)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HASDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1F3DE2C0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x1F3DE330)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1F3DE2D0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ISHANDLEVALID_OFFSET UNITYSDK_OFFSET(0x1F3DE3F0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1F3DE420)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_HASDEPENDENCYREQUEST_OFFSET UNITYSDK_OFFSET(0x1F3DE510)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_INVOKECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F3DE780)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_LOADIMMEDIATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1F3DE560)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_ONDEPENDENCYCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F3DE8B0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REGISTERCOMPLETECALLBACKIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1F3DE1E0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REGISTERREADY_OFFSET UNITYSDK_OFFSET(0x1F3DE130)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REMOVEDEPENDENCYCOMPLETELISTENER_OFFSET UNITYSDK_OFFSET(0x1F3DE710)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_SET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1F3DE280)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1F3DE2B0)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F3DE920)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_UNREGISTERCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F3DE810)
#define FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DE0B0)

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest_InstanceAssetSource_TypeDefinitionIndex = 7830;

	class InstancePoolRequest_InstanceAssetSource : public ::System::Object
	{
	public:
		::Foundation::AssetRequestBase* _Dependency_k__BackingField; // 0x10
		::System::Action_1<::System::Object*>* sourceReady; // 0x18
		::Foundation::AssetRequestCompleteDel* dependencyCompletedListener; // 0x20
		::Foundation::AssetRequestHandle _Handle_k__BackingField; // 0x28
		::System::Boolean listeningDependencyCompleted; // 0x48

		::System::Void _ctor(::Foundation::AssetRequestBase* dependency, ::Foundation::AssetRequestHandle handle, ::System::Action_1<::System::Object*>* sourceReady)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestBase*, ::Foundation::AssetRequestHandle, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE__CTOR_OFFSET))(this, dependency, handle, sourceReady);
		}

		::System::Void RegisterReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REGISTERREADY_OFFSET))(this);
		}

		::Foundation::AssetRequestBase* get_Dependency()
		{
			return ((::Foundation::AssetRequestBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_DEPENDENCY_OFFSET))(this);
		}

		::System::Void set_Dependency(::Foundation::AssetRequestBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_SET_DEPENDENCY_OFFSET))(this, value);
		}

		::Foundation::AssetRequestHandle get_Handle()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::Foundation::AssetRequestHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_SET_HANDLE_OFFSET))(this, value);
		}

		::System::Boolean get_HasDependency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HASDEPENDENCY_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_HasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_HASERROR_OFFSET))(this);
		}

		::System::Boolean get_IsHandleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ISHANDLEVALID_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ERROR_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_PROGRESS_OFFSET))(this);
		}

		::UnityEngine::Object* get_Asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_GET_ASSET_OFFSET))(this);
		}

		::System::Boolean HasDependencyRequest(::Foundation::AssetRequestBase* dependency)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_HASDEPENDENCYREQUEST_OFFSET))(this, dependency);
		}

		::System::Void LoadImmediateIfNeeded(::System::Boolean invokeCompleteCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_LOADIMMEDIATEIFNEEDED_OFFSET))(this, invokeCompleteCallback);
		}

		::System::Void RegisterCompleteCallbackIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REGISTERCOMPLETECALLBACKIFNEEDED_OFFSET))(this);
		}

		::System::Void UnregisterCompleteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_UNREGISTERCOMPLETECALLBACK_OFFSET))(this);
		}

		::System::Void RemoveDependencyCompleteListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_REMOVEDEPENDENCYCOMPLETELISTENER_OFFSET))(this);
		}

		::System::Void OnDependencyCompleted(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_ONDEPENDENCYCOMPLETED_OFFSET))(this, asset, handle);
		}

		::System::Void InvokeCompleteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_INVOKECOMPLETECALLBACK_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INSTANCEASSETSOURCE_UNLOAD_OFFSET))(this);
		}
	};
}
