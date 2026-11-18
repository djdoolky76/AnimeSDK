#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleLocationIndex.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleInfo.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D3E80)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESREMOVEBYKEY_OFFSET UNITYSDK_OFFSET(0x1F4D3ED0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1F4D3F20)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLECHILDRENSADD_OFFSET UNITYSDK_OFFSET(0x1F4D4470)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEDIRECTCHILDRENSADD_OFFSET UNITYSDK_OFFSET(0x1F4D4820)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEINFOSINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D3BB0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEINFOSTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1F4D3C00)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D4110)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETOCHILDRENTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1F4D4160)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETODIRECTCHILDRENINSERTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D44C0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETODIRECTCHILDRENTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1F4D4510)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALLBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1F4D39F0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALLWITHOUTBUNDLES_OFFSET UNITYSDK_OFFSET(0x1F4D3B70)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1F4D3B30)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1F4D3A40)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_GETALLASSETHASHES_OFFSET UNITYSDK_OFFSET(0x1F4D4870)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_GETBUNDLECHILDRENSCOUNT_OFFSET UNITYSDK_OFFSET(0x1F4D4430)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_GETBUNDLEDIRECTCHILDRENSCOUNT_OFFSET UNITYSDK_OFFSET(0x1F4D47E0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F4D41B0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F4D4560)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_INITASSETS_OFFSET UNITYSDK_OFFSET(0x1F4D3AE0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_INITBUNDLEINDEXASSET_OFFSET UNITYSDK_OFFSET(0x1F4D39A0)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT_INITBUNDLES_OFFSET UNITYSDK_OFFSET(0x1F4D3A90)
#define FOUNDATION_BUNDLEINDEXDATABASEOPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D4A20)

namespace Foundation
{
	inline static constexpr unsigned int BundleIndexDataBaseOpt_TypeDefinitionIndex = 7915;

	class BundleIndexDataBaseOpt : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::BundleLocationIndex>* m_locationCache; // 0x10
		::UnityEngine::NapAssetBundleIndexAsset* m_mainAsset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT__CTOR_OFFSET))(this);
		}

		::System::Void InitBundleIndexAsset(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_INITBUNDLEINDEXASSET_OFFSET))(this, asset);
		}

		::System::Void ClearAllBlockLocationCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALLBLOCKLOCATIONCACHE_OFFSET))(this);
		}

		::System::Void ClearBlockLocationCache(::Foundation::ResourceFileType type)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARBLOCKLOCATIONCACHE_OFFSET))(this, type);
		}

		::System::Void InitBundles(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_INITBUNDLES_OFFSET))(this, newSize);
		}

		::System::Void InitAssets(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_INITASSETS_OFFSET))(this, newSize);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALL_OFFSET))(this);
		}

		::System::Void ClearAllWithoutBundles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_CLEARALLWITHOUTBUNDLES_OFFSET))(this);
		}

		::System::Void BundleInfosInsertOrUpdate(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEINFOSINSERTORUPDATE_OFFSET))(this, bundleID, bi);
		}

		::System::Boolean BundleInfosTryGetValue(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& bi)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::Foundation::BundleInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEINFOSTRYGETVALUE_OFFSET))(this, bundleID, bi);
		}

		::System::Void AssetToBundlesInsertOrUpdate(::System::UInt64 HashPath, ::System::UInt64 bundleHashName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESINSERTORUPDATE_OFFSET))(this, HashPath, bundleHashName);
		}

		::System::Void AssetToBundlesRemoveByKey(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESREMOVEBYKEY_OFFSET))(this, path);
		}

		::System::Boolean AssetToBundlesTryGetValue(::Foundation::AssetPath path, ::System::UInt64& bid)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_ASSETTOBUNDLESTRYGETVALUE_OFFSET))(this, path, bid);
		}

		::System::Void BundleToChildrenInsertOrUpdate(::Foundation::BundleID bundleID, ::System::Int32& existIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETOCHILDRENINSERTORUPDATE_OFFSET))(this, bundleID, existIndex);
		}

		::System::Boolean BundleToChildrenTryGetValue(::Foundation::BundleID bundle, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETOCHILDRENTRYGETVALUE_OFFSET))(this, bundle, index);
		}

		::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_GETCHILDREN_OFFSET))(this, bundle);
		}

		::System::Int32 GetBundleChildrensCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_GETBUNDLECHILDRENSCOUNT_OFFSET))(this);
		}

		::System::Void BundleChildrensAdd(::Il2CppArray<::Foundation::BundleID>* children)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLECHILDRENSADD_OFFSET))(this, children);
		}

		::System::Void BundleToDirectChildrenInsertOrUpdate(::Foundation::BundleID bundleID, ::System::Int32& existIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETODIRECTCHILDRENINSERTORUPDATE_OFFSET))(this, bundleID, existIndex);
		}

		::System::Boolean BundleToDirectChildrenTryGetValue(::Foundation::BundleID bundle, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLETODIRECTCHILDRENTRYGETVALUE_OFFSET))(this, bundle, index);
		}

		::Il2CppArray<::Foundation::BundleID>* GetDirectChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_GETDIRECTCHILDREN_OFFSET))(this, bundle);
		}

		::System::Int32 GetBundleDirectChildrensCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_GETBUNDLEDIRECTCHILDRENSCOUNT_OFFSET))(this);
		}

		::System::Void BundleDirectChildrensAdd(::Il2CppArray<::Foundation::BundleID>* children)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::BundleID>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_BUNDLEDIRECTCHILDRENSADD_OFFSET))(this, children);
		}

		::Il2CppArray<::System::UInt64>* GetAllAssetHashes()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINDEXDATABASEOPT_GETALLASSETHASHES_OFFSET))(this);
		}
	};
}
