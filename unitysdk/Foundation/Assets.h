#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetsUnloadLevel.h"
#include "unitysdk/Foundation/AssetsUnloadPhase.h"
#include "unitysdk/Foundation/AssetsUnloadType.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleLocation.h"
#include "unitysdk/Foundation/LoginSetting.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/VerifyBy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/Foundation/BundleInfo.h"
#include "unitysdk/Foundation/BundleLoadInfo.h"
#include "unitysdk/Foundation/BundleLocationInfo.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

class HGAIFFNBMHC;
namespace Foundation { class AssetRequest; }
namespace Foundation { class AssetRequestBase; }
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class BundleRequest; }
namespace Foundation { class InstancePoolRequest; }
namespace Foundation { class SceneAssetRequest; }
namespace Foundation::DataStructures { template <typename T> class HashSet_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETS_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E08E1D0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET UNITYSDK_OFFSET(0x1E09B1D0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E09AFA0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET UNITYSDK_OFFSET(0x1E09B0A0)
#define FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1E09A760)
#define FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E09C040)
#define FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E093180)
#define FOUNDATION_ASSETS_BINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E08F4D0)
#define FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1E08B520)
#define FOUNDATION_ASSETS_CLEARENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E094C30)
#define FOUNDATION_ASSETS_CLEARENABLEDELAYUNLOADOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E094A80)
#define FOUNDATION_ASSETS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E095000)
#define FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET UNITYSDK_OFFSET(0x1E08BE90)
#define FOUNDATION_ASSETS_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x1E08BB50)
#define FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET UNITYSDK_OFFSET(0x1E087720)
#define FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET UNITYSDK_OFFSET(0x1E084F70)
#define FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET UNITYSDK_OFFSET(0x1E0989C0)
#define FOUNDATION_ASSETS_DUMPASSETS_OFFSET UNITYSDK_OFFSET(0x1E085570)
#define FOUNDATION_ASSETS_FINDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E0880A0)
#define FOUNDATION_ASSETS_FORCECLEARALL_OFFSET UNITYSDK_OFFSET(0x1E095D20)
#define FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E09ACE0)
#define FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E097C80)
#define FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E088AC0)
#define FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1E0986F0)
#define FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET UNITYSDK_OFFSET(0x1E093890)
#define FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET UNITYSDK_OFFSET(0x1E096E90)
#define FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1E083160)
#define FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1E0953C0)
#define FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1E09B750)
#define FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET UNITYSDK_OFFSET(0x1E09B6B0)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x1E09A9A0)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x1E09A8A0)
#define FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET UNITYSDK_OFFSET(0x1E08BE00)
#define FOUNDATION_ASSETS_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E09A7A0)
#define FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1E095490)
#define FOUNDATION_ASSETS_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E09A820)
#define FOUNDATION_ASSETS_GETENABLEDELAYUNLOADCYCLECACHE_OFFSET UNITYSDK_OFFSET(0x1E094FC0)
#define FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1E09B860)
#define FOUNDATION_ASSETS_GETLOCALRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1E0951E0)
#define FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET UNITYSDK_OFFSET(0x1E095140)
#define FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1E0972E0)
#define FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET UNITYSDK_OFFSET(0x1E095190)
#define FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1E0950F0)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1E098170)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1E09BB50)
#define FOUNDATION_ASSETS_GETVER_OFFSET UNITYSDK_OFFSET(0x1E097280)
#define FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1E094220)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1E094160)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1E090130)
#define FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1E094630)
#define FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1E094930)
#define FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1E0901F0)
#define FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1E0902B0)
#define FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E09AE20)
#define FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1E094870)
#define FOUNDATION_ASSETS_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1E0980B0)
#define FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1E09AD60)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E097E70)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1E097FF0)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1E097F30)
#define FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E0946F0)
#define FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1E0947B0)
#define FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E0942E0)
#define FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET UNITYSDK_OFFSET(0x1E088D20)
#define FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET UNITYSDK_OFFSET(0x1E0959C0)
#define FOUNDATION_ASSETS_INIT_OFFSET UNITYSDK_OFFSET(0x1E095560)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET UNITYSDK_OFFSET(0x1E08DDA0)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET UNITYSDK_OFFSET(0x1E08CC60)
#define FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET UNITYSDK_OFFSET(0x1E096FD0)
#define FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET UNITYSDK_OFFSET(0x1E096F30)
#define FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET UNITYSDK_OFFSET(0x1E097070)
#define FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1E08E500)
#define FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET UNITYSDK_OFFSET(0x1E09AF00)
#define FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1E08E550)
#define FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET UNITYSDK_OFFSET(0x1E087F70)
#define FOUNDATION_ASSETS_ISSVCASSET_OFFSET UNITYSDK_OFFSET(0x1E0971F0)
#define FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET UNITYSDK_OFFSET(0x1E097110)
#define FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET UNITYSDK_OFFSET(0x1E096D50)
#define FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1E08ECA0)
#define FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET UNITYSDK_OFFSET(0x1E08E3F0)
#define FOUNDATION_ASSETS_LOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1E08F3F0)
#define FOUNDATION_ASSETS_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1E08D300)
#define FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x1E08C620)
#define FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET UNITYSDK_OFFSET(0x1E08C200)
#define FOUNDATION_ASSETS_LOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E08C150)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET UNITYSDK_OFFSET(0x1E08A150)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E08A740)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET UNITYSDK_OFFSET(0x1E08A200)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1E08A800)
#define FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET UNITYSDK_OFFSET(0x1E0881A0)
#define FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1E088560)
#define FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1E09BF70)
#define FOUNDATION_ASSETS_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1E094500)
#define FOUNDATION_ASSETS_LOG_OFFSET UNITYSDK_OFFSET(0x1E094390)
#define FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET UNITYSDK_OFFSET(0x1E08FFD0)
#define FOUNDATION_ASSETS_ONASSETLOADED_OFFSET UNITYSDK_OFFSET(0x1E08FD10)
#define FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET UNITYSDK_OFFSET(0x1E08FE70)
#define FOUNDATION_ASSETS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E0974B0)
#define FOUNDATION_ASSETS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E0973E0)
#define FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1E09B620)
#define FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1E097590)
#define FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E097A60)
#define FOUNDATION_ASSETS_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1E08E5C0)
#define FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET UNITYSDK_OFFSET(0x1E09A300)
#define FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET UNITYSDK_OFFSET(0x1E09B2B0)
#define FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET UNITYSDK_OFFSET(0x1E09C130)
#define FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1E08B310)
#define FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1E09AE80)
#define FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET UNITYSDK_OFFSET(0x1E095980)
#define FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1E096AD0)
#define FOUNDATION_ASSETS_SETENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E094BA0)
#define FOUNDATION_ASSETS_SETENABLEDELAYUNLOADCYCLECACHE_OFFSET UNITYSDK_OFFSET(0x1E094F70)
#define FOUNDATION_ASSETS_SETENABLEDELAYUNLOADOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E0949F0)
#define FOUNDATION_ASSETS_SETENABLEDELAYUNLOAD_OFFSET UNITYSDK_OFFSET(0x1E094D50)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET UNITYSDK_OFFSET(0x1E093F70)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET UNITYSDK_OFFSET(0x1E093BB0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET UNITYSDK_OFFSET(0x1E0939A0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET UNITYSDK_OFFSET(0x1E093D90)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET UNITYSDK_OFFSET(0x1E093910)
#define FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET UNITYSDK_OFFSET(0x1E096BE0)
#define FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1E095790)
#define FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1E094280)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1E0941C0)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1E090190)
#define FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1E094690)
#define FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1E094990)
#define FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1E090250)
#define FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1E090310)
#define FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E0928E0)
#define FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1E0948D0)
#define FOUNDATION_ASSETS_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1E098110)
#define FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1E09ADC0)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E097ED0)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1E098050)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1E097F90)
#define FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E094750)
#define FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1E094810)
#define FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x1E08B8D0)
#define FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET UNITYSDK_OFFSET(0x1E09AAA0)
#define FOUNDATION_ASSETS_TRYGETENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E094CC0)
#define FOUNDATION_ASSETS_TRYGETENABLEDELAYUNLOADOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E094B10)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1E08C890)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0x1E08C6D0)
#define FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E089490)
#define FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET UNITYSDK_OFFSET(0x1E090370)
#define FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET UNITYSDK_OFFSET(0x1E093470)
#define FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET UNITYSDK_OFFSET(0x1E089AA0)
#define FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET UNITYSDK_OFFSET(0x1E089D70)
#define FOUNDATION_ASSETS_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1E08EDA0)
#define FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1E08B090)
#define FOUNDATION_ASSETS_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1E08AD20)
#define FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1E097710)
#define FOUNDATION_ASSETS_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E088F90)
#define FOUNDATION_ASSETS_UPDATEASSETS_OFFSET UNITYSDK_OFFSET(0x1E090810)
#define FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1E08FA70)
#define FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET UNITYSDK_OFFSET(0x1E0929C0)
#define FOUNDATION_ASSETS_UPDATEIMPL_OFFSET UNITYSDK_OFFSET(0x1E0979E0)
#define FOUNDATION_ASSETS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E097940)
#define FOUNDATION_ASSETS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09C220)
#define FOUNDATION_ASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09C1D0)

namespace Foundation
{
	inline static constexpr unsigned int Assets_TypeDefinitionIndex = 8487;

	class Assets : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedCollect()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6850);
		}
		static ::System::Collections::Generic::List_1<::Foundation::BundleRequest*>** StaticGet_LoadingBundles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6858);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedError()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6860);
		}
		static ::Foundation::Assets** StaticGet__instance()
		{
			return (::Foundation::Assets**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6868);
		}
		static ::Foundation::LoginSetting* StaticGet_loginSetting()
		{
			return (::Foundation::LoginSetting*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6870);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ErrorUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6880);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>** StaticGet_TmpCacheKeySet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6888);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>** StaticGet_InstancePoolRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6890);
		}
		static ::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_AssetRequestHandles()
		{
			return (::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6898);
		}
		static ::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>** StaticGet_LoadingScenes()
		{
			return (::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68A0);
		}
		static ::HGAIFFNBMHC** StaticGet__AppAssetsData_k__BackingField()
		{
			return (::HGAIFFNBMHC**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68A8);
		}
		static ::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>** StaticGet_containsAssetProxy()
		{
			return (::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68B0);
		}
		static ::System::String** StaticGet__platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68B8);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_BootLoadedHandles()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>** StaticGet_UnusedScenes()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C8);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>** StaticGet_AssetRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__runningSceneHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68E0);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onInstanceRequestUnload()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6900);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_NeverUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6908);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>** StaticGet_SceneRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6910);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetUnloaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6918);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__watch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6920);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>** StaticGet_UnloadTypeHandleDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6928);
		}
		static ::System::String** StaticGet__localProtocol()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6930);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnloadingNewAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6938);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>** StaticGet_BundleRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6940);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet_s_Stopwatch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6948);
		}
		static ::System::Action** StaticGet_assetsPreLoader()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6950);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>** StaticGet__preloadRequestHandles()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6958);
		}
		static ::System::Type** StaticGet_Instance_AssetType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6960);
		}
		static ::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>** StaticGet_assetLoader()
		{
			return (::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6968);
		}
		static ::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>** StaticGet_UnusedBundles()
		{
			return (::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadingAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet__additiveSceneHandles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetPath>** StaticGet_AssetPathRemapper()
		{
			return (::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnusedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6998);
		}
		static ::Il2CppArray<::Foundation::ResourceFileType>** StaticGet_AllResourceFileTypes()
		{
			return (::Il2CppArray<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A0);
		}
		static ::Foundation::Assets_ConfigHashSetTrim** StaticGet_HandleTrimConfig()
		{
			return (::Foundation::Assets_ConfigHashSetTrim**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A8);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_TmpReqSet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ActiveVariants()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>** StaticGet_HandleRestartVersionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69C0);
		}
		static ::Foundation::AssetsUnloadPhase* StaticGet__AssetsUnloadPhase_k__BackingField()
		{
			return (::Foundation::AssetsUnloadPhase*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}
		static ::Foundation::VerifyBy* StaticGet_verifyBy()
		{
			return (::Foundation::VerifyBy*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35C4);
		}
		static ::Foundation::AssetsUnloadLevel* StaticGet__AssetsUnloadLevel_k__BackingField()
		{
			return (::Foundation::AssetsUnloadLevel*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35C8);
		}
		static ::System::Boolean* StaticGet__videoCriWare_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35C9);
		}
		static ::System::Boolean* StaticGet_closeUnloadImmediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35CA);
		}
		static ::System::Boolean* StaticGet__FileExistCheckTwice_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35CB);
		}
		static ::System::Boolean* StaticGet_s_IsStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35CC);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__enableDelayUnloadOverride()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35CD);
		}
		static ::System::Boolean* StaticGet_forceSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35CF);
		}
		static ::System::Boolean* StaticGet__development_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35D0);
		}
		static ::System::Int32* StaticGet_fileVerifierMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35D4);
		}
		static ::System::Single* StaticGet_CheckInstancePoolRequestsUsed_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35D8);
		}
		static ::System::Int32* StaticGet_currentVerifierRetryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35DC);
		}
		static ::System::UInt32* StaticGet__GameEngineRestartVersion_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E0);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E4);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsImmediate_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E5);
		}
		static ::System::Boolean* StaticGet_useBundleRequestOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E6);
		}
		static ::System::Boolean* StaticGet_forceDisablePool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E7);
		}
		static ::System::Single* StaticGet_s_UnloadBundleTimeSlice()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35E8);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__enableDelayUnloadByFrameOverride()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35EC);
		}
		static ::System::Boolean* StaticGet_ProcessUnusedRequestAsync()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35EE);
		}
		static ::System::Boolean* StaticGet_assetUpdateAfterLateUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35EF);
		}
		static ::System::Boolean* StaticGet__isInBootProcess_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F0);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_InstanceRequest_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F1);
		}
		static ::System::Boolean* StaticGet__videoBundle_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F2);
		}
		static ::System::Boolean* StaticGet__loggable_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F3);
		}
		static ::System::Single* StaticGet_DeepCheckInstancePoolRequests_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F4);
		}
		static ::System::Boolean* StaticGet_DebugGM_ShowRestartAssetLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F8);
		}
		static ::System::Boolean* StaticGet_s_ForceOffStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35F9);
		}
		static ::System::Int32* StaticGet_DebugGM_RestartAssetLogMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35FC);
		}
		// static const ::System::String* BLOCK_FILE_EXTENSION; // 0x0
		// static const ::System::String* BUNDLE_FILE_EXTENSION; // 0x0
		// static const ::System::String* CRIWARE_FILE_EXTENSION; // 0x0
		// static const ::System::String* MP4_FILE_EXTENSION; // 0x0
		// static const ::System::Int64 MAX_COST = 0x3; // 0x0
		// static const ::System::Single CheckInstancePoolRequestsUsed_DeltaTime; // 0x0
		// static const ::System::Single DeepCheckInstancePoolRequests_DeltaTime; // 0x0
		// static const ::System::Single UnloadBundleTimeSliceMax; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CCTOR_OFFSET))();
		}

		static ::System::Void DumpAssetLog_OnRestart()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET))();
		}

		static ::System::Boolean IsScenePathValid(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadSceneAsyncHandle(::System::String* path, ::System::Boolean& additive, ::System::Int32& loadPriority)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET))(path, additive, loadPriority);
		}

		static ::Foundation::SceneAssetRequest* LoadSceneAsync(::System::String* path, ::System::Boolean& additive, ::System::Int32& loadPriority)
		{
			return ((::Foundation::SceneAssetRequest*(*)(::System::String*, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET))(path, additive, loadPriority);
		}

		static ::Foundation::SceneAssetRequest* get__runningScene()
		{
			return ((::Foundation::SceneAssetRequest*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET))();
		}

		static ::System::Void UnloadScene(::Foundation::AssetRequestHandle handle, ::System::Boolean additive, ::System::Boolean force)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADSCENE_OFFSET))(handle, additive, force);
		}

		static ::System::Void UnloadAllScenesInAdditiveScene(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET))(excludeList);
		}

		static ::System::Void UnloadAllScenes(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET))(excludeList);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandleSync(::Foundation::AssetPath& path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET))(path);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCacheSync(::Foundation::AssetPath& assetPath)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET))(assetPath);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandle(::Foundation::AssetPath& path, ::System::Int32& loadPriority)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET))(path, loadPriority);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCache(::Foundation::AssetPath& assetPath, ::System::Int32& loadPriority)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET))(assetPath, loadPriority);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle handle, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_OFFSET))(handle, immediately);
		}

		static ::System::Void UnloadAsset_1(::Foundation::AssetRequestBase*& asset, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET))(asset, immediately);
		}

		static ::System::Void RemoveUnusedAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET))();
		}

		static ::System::Boolean ContainsAsset(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSET_OFFSET))(assetPath);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::Boolean> ContainsAssetEx(::Foundation::AssetPath assetPath)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET))(assetPath);
		}

		static ::Foundation::BundleRequest* LoadBundle(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_OFFSET))(bundleID, refAssetUrl);
		}

		static ::Foundation::BundleRequest* LoadBundleAsync(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl, ::System::Int32& loadPriority)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET))(bundleID, refAssetUrl, loadPriority);
		}

		static ::Foundation::BundleRequest* LoadBundle_1(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl, ::System::Boolean& asyncMode, ::System::Int32& loadPriority)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET))(bundleID, refAssetUrl, asyncMode, loadPriority);
		}

		static ::System::Boolean TryGetInstancePool(::Foundation::AssetPath assetPath, ::System::Type* assetType, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::System::Type*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET))(assetPath, assetType, insRequest);
		}

		static ::System::Boolean TryGetInstancePool_1(::Foundation::AssetRequestBase* request, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestBase*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET))(request, insRequest);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset(::Foundation::AssetPath assetPath, ::System::Type* assetType, ::System::Boolean asyncLoadDependency, ::System::Int32 loadPriority)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetPath, ::System::Type*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET))(assetPath, assetType, asyncLoadDependency, loadPriority);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset_1(::Foundation::AssetRequestBase* request)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET))(request);
		}

		static ::System::Void AddRequest(::Foundation::AssetRequestBase*& request, ::System::Boolean load)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDREQUEST_OFFSET))(request, load);
		}

		static ::Foundation::AssetRequestHandle LoadAssetHandle(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async, ::Foundation::AssetsUnloadType unloadType, ::System::Int32 loadPriority)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean, ::Foundation::AssetsUnloadType, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET))(assetPath, type, async, unloadType, loadPriority);
		}

		static ::Foundation::AssetRequestBase* LoadAsset(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async, ::System::Int32 loadPriority)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_OFFSET))(assetPath, type, async, loadPriority);
		}

		static ::System::Boolean IsFirstInstallation(::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET))(recordStreamingVersion);
		}

		static ::System::Boolean IsOverlayInstallation(::System::String* streamingVersion, ::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET))(streamingVersion, recordStreamingVersion);
		}

		static ::System::Void PreloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_PRELOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::System::Void unloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::System::Int32& loadPriority, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::System::Int32&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET))(assetPath, type, loadPriority, unloadType);
		}

		static ::Foundation::AssetRequestHandle LoadAsset_1(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_1_OFFSET))(assetPath, type, unloadType);
		}

		static ::Foundation::AssetRequestHandle GenerateBindRequest(::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET))(assetRequest, unloadType);
		}

		static ::System::Void BindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BINDREQUEST_OFFSET))(newHandle, assetRequest, unloadType);
		}

		static ::System::Boolean UnBindRequest(::Foundation::AssetRequestHandle newHandle)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET))(newHandle);
		}

		static ::System::Void UpdateBindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET))(newHandle, unloadType);
		}

		static ::System::Void OnAssetLoaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetUnloaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetLoadedError(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET))(path);
		}

		static ::System::Int32 GetAssetRefCount(::Foundation::AssetPath& path)
		{
			return ((::System::Int32(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET))(path);
		}

		static ::Foundation::AssetsUnloadPhase get_AssetsUnloadPhase()
		{
			return ((::Foundation::AssetsUnloadPhase(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadPhase(::Foundation::AssetsUnloadPhase value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadPhase))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET))(value);
		}

		static ::System::UInt32 get_GameEngineRestartVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET))();
		}

		static ::System::Void set_GameEngineRestartVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET))(value);
		}

		static ::System::Boolean get_isInBootProcess()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET))();
		}

		static ::System::Void set_isInBootProcess(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET))(value);
		}

		static ::System::Void UnloadAllHandleExceptBoot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET))();
		}

		static ::System::Void UnloadAllHandle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>* GetAllResourceFileTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET))();
		}

		static ::System::Void SetHandleTrimConfig(::Foundation::Assets_ConfigHashSetTrim* config)
		{
			return ((::System::Void(*)(::Foundation::Assets_ConfigHashSetTrim*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET))(config);
		}

		static ::System::Void SetHandleTrimConfigEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET))(enable);
		}

		static ::System::Void SetHandleTrimConfigCount(::System::Int32 vacancyCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET))(vacancyCount);
		}

		static ::System::Void SetHandleTrimConfigRate(::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET))(vacancyRate);
		}

		static ::System::Void SetHandleTrimConfigCountRate(::System::Int32 vacancyCount, ::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET))(vacancyCount, vacancyRate);
		}

		static ::System::Boolean ShouldTrimExcess(::System::Int32 currentCount, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET))(currentCount, capacity);
		}

		static ::Foundation::AssetsUnloadLevel get_AssetsUnloadLevel()
		{
			return ((::Foundation::AssetsUnloadLevel(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadLevel(::Foundation::AssetsUnloadLevel value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadLevel))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET))(value);
		}

		static ::HGAIFFNBMHC* get_AppAssetsData()
		{
			return ((::HGAIFFNBMHC*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET))();
		}

		static ::System::Void set_AppAssetsData(::HGAIFFNBMHC* value)
		{
			return ((::System::Void(*)(::HGAIFFNBMHC*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET))(value);
		}

		static ::System::String* get_VideoExtension()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET))();
		}

		static ::System::Void Log(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOG_OFFSET))(s);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Boolean get_development()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET))();
		}

		static ::System::Void set_development(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET))(value);
		}

		static ::System::Boolean get_videoBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET))();
		}

		static ::System::Void set_videoBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET))(value);
		}

		static ::System::Boolean get_videoCriWare()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET))();
		}

		static ::System::Void set_videoCriWare(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET))(value);
		}

		static ::System::Boolean get_loggable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET))();
		}

		static ::System::Void set_loggable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET))(value);
		}

		static ::System::Boolean get_FileExistCheckTwice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET))();
		}

		static ::System::Void set_FileExistCheckTwice(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET))(value);
		}

		static ::System::Void SetEnableDelayUnloadOverride(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETENABLEDELAYUNLOADOVERRIDE_OFFSET))(enable);
		}

		static ::System::Void ClearEnableDelayUnloadOverride()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CLEARENABLEDELAYUNLOADOVERRIDE_OFFSET))();
		}

		static ::System::Boolean TryGetEnableDelayUnloadOverride(::System::Boolean& enable)
		{
			return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETENABLEDELAYUNLOADOVERRIDE_OFFSET))(enable);
		}

		static ::System::Void SetEnableDelayUnloadByFrameOverride(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET))(enable);
		}

		static ::System::Void ClearEnableDelayUnloadByFrameOverride()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CLEARENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET))();
		}

		static ::System::Boolean TryGetEnableDelayUnloadByFrameOverride(::System::Boolean& enable)
		{
			return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETENABLEDELAYUNLOADBYFRAMEOVERRIDE_OFFSET))(enable);
		}

		static ::System::Void SetEnableDelayUnload(::System::Boolean enable, ::System::Boolean delayUnloadByFrame)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETENABLEDELAYUNLOAD_OFFSET))(enable, delayUnloadByFrame);
		}

		static ::System::Void SetEnableDelayUnloadCycleCache(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETENABLEDELAYUNLOADCYCLECACHE_OFFSET))(enable);
		}

		static ::System::Boolean GetEnableDelayUnloadCycleCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETENABLEDELAYUNLOADCYCLECACHE_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CLEAR_OFFSET))();
		}

		static ::System::String* GetTemporaryCachePath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetPersistentPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetStreamingPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET))(relativePath);
		}

		static ::System::Boolean GetLocalRelativePath(::System::String* persistOrStreamingFilePath, ::System::String*& localRelativePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETLOCALRELATIVEPATH_OFFSET))(persistOrStreamingFilePath, localRelativePath);
		}

		static ::System::String* GetBadBundleFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET))();
		}

		static ::System::String* GetDiffPatchCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET))();
		}

		static ::System::Void Init(::System::Action* cb)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INIT_OFFSET))(cb);
		}

		static ::System::Void ForceClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCECLEARALL_OFFSET))();
		}

		static ::System::Void InitAssetsScript()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET))();
		}

		static ::System::Void SetDefaultLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetLoginSettingByJson(::System::String* jsonText)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET))(jsonText);
		}

		static ::System::Void SetLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetBuildVersionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET))();
		}

		static ::System::Boolean IsVideoBundleMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET))();
		}

		static ::System::String* GetAssetParentDir(::System::String* filename)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET))(filename);
		}

		static ::System::Boolean IsAssetBundleFile(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET))(filename);
		}

		static ::System::Boolean IsBlockAssets(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET))(filename);
		}

		static ::System::Boolean IsAudioAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsVideoAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsSVCAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSVCASSET_OFFSET))(filename);
		}

		static ::System::String* GetVer()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETVER_OFFSET))();
		}

		static ::System::String* GetPlatformForAssetBundles(::UnityEngine::RuntimePlatform target)
		{
			return ((::System::String*(*)(::UnityEngine::RuntimePlatform))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET))(target);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET))(this, scene);
		}

		static ::System::Int32 CheckInstancePoolRequestUsed(::System::Boolean deepCheck, ::System::Boolean forceTick)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET))(deepCheck, forceTick);
		}

		static ::System::Void UnloadInstancePoolRequestUsed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATE_OFFSET))(this);
		}

		static ::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET))();
		}

		::System::Void UpdateImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEIMPL_OFFSET))(this);
		}

		static ::System::Void UpdateAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEASSETS_OFFSET))();
		}

		static ::System::Void ForceUnloadScene(::Foundation::SceneAssetRequest* request)
		{
			return ((::System::Void(*)(::Foundation::SceneAssetRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET))(request);
		}

		static ::System::Boolean get_updateUnusedAssetsImmediate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsImmediate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow_InstanceRequest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow_InstanceRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))(value);
		}

		static ::System::String* get_platform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_PLATFORM_OFFSET))();
		}

		static ::System::Void set_platform(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_PLATFORM_OFFSET))(value);
		}

		static ::System::String* DumpAssetBlocks()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET))();
		}

		static ::System::String* DumpAssetsLoading()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* QueryHandleByPath(::System::String* path)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET))(path);
		}

		static ::System::String* DumpAssets()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETS_OFFSET))();
		}

		static ::System::Void ApplicationOnLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET))();
		}

		static ::System::Boolean FindBundle(::Foundation::AssetPath path, ::Foundation::BundleID& bundleID)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::BundleID&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FINDBUNDLE_OFFSET))(path, bundleID);
		}

		static ::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETCHILDREN_OFFSET))(bundle);
		}

		static ::Il2CppArray<::Foundation::BundleID>* GetDirectChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETDIRECTCHILDREN_OFFSET))(bundle);
		}

		static ::Foundation::BundleLocation GetBundleLocation(::Foundation::BundleID id, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocation(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET))(id, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo(::Foundation::BundleID bundleID, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET))(bundleID, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo_1(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& info, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::Foundation::BundleInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET))(bundleID, info, checkExist);
		}

		static ::System::Boolean TryFindBundleLoadInfo(::Foundation::BundleID id, ::Foundation::BundleLoadInfo& bundleLoadInfo)
		{
			return ((::System::Boolean(*)(::Foundation::BundleID, ::Foundation::BundleLoadInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET))(id, bundleLoadInfo);
		}

		static ::System::Void ForceOffStepUnloadBundle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Single get_UnloadBundleTimeSlice()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Void set_UnloadBundleTimeSlice(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET))(value);
		}

		static ::System::Boolean get_IsStepUnloadBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Void set_IsStepUnloadBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET))(value);
		}

		static ::System::Void ResetUnloadBundleTimeSlice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Boolean IsLoadingOrQueued()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET))();
		}

		static ::System::Void UpdateBundles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET))();
		}

		static ::System::Void AddUnUnusedBundle(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedScene(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedAsset(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET))(br);
		}

		static ::System::String* RemapVariantName(::System::String* bundle)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET))(bundle);
		}

		::System::Void OnRemoveUnusedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET))(this);
		}

		static ::System::String* GetBlockRelativeFolder(::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET))(resourceFileType);
		}

		static ::System::String* GetBlockAbsolutePath(::System::String* updateBlockRootPath, ::Foundation::ResourceFileType resourceFileType, ::System::UInt64 blockHashName)
		{
			return ((::System::String*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET))(updateBlockRootPath, resourceFileType, blockHashName);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetAllLoadedBlockPaths()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetUnloadTypeBlockPaths(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET))(unloadType);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetLoadedBundleHashes()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetUnloadTypeBundleHashes(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET))(unloadType);
		}

		static ::System::Void LoadUpdateVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET))();
		}

		static ::System::Void AssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void BeforeAssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void RemoveAssetBundleByAssetPath(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET))(path);
		}
	};
}
