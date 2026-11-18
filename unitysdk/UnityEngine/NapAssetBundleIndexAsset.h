#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/NapBundleInfo.h"
#include "unitysdk/UnityEngine/NapIndexAssetRef.h"
#include "unitysdk/UnityEngine/NapIndexBlockRef.h"
#include "unitysdk/UnityEngine/NapIndexBundleRef.h"

#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x20046680)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_CREATE_OFFSET UNITYSDK_OFFSET(0x20046670)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET UNITYSDK_OFFSET(0x20046720)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET UNITYSDK_OFFSET(0x20046730)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET UNITYSDK_OFFSET(0x200466F0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET UNITYSDK_OFFSET(0x200466E0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0x20046690)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x20046710)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x20046700)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_INIT_OFFSET UNITYSDK_OFFSET(0x20046760)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET UNITYSDK_OFFSET(0x20046770)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET UNITYSDK_OFFSET(0x20046740)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET UNITYSDK_OFFSET(0x20046750)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x20046620)

namespace UnityEngine
{
	inline static constexpr unsigned int NapAssetBundleIndexAsset_TypeDefinitionIndex = 7695;

	class NapAssetBundleIndexAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::NapAssetBundleIndexAsset* Create()
		{
			return ((::UnityEngine::NapAssetBundleIndexAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_CREATE_OFFSET))();
		}

		::UnityEngine::NapBundleInfo GetBundleInfo(::System::UInt64 bundleId)
		{
			return ((::UnityEngine::NapBundleInfo(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET))(this, bundleId);
		}

		::System::UInt64 GetBundleIDFromAssetHash(::System::UInt64 assetHash)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET))(this, assetHash);
		}

		::Il2CppArray<::System::UInt64>* GetDirectChildren(::System::UInt64 bundleId)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETDIRECTCHILDREN_OFFSET))(this, bundleId);
		}

		::Il2CppArray<::System::UInt64>* GetChildren(::System::UInt64 bundleId)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET))(this, bundleId);
		}

		::Il2CppArray<::System::UInt64>* GetAllAssetHash()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt64>* GetAllBundleId()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET))(this);
		}

		::System::Void SetNext(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET))(this, asset);
		}

		::System::Void SetResourceFileType(::UnityEngine::NapResourceFileType resourceFileType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapResourceFileType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET))(this, resourceFileType);
		}

		static ::UnityEngine::NapAssetBundleIndexAsset* CreateInternal()
		{
			return ((::UnityEngine::NapAssetBundleIndexAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_CREATEINTERNAL_OFFSET))();
		}

		::System::Void Init(::Il2CppArray<::UnityEngine::NapIndexAssetRef>* assets, ::Il2CppArray<::UnityEngine::NapIndexBundleRef>* bundles, ::Il2CppArray<::UnityEngine::NapIndexBlockRef>* blocks, ::Il2CppArray<::System::UInt32>* childrenIndexArray, ::Il2CppArray<::System::UInt32>* directChildrenIndexArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::NapIndexAssetRef>*, ::Il2CppArray<::UnityEngine::NapIndexBundleRef>*, ::Il2CppArray<::UnityEngine::NapIndexBlockRef>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_INIT_OFFSET))(this, assets, bundles, blocks, childrenIndexArray, directChildrenIndexArray);
		}

		static ::System::Void SetEnableBundleIndexMemoryOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET))(enable);
		}

		::System::Void GetBundleInfo_Injected(::System::UInt64 bundleId, ::UnityEngine::NapBundleInfo& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::NapBundleInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET))(this, bundleId, ret);
		}
	};
}
