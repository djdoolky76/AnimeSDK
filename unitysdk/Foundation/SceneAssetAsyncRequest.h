#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SceneAssetRequest.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace Foundation { class BundleRequest; }
namespace System { class String; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AsyncOperation; }

#define FOUNDATION_SCENEASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1D744850)
#define FOUNDATION_SCENEASSETASYNCREQUEST_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1D744EF0)
#define FOUNDATION_SCENEASSETASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1D7452D0)
#define FOUNDATION_SCENEASSETASYNCREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x1D744AC0)
#define FOUNDATION_SCENEASSETASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D7456D0)
#define FOUNDATION_SCENEASSETASYNCREQUEST_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D7450A0)
#define FOUNDATION_SCENEASSETASYNCREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D745680)
#define FOUNDATION_SCENEASSETASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D744BF0)
#define FOUNDATION_SCENEASSETASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D744770)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1D745710)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1D745720)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D745730)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D7457C0)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D745860)
#define FOUNDATION_SCENEASSETASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D745870)

namespace Foundation
{
	inline static constexpr unsigned int SceneAssetAsyncRequest_TypeDefinitionIndex = 8663;

	class SceneAssetAsyncRequest : public ::Foundation::SceneAssetRequest
	{
	public:
		::UnityEngine::AssetBundleCreateRequest* _bundleRequest; // 0xB0
		::UnityEngine::AsyncOperation* _request; // 0xB8

		::System::Void _ctor(::Foundation::AssetPath path, ::System::String* sceneName, ::System::Boolean addictive)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST__CTOR_OFFSET))(this, path, sceneName, addictive);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Boolean OnError(::Foundation::BundleRequest* bundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_ONERROR_OFFSET))(this, bundle);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void LoadSceneAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_LOADSCENEASYNC_OFFSET))(this);
		}

		::System::Boolean SetLoadPriority(::System::Int32 priority)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_SETLOADPRIORITY_OFFSET))(this, priority);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Boolean __base_SetLoadPriority(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_SETLOADPRIORITY_OFFSET))(this, P0);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SCENEASSETASYNCREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
