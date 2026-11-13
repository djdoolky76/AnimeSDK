#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"
class BOCEFFDMFPM;
class NFCPIKFFCNA;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD20EB0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET UNITYSDK_OFFSET(0x1BD228E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET UNITYSDK_OFFSET(0x1BD20E60)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD21000)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1EC20)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET UNITYSDK_OFFSET(0x1BD20A50)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BD21050)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD210D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1BD22470)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET UNITYSDK_OFFSET(0x1BD21450)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1BD207D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x1BD20910)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x1BD20E10)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1BD20870)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1BD207E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1BD20890)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1BD208F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1BD20840)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1BD208D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD20800)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1BD20860)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1BD208B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET UNITYSDK_OFFSET(0x1BD20A00)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x1BD209D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1BD209B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x1BD20920)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1BD20970)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1BD20980)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET UNITYSDK_OFFSET(0x1BD20DC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1BD209C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1BD209A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET UNITYSDK_OFFSET(0x1BD229E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD217E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET UNITYSDK_OFFSET(0x1BD21700)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BD00A50)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BD235A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD20F70)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x1BD22970)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1BD21240)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD22420)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1BD20880)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1BD207F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1BD208A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1BD20900)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1BD20850)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1BD208E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1BD208C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD235F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x1BD22120)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 42540;

	class AssetLoader : public ::System::Object
	{
	public:
		::UnityEngine::AssetBundleRequest* AssetRequest; // 0x10
		::BOCEFFDMFPM* BundleLoader; // 0x18
		::RPG::PoolHashSet_1<::RPG::Client::AssetSystem::AssetObjectOptProxy*>* _ProxyList; // 0x20
		::System::String* _AssetName_k__BackingField; // 0x28
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnRequestHandleHandler; // 0x30
		::System::Byte _padding0[0x68];
		::System::Object* _UserParam; // 0xA0
		::UnityEngine::Object* AssetObject; // 0xA8
		::System::Type* _AssetType_k__BackingField; // 0xB0
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0xB8
		::RPG::Client::AssetState _AssetState; // 0xC0
		::System::Boolean _IsInAsyncLoadingDispose; // 0xC4
		::System::Byte _padding1[0x3];
		::System::UInt64 AssetNameHash; // 0xC8
		::RPG::Client::OpType _OpType_k__BackingField; // 0xD0
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xD4
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xD8
		::System::Int32 _RefCount; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET))(this, a1);
		}

		::System::String* get_LoaderType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_NameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET))(this, a1);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsNotLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET))(this);
		}

		::System::Boolean IsAsyncLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET))(this);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET))(this);
		}

		::System::Boolean IsNoRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET))(this);
		}

		::System::Int32 GetRefNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET))(this);
		}

		::System::Void AddRef(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET))(this, a1);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void ClearLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchLoadedEvent(::NFCPIKFFCNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFCPIKFFCNA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET))(this);
		}

		::System::String* GetAssetLongName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET))(this);
		}

		::System::Boolean OnBundleAsyncLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET))(this);
		}

		::System::Void OnAssetRequestHandle(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET))(this, a1);
		}

		::System::Void _OnAssetRequestHandleImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void SetInDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET))(this);
		}

		::System::Void AddProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET))(this, a1);
		}

		::System::Void RemoveProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET))(this, a1);
		}

		::System::Void MergeWith(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET))(this, a1);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET))(this);
		}

	};
}
