#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"
#include "unitysdk/UnityEngine/BuildCompression.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class Stream; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleInstantiatePrefabRequest; }
namespace UnityEngine { class AssetBundleRecompressOperation; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class BinaryPrefabAsset; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETBUNDLE_ADDSEARCHPATH_OFFSET UNITYSDK_OFFSET(0x2096B270)
#define UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BE10)
#define UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_OFFSET UNITYSDK_OFFSET(0x2096BE00)
#define UNITYENGINE_ASSETBUNDLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x2096B750)
#define UNITYENGINE_ASSETBUNDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x2096B210)
#define UNITYENGINE_ASSETBUNDLE_FILEEXIST_OFFSET UNITYSDK_OFFSET(0x2096B290)
#define UNITYENGINE_ASSETBUNDLE_GETALLCHUNKBYTES_OFFSET UNITYSDK_OFFSET(0x2096C7E0)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET UNITYSDK_OFFSET(0x2096B250)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x2096B260)
#define UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C620)
#define UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x2096BE60)
#define UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B960)
#define UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_OFFSET UNITYSDK_OFFSET(0x2096B970)
#define UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASHINTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C800)
#define UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASH_OFFSET UNITYSDK_OFFSET(0x2096C7F0)
#define UNITYENGINE_ASSETBUNDLE_GETASYNCLOADREPORT_OFFSET UNITYSDK_OFFSET(0x2096C610)
#define UNITYENGINE_ASSETBUNDLE_GETINTERNALASSETSINSTANCEIDEND_OFFSET UNITYSDK_OFFSET(0x2096C640)
#define UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B940)
#define UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_OFFSET UNITYSDK_OFFSET(0x2096B950)
#define UNITYENGINE_ASSETBUNDLE_GET_ISSTREAMEDSCENEASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x2096B740)
#define UNITYENGINE_ASSETBUNDLE_GET_MAINASSET_OFFSET UNITYSDK_OFFSET(0x2096B220)
#define UNITYENGINE_ASSETBUNDLE_GET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x2096C6A0)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096C3E0)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C3D0)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_OFFSET UNITYSDK_OFFSET(0x2096C3C0)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_1_OFFSET UNITYSDK_OFFSET(0x2096C310)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C300)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0x2096C2F0)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096C260)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x2096C1B0)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_2_OFFSET UNITYSDK_OFFSET(0x2096C130)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x2096C090)
#define UNITYENGINE_ASSETBUNDLE_LOADALL_1_OFFSET UNITYSDK_OFFSET(0x2096B7A0)
#define UNITYENGINE_ASSETBUNDLE_LOADALL_OFFSET UNITYSDK_OFFSET(0x2096B790)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BBA0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096BAC0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_4_OFFSET UNITYSDK_OFFSET(0x2096B9D0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_5_OFFSET UNITYSDK_OFFSET(0x2096BB10)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BB90)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x2096B980)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B910)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNCWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C080)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096BEC0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_3_OFFSET UNITYSDK_OFFSET(0x2096BFC0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BFB0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x2096BE70)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BDB0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_2_OFFSET UNITYSDK_OFFSET(0x2096BC00)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_3_OFFSET UNITYSDK_OFFSET(0x2096BD00)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BCF0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_OFFSET UNITYSDK_OFFSET(0x2096BBB0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_2_OFFSET UNITYSDK_OFFSET(0x2096B800)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_3_OFFSET UNITYSDK_OFFSET(0x2096B8C0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B8B0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET UNITYSDK_OFFSET(0x2096B7B0)
#define UNITYENGINE_ASSETBUNDLE_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x2096B780)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSETASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C540)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C4A0)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096C550)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_OFFSET UNITYSDK_OFFSET(0x2096C530)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_1_OFFSET UNITYSDK_OFFSET(0x2096C4B0)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_OFFSET UNITYSDK_OFFSET(0x2096C490)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE1_OFFSET UNITYSDK_OFFSET(0x2096B380)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE2_OFFSET UNITYSDK_OFFSET(0x2096B390)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC1_OFFSET UNITYSDK_OFFSET(0x2096B2B0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC2_OFFSET UNITYSDK_OFFSET(0x2096B2C0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCEXT_OFFSET UNITYSDK_OFFSET(0x2096B360)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096B2E0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096B2F0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B2A0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x2096B2D0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEEXT_OFFSET UNITYSDK_OFFSET(0x2096B3A0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC1_OFFSET UNITYSDK_OFFSET(0x2096B310)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC2_OFFSET UNITYSDK_OFFSET(0x2096B320)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096B340)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096B350)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B300)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_OFFSET UNITYSDK_OFFSET(0x2096B330)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x2096B3C0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_2_OFFSET UNITYSDK_OFFSET(0x2096B3D0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B370)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x2096B3B0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096B400)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B3E0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET UNITYSDK_OFFSET(0x2096B3F0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_1_OFFSET UNITYSDK_OFFSET(0x2096B430)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B410)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_OFFSET UNITYSDK_OFFSET(0x2096B420)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B630)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_1_OFFSET UNITYSDK_OFFSET(0x2096B640)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_2_OFFSET UNITYSDK_OFFSET(0x2096B670)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x2096B600)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B6D0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_1_OFFSET UNITYSDK_OFFSET(0x2096B6E0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_2_OFFSET UNITYSDK_OFFSET(0x2096B710)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x2096B6A0)
#define UNITYENGINE_ASSETBUNDLE_LOAD_2_OFFSET UNITYSDK_OFFSET(0x2096B770)
#define UNITYENGINE_ASSETBUNDLE_LOAD_OFFSET UNITYSDK_OFFSET(0x2096B760)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x2096C690)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096C680)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x2096C650)
#define UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096B920)
#define UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_OFFSET UNITYSDK_OFFSET(0x2096B930)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETSWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BDF0)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_1_OFFSET UNITYSDK_OFFSET(0x2096BDC0)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_3_OFFSET UNITYSDK_OFFSET(0x2096BDE0)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BDD0)
#define UNITYENGINE_ASSETBUNDLE_RETURNMAINASSET_OFFSET UNITYSDK_OFFSET(0x2096B230)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BE30)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x2096BE20)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_INTERNAL_OFFSET UNITYSDK_OFFSET(0x2096BE50)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_OFFSET UNITYSDK_OFFSET(0x2096BE40)
#define UNITYENGINE_ASSETBUNDLE_SETDEFAULTPATH_OFFSET UNITYSDK_OFFSET(0x2096B280)
#define UNITYENGINE_ASSETBUNDLE_SETINTERNALASSETSINSTANCEIDEND_OFFSET UNITYSDK_OFFSET(0x2096C630)
#define UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEMMAX_OFFSET UNITYSDK_OFFSET(0x2096C7C0)
#define UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEM_OFFSET UNITYSDK_OFFSET(0x2096C7D0)
#define UNITYENGINE_ASSETBUNDLE_SET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x2096C6E0)
#define UNITYENGINE_ASSETBUNDLE_UNLOADALLASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x2096B240)
#define UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x2096C600)
#define UNITYENGINE_ASSETBUNDLE_VALIDATELOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x2096B440)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundle_TypeDefinitionIndex = 5768;

