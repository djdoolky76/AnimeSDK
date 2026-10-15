#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPKGHGJPNKB.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"
class DIBNHEICGAF;
class FDEFKDGAIBG;
class HJEIEIFLDGN;
class LKIELHKDBHB;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::AssetSystem { template <typename T> class AssetOperationCache_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1C4DE890)
#define RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1C4DE7C0)
#define RPG_CLIENT_DESIGNDATAMGR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4E1FB0)
#define RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1C4DF6D0)
#define RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4DF0F0)
#define RPG_CLIENT_DESIGNDATAMGR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DE8F0)
#define RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4DEC80)
#define RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1C4DF7C0)
#define RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C4DEAD0)
#define RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1C4DEA80)
#define RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1C4E01A0)
#define RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET UNITYSDK_OFFSET(0x1C4DF260)
#define RPG_CLIENT_DESIGNDATAMGR_RELOADDESIGNDATAPROVIDERIFSTALE_OFFSET UNITYSDK_OFFSET(0x1C4DF740)
#define RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET UNITYSDK_OFFSET(0x1C4DF0A0)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1C4E02B0)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C4E1540)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C4E0770)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x1C4E1F60)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET UNITYSDK_OFFSET(0x1C4E0DB0)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_2_OFFSET UNITYSDK_OFFSET(0x1C4E16D0)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1C4E15B0)
#define RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x1C4E05C0)
#define RPG_CLIENT_DESIGNDATAMGR__GETREADBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C4E0620)
#define RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C4DF3E0)
#define RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C4DF2D0)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET UNITYSDK_OFFSET(0x1C4DF900)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1C4DFA80)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1C4E0010)
#define RPG_CLIENT_DESIGNDATAMGR__PUTREADBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C4E0700)
#define RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET UNITYSDK_OFFSET(0x1C4E0F00)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x1C4DEDE0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_1_OFFSET UNITYSDK_OFFSET(0x1C4E1EA0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1C4E1790)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET UNITYSDK_OFFSET(0x1C4E1C00)

namespace RPG::Client
{
	class DesignDataMgr : public ::System::Object
	{
	public:
		::LKIELHKDBHB* _ByteArrayCache; // 0x10
		::RPG::Client::AssetSystem::AssetOperationCache_1<::DIBNHEICGAF*>* AssetCache; // 0x18
		::System::Object* _LoadItemLock; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*>* AssetOrBundleShortNameHash2LoadItemDic; // 0x28
		::System::String* _LocalRelativeFilePathNoExt; // 0x30
		::IPKGHGJPNKB _LoadParam; // 0x38
		::HJEIEIFLDGN* _MiniVersion; // 0x58
		::FDEFKDGAIBG* DesignDataProvider; // 0x60
		::System::String* _MiniInfoLocalRelativeFilePath; // 0x68
		::System::Int64 _ByteArrayAlignByte; // 0x70
		::RPG::Client::FileVisitorPosMode _FileVisitorPosMode; // 0x78
		::System::Boolean _IsEnableFileStreamCache; // 0x7C
		::System::Boolean _IsEnableLog; // 0x7D
		static ::RPG::Client::RPGProfilerMarker** StaticGet__SyncLoadAssetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "DesignDataMgr")->GetStaticField(0xDE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CCTOR_OFFSET))();
		}

		static ::System::Boolean CanLoadServerDesignDataBundle(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET))(a1);
		}

		static ::System::Boolean CanLoadLocalDesignDataBundle(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFileVisitorPosMode(::RPG::Client::FileVisitorPosMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FileVisitorPosMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET))(this, a1);
		}

		::System::Void InitProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET))(this);
		}

		::System::Void PutCache(::DIBNHEICGAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET))(this, a1);
		}

		::System::Void _InitDataDesignBundleProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET))(this);
		}

		::System::Void _InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET))(this);
		}

		::System::Boolean ReloadDesignDataProviderIfStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_RELOADDESIGNDATAPROVIDERIFSTALE_OFFSET))(this);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET))(this, a1);
		}

		::DIBNHEICGAF* _LoadWithAssetCreatedAndLoad(::DIBNHEICGAF* a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::DIBNHEICGAF*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadWithAssetCreatedAndNotLoad(::RPG::Client::DesignDataShortNameHash a1, ::DIBNHEICGAF* a2, ::IPKGHGJPNKB a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::DIBNHEICGAF* _LoadWithAssetNotCreatedAndNotLoad(::RPG::Client::DesignDataShortNameHash a1, ::IPKGHGJPNKB a2, ::FDEFKDGAIBG* a3)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::IPKGHGJPNKB, ::FDEFKDGAIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::DIBNHEICGAF* LoadAssetByAssetOrBundleShortNameHash(::RPG::Client::DesignDataShortNameHash a1, ::IPKGHGJPNKB a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2);
		}

		::DIBNHEICGAF* SyncLoadAsset(::System::String* a1)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET))(this, a1);
		}

		::System::Int64 _GetAlignSize(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* _GetReadByteArray(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__GETREADBYTEARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void _PutReadByteArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__PUTREADBYTEARRAY_OFFSET))(this, a1);
		}

		::System::String* SyncLoadTextFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* _SyncLoadBytesFromFileImpl(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* SyncLoadBytesFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName_1(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName_2(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash_1(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadNoRefAsset(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET))(this, a1);
		}

	};
}
