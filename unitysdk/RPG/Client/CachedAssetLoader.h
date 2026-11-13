#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetLoadPriority.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/RPG/Client/CachedType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
namespace RPG::Client { class CachedAssetLoader_CachedAssetData; }
namespace RPG::Client { class CachedAssetLoader_CachedAssetGroup; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x1BD6B440)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1BD69710)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_3_OFFSET UNITYSDK_OFFSET(0x1BD697A0)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET UNITYSDK_OFFSET(0x1BD6B960)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1BD64A90)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET UNITYSDK_OFFSET(0x1BD6B910)
#define RPG_CLIENT_CACHEDASSETLOADER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD688D0)
#define RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1BD6D260)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1BD6C4A0)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x1BD6C350)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET UNITYSDK_OFFSET(0x1BD6C080)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET UNITYSDK_OFFSET(0x1BD6CDD0)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1BD6CD10)
#define RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x1BD6CCA0)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x1BD6BFC0)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x1BD6C020)
#define RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_1_OFFSET UNITYSDK_OFFSET(0x1BD6C8C0)
#define RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BD6BB80)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET UNITYSDK_OFFSET(0x1BD6CA40)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET UNITYSDK_OFFSET(0x1BD6CE60)
#define RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1BD6D1C0)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET UNITYSDK_OFFSET(0x1BD6A840)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET UNITYSDK_OFFSET(0x1BD647E0)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x1BD6BBE0)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x1BD6BDD0)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x1BD6A220)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1BD68FE0)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_3_OFFSET UNITYSDK_OFFSET(0x1BD69050)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1BD69A00)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_3_OFFSET UNITYSDK_OFFSET(0x1BD69AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_TypeDefinitionIndex = 60708;

	class CachedAssetLoader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>** StaticGet__CachedAssetToAssetNameHash()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B670);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__GetAssetObjectCheckTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B678);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>** StaticGet__AssetNameHashToCachedAsset()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B680);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>** StaticGet__AssetDependencyData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B688);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>** StaticGet__CachedTempAssetDependencies()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B690);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Object*>** StaticGet__CachedTempAssetObjects()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Object*>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B698);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet__CachedAssetGroup()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B6A0);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet__SyncLoadAssetMarker()
		{
			return (::RPG::Client::RPGProfilerMarkerWithStringData**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B6A8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__InferLogicTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x1B6B0);
		}

		static ::System::Int32* StaticGet_LogicTypeCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x61B0);
		}

		static ::System::Single* StaticGet__CapacityRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x61B4);
		}

		static ::System::Single* StaticGet__MaxMemorySizeRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "CachedAssetLoader")->GetStaticField(0x61B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Object* SyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Object* a4, ::RPG::Client::OnAssetOperationDelegate* a5, ::RPG::Client::AssetLoadPriority a6)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::UnityEngine::Object* a4, ::RPG::Client::IAssetOperation* a5, ::System::Object* a6, ::RPG::Client::OnAssetOperationDelegate* a7, ::RPG::Client::AssetLoadPriority a8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::UnityEngine::Object*, ::RPG::Client::IAssetOperation*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Object* SyncLoadAsset_3(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_3_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset_3(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::RPG::Client::AssetLoadPriority a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset_3(::System::String* a1, ::System::Type* a2, ::UnityEngine::Object* a3, ::RPG::Client::IAssetOperation* a4, ::System::Object* a5, ::RPG::Client::OnAssetOperationDelegate* a6, ::RPG::Client::AssetLoadPriority a7)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::UnityEngine::Object*, ::RPG::Client::IAssetOperation*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ReleaseAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET))(a1);
		}

		static ::System::Void CancleAyscLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET))(a1);
		}

		static ::System::Void CancelAsyncLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET))(a1);
		}

		static ::System::Void InitAssetGroupCapacityAndMaxMemorySize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET))();
		}

		static ::System::Single get_CapacityRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET))();
		}

		static ::System::Void set_CapacityRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET))(a1);
		}

		static ::System::Single get_MaxMemorySizeRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET))();
		}

		static ::System::Void set_MaxMemorySizeRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET))(a1);
		}

		static ::System::Boolean ClearCachedAsset(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET))(a1);
		}

		static ::System::Void ClearCachedAssetGroup(::RPG::Client::CachedAssetLogicType a1)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET))(a1);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET))();
		}

		static ::RPG::Client::CachedAssetLogicType InferLogicType_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetGroup* GetCachedAssetGroup(::RPG::Client::CachedAssetLogicType a1)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetGroup*(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET))(a1);
		}

		static ::System::UInt64 GetAssetNameHash(::UnityEngine::Object* a1)
		{
			return ((::System::UInt64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET))(a1);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetData* GetAssetData(::System::UInt64 a1)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET))(a1);
		}

		static ::System::Void InternalReleaseAsset(::RPG::Client::CachedAssetLoader_CachedAssetGroup* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLoader_CachedAssetGroup*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET))(a1, a2);
		}

		static ::RPG::Client::CachedAssetLogicType InternalInferLogicType(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void OnAfterReloadConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET))(a1);
		}

		static ::System::Void CheckAssetObject(::UnityEngine::Object* a1, ::System::String* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* SyncLoadAssetImpl(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAssetImpl(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::RPG::Client::AssetLoadPriority a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReleaseAssetImpl(::UnityEngine::Object* a1, ::RPG::Client::CachedType a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void CancelAsyncLoadImpl(::RPG::Client::IAssetOperation* a1, ::RPG::Client::CachedType a2)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET))(a1, a2);
		}

	};
}
