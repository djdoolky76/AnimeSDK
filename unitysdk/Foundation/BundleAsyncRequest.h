#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleRequest.h"

namespace UnityEngine { class AssetBundleCreateRequest; }

#define FOUNDATION_BUNDLEASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB03940)
#define FOUNDATION_BUNDLEASYNCREQUEST_CLEANUPREQUESTOBJ_OFFSET UNITYSDK_OFFSET(0x1DB03130)
#define FOUNDATION_BUNDLEASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1DB02D20)
#define FOUNDATION_BUNDLEASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1DB03580)
#define FOUNDATION_BUNDLEASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1DB03290)
#define FOUNDATION_BUNDLEASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB038B0)
#define FOUNDATION_BUNDLEASYNCREQUEST_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DB031F0)
#define FOUNDATION_BUNDLEASYNCREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1DB034D0)
#define FOUNDATION_BUNDLEASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DB02D80)
#define FOUNDATION_BUNDLEASYNCREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB039C0)
#define FOUNDATION_BUNDLEASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB03990)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB039D0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1DB039E0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1DB03A00)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1DB039F0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB03A90)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_SETLOADPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DB03AA0)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1DB03B40)
#define FOUNDATION_BUNDLEASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DB03B50)

namespace Foundation
{
	inline static constexpr unsigned int BundleAsyncRequest_TypeDefinitionIndex = 8657;

	class BundleAsyncRequest : public ::Foundation::BundleRequest
	{
	public:
		static ::System::Boolean* StaticGet_EnableCleanupRequest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BundleAsyncRequest_TypeDefinitionIndex)->GetStaticField(0x3690);
		}
		::UnityEngine::AssetBundleCreateRequest* _request; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST__CCTOR_OFFSET))();
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Boolean SetLoadPriority(::System::Int32 priority)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_SETLOADPRIORITY_OFFSET))(this, priority);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void CleanupRequestObj()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_CLEANUPREQUESTOBJ_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Boolean __base_SetLoadPriority(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_SETLOADPRIORITY_OFFSET))(this, P0);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEASYNCREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
