#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"
#include "unitysdk/UnityEngine/NapBundleInfo.h"
#include "unitysdk/UnityEngine/NapIndexAssetRef.h"
#include "unitysdk/UnityEngine/NapIndexBlockRef.h"
#include "unitysdk/UnityEngine/NapIndexBundleRef.h"

namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F3FC5C0)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETALLASSETHASH_OFFSET UNITYSDK_OFFSET(0x1F3FC9E0)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETALLBUNDLEID_OFFSET UNITYSDK_OFFSET(0x1F3FCA30)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETBUNDLEIDFROMASSETHASH_OFFSET UNITYSDK_OFFSET(0x1F3FC8C0)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0x1F3FC810)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F3FC920)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F3FC980)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_INIT_OFFSET UNITYSDK_OFFSET(0x1F3FC6A0)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET UNITYSDK_OFFSET(0x1F3FC600)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETNAPASSETBUNDLEINDEXASSET_OFFSET UNITYSDK_OFFSET(0x1F3FC650)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETNEXT_OFFSET UNITYSDK_OFFSET(0x1F3FC7B0)
#define FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETRESOURCEFILETYPE_OFFSET UNITYSDK_OFFSET(0x1F3FC750)

namespace Foundation
{
	inline static constexpr unsigned int NapBundleIndexAssetBridge_TypeDefinitionIndex = 8362;

	class NapBundleIndexAssetBridge : public ::System::Object
	{
	public:
		static ::UnityEngine::NapAssetBundleIndexAsset* Create()
		{
			return ((::UnityEngine::NapAssetBundleIndexAsset*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_CREATE_OFFSET))();
		}

		static ::System::Void SetEnableBundleIndexMemoryOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET))(enable);
		}

		static ::System::Void SetNapAssetBundleIndexAsset(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETNAPASSETBUNDLEINDEXASSET_OFFSET))(asset);
		}

		static ::System::Void Init(::UnityEngine::NapAssetBundleIndexAsset* asset, ::Il2CppArray<::UnityEngine::NapIndexAssetRef>* assets, ::Il2CppArray<::UnityEngine::NapIndexBundleRef>* bundles, ::Il2CppArray<::UnityEngine::NapIndexBlockRef>* blocks, ::Il2CppArray<::System::UInt32>* childrenIndexArray, ::Il2CppArray<::System::UInt32>* directChildrenIndexArray)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::Il2CppArray<::UnityEngine::NapIndexAssetRef>*, ::Il2CppArray<::UnityEngine::NapIndexBundleRef>*, ::Il2CppArray<::UnityEngine::NapIndexBlockRef>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_INIT_OFFSET))(asset, assets, bundles, blocks, childrenIndexArray, directChildrenIndexArray);
		}

		static ::System::Void SetResourceFileType(::UnityEngine::NapAssetBundleIndexAsset* asset, ::UnityEngine::NapResourceFileType type)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::UnityEngine::NapResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETRESOURCEFILETYPE_OFFSET))(asset, type);
		}

		static ::System::Void SetNext(::UnityEngine::NapAssetBundleIndexAsset* asset, ::UnityEngine::NapAssetBundleIndexAsset* next)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_SETNEXT_OFFSET))(asset, next);
		}

		static ::UnityEngine::NapBundleInfo GetBundleInfo(::UnityEngine::NapAssetBundleIndexAsset* asset, ::System::UInt64 bundleHashName)
		{
			return ((::UnityEngine::NapBundleInfo(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETBUNDLEINFO_OFFSET))(asset, bundleHashName);
		}

		static ::System::UInt64 GetBundleIDFromAssetHash(::UnityEngine::NapAssetBundleIndexAsset* asset, ::System::UInt64 hashPath)
		{
			return ((::System::UInt64(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETBUNDLEIDFROMASSETHASH_OFFSET))(asset, hashPath);
		}

		static ::Il2CppArray<::System::UInt64>* GetChildren(::UnityEngine::NapAssetBundleIndexAsset* asset, ::System::UInt64 bundleHashName)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETCHILDREN_OFFSET))(asset, bundleHashName);
		}

		static ::Il2CppArray<::System::UInt64>* GetDirectChildren(::UnityEngine::NapAssetBundleIndexAsset* asset, ::System::UInt64 bundleHashName)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::UnityEngine::NapAssetBundleIndexAsset*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETDIRECTCHILDREN_OFFSET))(asset, bundleHashName);
		}

		static ::Il2CppArray<::System::UInt64>* GetAllAssetHash(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETALLASSETHASH_OFFSET))(asset);
		}

		static ::Il2CppArray<::System::UInt64>* GetAllBundleId(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPBUNDLEINDEXASSETBRIDGE_GETALLBUNDLEID_OFFSET))(asset);
		}
	};
}