	class AssetBundle : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_mainAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_MAINASSET_OFFSET))(this);
		}

		static ::UnityEngine::Object* returnMainAsset(::UnityEngine::AssetBundle* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::AssetBundle*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RETURNMAINASSET_OFFSET))(a1);
		}

		static ::System::Void UnloadAllAssetBundles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOADALLASSETBUNDLES_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::AssetBundle*>* GetAllLoadedAssetBundles_Native()
		{
			return ((::Il2CppArray<::UnityEngine::AssetBundle*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AssetBundle*>* GetAllLoadedAssetBundles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::AssetBundle*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET))();
		}

		static ::System::Void AddSearchPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_ADDSEARCHPATH_OFFSET))(a1);
		}

		static ::System::Void SetDefaultPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETDEFAULTPATH_OFFSET))(a1);
		}

		static ::System::Boolean FileExist(::PVOID a1)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_FILEEXIST_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync1(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync2(::PVOID a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_2(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_Internal(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync1(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync2(::PVOID a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_2(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsyncExt(::PVOID a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_Internal(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile1(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile2(::PVOID a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundle* LoadFromFileExt(::PVOID a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_2(::System::String* a1, ::System::UInt32 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_Internal(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_1(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory_Internal(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_INTERNAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory_1(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_1_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateLoadFromStream(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_VALIDATELOADFROMSTREAM_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync(::System::IO::Stream* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync_1(::System::IO::Stream* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync_2(::System::IO::Stream* a1)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_2_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream(::System::IO::Stream* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream_1(::System::IO::Stream* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream_2(::System::IO::Stream* a1)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_2_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsyncInternal(::System::IO::Stream* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNCINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AssetBundle* LoadFromStreamInternal(::System::IO::Stream* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMINTERNAL_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_isStreamedSceneAssetBundle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_ISSTREAMEDSCENEASSETBUNDLE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_CONTAINS_OFFSET))(this, a1);
		}

		::UnityEngine::Object* Load(::System::String* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOAD_OFFSET))(this, a1);
		}

		::UnityEngine::Object* Load_2(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOAD_2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundleRequest* LoadAsync(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASYNC_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAll(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAll_1()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALL_1_OFFSET))(this);
		}

		::UnityEngine::Object* LoadAsset(::System::String* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Object* LoadAsset_2(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* LoadAsset_3(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_3_OFFSET))(this, a1, a2);
		}

		::System::Void ReleasePrefetch_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_INTERNAL_OFFSET))(this);
		}

		::System::Void ReleasePrefetch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_OFFSET))(this);
		}

		::System::Int32 GetPrefetchSize_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_INTERNAL_OFFSET))(this);
		}

		::System::Int32 GetPrefetchSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_OFFSET))(this);
		}

		static ::System::UInt64 GetAllPrefetchSize_Internal()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_INTERNAL_OFFSET))();
		}

		static ::System::UInt64 GetAllPrefetchSize()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_OFFSET))();
		}

		::UnityEngine::Object* LoadAsset_Internal(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* LoadAssetWithHash_Internal(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHHASH_INTERNAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_2(::System::Int64 a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_2_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_4(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_4_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_5(::System::Int64 a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_5_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_2(::System::String* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_2_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_3(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_3_OFFSET))(this, a1, a2);
		}

		::System::Void RequestToUnloadAssets_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_1_OFFSET))(this, a1, a2);
		}

		::System::Void RequestToUnloadAssets_3(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_3_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 CommitAllUnloadAssetRequests()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_OFFSET))();
		}

		static ::System::Void SetAllowAssetBundleUnloadAssets(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_OFFSET))(a1);
		}

		static ::System::Void SetAllowValidateDependencyOnUnloading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_OFFSET))(a1);
		}

		static ::System::Boolean GetAllowAssetBundleUnloadAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_OFFSET))();
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_2(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_2_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_3(::System::Int64 a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_3_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets_2(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_2_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync()
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET))(this);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync_2(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* InstantiatePrefab(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* InstantiatePrefab_Internal(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_INTERNAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* InstantiatePrefab_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync_Internal(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_INTERNAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefab(::System::Int64 a1)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_OFFSET))(this, a1);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefabAsset_Internal(::System::String* a1)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSET_INTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefab_1(::System::String* a1)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_1_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAsync(::System::Int64 a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAssetAsync_Internal(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSETASYNC_INTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAsync_1(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_1_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsyncWithHash_Internal(::System::Int64 a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCWITHHASH_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Unload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_Internal(::System::String* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssetsWithHash_Internal(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSWITHHASH_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void RequestToUnloadAssets_Internal(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void RequestToUnloadAssetsWithHash_Internal(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETSWITHHASH_INTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 CommitAllUnloadAssetRequests_Internal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_INTERNAL_OFFSET))();
		}

		static ::System::String* GetAsyncLoadReport()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASYNCLOADREPORT_OFFSET))();
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsyncWithHash_Internal(::System::Int64 a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNCWITHHASH_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetAllowAssetBundleUnloadAssets_Internal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void SetAllowValidateDependencyOnUnloading_Internal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_INTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean GetAllowAssetBundleUnloadAssets_Internal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET))();
		}

		static ::System::Void SetInternalAssetsInstanceIdEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETINTERNALASSETSINSTANCEIDEND_OFFSET))(a1);
		}

		static ::System::Int32 GetInternalAssetsInstanceIdEnd()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETINTERNALASSETSINSTANCEIDEND_OFFSET))();
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync(::System::String* a1, ::System::String* a2, ::UnityEngine::BuildCompression a3, ::System::UInt32 a4, ::UnityEngine::ThreadPriority a5)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync_Internal(::System::String* a1, ::System::String* a2, ::UnityEngine::BuildCompression a3, ::System::UInt32 a4, ::UnityEngine::ThreadPriority a5)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::UInt32 get_memoryBudgetKB()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_MEMORYBUDGETKB_OFFSET))();
		}

		static ::System::Void set_memoryBudgetKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SET_MEMORYBUDGETKB_OFFSET))(a1);
		}

		static ::System::Void SetPrefetchMemMax(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEMMAX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetPrefetchMem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEM_OFFSET))(a1);
		}

		static ::System::UInt64 GetAllChunkBytes()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLCHUNKBYTES_OFFSET))();
		}

		static ::System::Int64 GetAssetBundleHash(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASH_OFFSET))(a1);
		}

		static ::System::Int64 GetAssetBundleHashInternal(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASHINTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync_Internal_Injected(::System::String* a1, ::System::String* a2, ::UnityEngine::BuildCompression a3, ::System::UInt32 a4, ::UnityEngine::ThreadPriority a5)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
}
