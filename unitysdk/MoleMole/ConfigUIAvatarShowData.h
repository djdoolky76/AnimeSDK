#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCKKEJCOFAM.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class AvatarShowSettingDefault; }
namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace MoleMole { class ConfigUIAvatarShow; }
namespace MoleMole { class ConfigUIAvatarShowSettings; }
namespace MoleMole { class ConfigUIAvatarShowSettingsIndex; }
namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_BUILDUIAVATARSHOWSETTINGSINDEX_OFFSET UNITYSDK_OFFSET(0x1A779750)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CACHEAVATARSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77C550)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CACHEBUDDYSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77CA80)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1A777FC0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARUIAVATARSHOWSETTINGPAYLOADCACHE_OFFSET UNITYSDK_OFFSET(0x1A7774F0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARUIAVATARSHOWSETTINGSINDEX_OFFSET UNITYSDK_OFFSET(0x1A777940)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CREATEAVATARMAINPAGEINFO_OFFSET UNITYSDK_OFFSET(0x1A77C9E0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_CREATEBUDDYMAINPAGEINFO_OFFSET UNITYSDK_OFFSET(0x1A77CF90)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_ENSURERUNTIMESHOWSETTINGSCONTAINERS_OFFSET UNITYSDK_OFFSET(0x1A779F30)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_ENSUREUIAVATARSHOWSETTINGSINDEX_OFFSET UNITYSDK_OFFSET(0x1A77A510)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETAVATARSHOWSETTINGCOMMON_OFFSET UNITYSDK_OFFSET(0x1A77E3E0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETCOMMONLIGHTSETTINGBYTYPE_OFFSET UNITYSDK_OFFSET(0x1A77D640)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETDEFAULTUIAVATARSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A77D310)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETHOLLOWCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1A7781B0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETPAGESWITCHINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A77D0E0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETRENDERLAYERBYUIRTSHOWLAYER_OFFSET UNITYSDK_OFFSET(0x1A77A9A0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUI3DMODELSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A7803B0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARMAINPAGEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A77F120)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A77DFD0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYMAINPAGEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A77FAC0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A77F1D0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIEQUIPSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A77FF90)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIVOLUMEASSETPATH_OFFSET UNITYSDK_OFFSET(0x1A77DB20)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIWEAPONSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A77FB70)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_HASLEGACYUIAVATARSHOWSETTINGSPATHS_OFFSET UNITYSDK_OFFSET(0x1A779620)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_INVOKESHOWSETTINGSLOADCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A77D030)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_ISUIAVATARSHOWSETTINGSINDEXEMPTY_OFFSET UNITYSDK_OFFSET(0x1A7795A0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADAVATARSHOWSETTINGSASSET_OFFSET UNITYSDK_OFFSET(0x1A77B050)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADBUDDYSHOWSETTINGSASSET_OFFSET UNITYSDK_OFFSET(0x1A77BC50)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADUIAVATARSHOWSETTINGSINDEX_OFFSET UNITYSDK_OFFSET(0x1A779430)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_PRELOADAVATARSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77AA60)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_PRELOADBUDDYSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77B660)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDALLUIAVATARSHOWSETTINGDATALEGACY_OFFSET UNITYSDK_OFFSET(0x1A7783B0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIAVATARSHOWSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A778650)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIBUDDYSHOWSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A778D40)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1A7772F0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A777400)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADUIAVATARDATAFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A777DA0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RESETRUNTIMESHOWSETTINGSCACHE_OFFSET UNITYSDK_OFFSET(0x1A77A6E0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77C250)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARUIMAINPAGERUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1A77ED10)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77C3D0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYUIMAINPAGERUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1A77F600)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETLOADEDAVATARSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77ADA0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETLOADEDBUDDYSHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77B9A0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7807E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData_TypeDefinitionIndex = 75152;

	class ConfigUIAvatarShowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet__loadingAvatarShowSettingsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34850);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet__avatarShowSettingsAssetIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34858);
		}
		static ::MoleMole::ConfigUIAvatarShow** StaticGet__configUIAvatarShow()
		{
			return (::MoleMole::ConfigUIAvatarShow**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34860);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet__buddyShowSettingsAssetIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34868);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet__loadingBuddyShowSettingsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34870);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>** StaticGet_templist()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x34878);
		}
		static ::System::Int32* StaticGet__showSettingsPayloadLoadToken()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0xB120);
		}
		static ::System::Boolean* StaticGet__isUIAvatarShowSettingsIndexLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0xB124);
		}
		static ::System::Int32* StaticGet__showSettingsIndexLoadToken()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0xB128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA__CCTOR_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
		}

		static ::System::Void ClearData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARDATA_OFFSET))();
		}

		static ::MoleMole::ConfigUIAvatarShow* GetHollowCameraConfig()
		{
			return ((::MoleMole::ConfigUIAvatarShow*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETHOLLOWCAMERACONFIG_OFFSET))();
		}

		static ::System::Void ReloadUIAvatarDataFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADUIAVATARDATAFROMFILE_OFFSET))(isAync, complete);
		}

		static ::System::Void ReBuildAllUIAvatarShowSettingDataLegacy(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDALLUIAVATARSHOWSETTINGDATALEGACY_OFFSET))(isAync, complete);
		}

		static ::System::Void LoadUIAvatarShowSettingsIndex(::System::Boolean isAync, ::System::Action_1<::System::Boolean>* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADUIAVATARSHOWSETTINGSINDEX_OFFSET))(isAync, complete);
		}

		static ::System::Boolean IsUIAvatarShowSettingsIndexEmpty(::MoleMole::ConfigUIAvatarShowSettingsIndex* indexConfig)
		{
			return ((::System::Boolean(*)(::MoleMole::ConfigUIAvatarShowSettingsIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_ISUIAVATARSHOWSETTINGSINDEXEMPTY_OFFSET))(indexConfig);
		}

		static ::System::Boolean HasLegacyUIAvatarShowSettingsPaths()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_HASLEGACYUIAVATARSHOWSETTINGSPATHS_OFFSET))();
		}

		static ::System::Void BuildUIAvatarShowSettingsIndex(::MoleMole::ConfigUIAvatarShowSettingsIndex* indexConfig)
		{
			return ((::System::Void(*)(::MoleMole::ConfigUIAvatarShowSettingsIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_BUILDUIAVATARSHOWSETTINGSINDEX_OFFSET))(indexConfig);
		}

		static ::System::Void EnsureUIAvatarShowSettingsIndex()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_ENSUREUIAVATARSHOWSETTINGSINDEX_OFFSET))();
		}

		static ::System::Void ResetRuntimeShowSettingsCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RESETRUNTIMESHOWSETTINGSCACHE_OFFSET))();
		}

		static ::System::Void EnsureRuntimeShowSettingsContainers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_ENSURERUNTIMESHOWSETTINGSCONTAINERS_OFFSET))();
		}

		static ::System::Void ClearUIAvatarShowSettingsIndex()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARUIAVATARSHOWSETTINGSINDEX_OFFSET))();
		}

		static ::System::Void ClearUIAvatarShowSettingPayloadCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CLEARUIAVATARSHOWSETTINGPAYLOADCACHE_OFFSET))();
		}

		static ::System::Void ReBuildUIBuddyShowSettingData(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIBUDDYSHOWSETTINGDATA_OFFSET))(isAync, complete);
		}

		static ::System::Int32 GetRenderLayerByUIRTShowLayer(::BCKKEJCOFAM showLayer)
		{
			return ((::System::Int32(*)(::BCKKEJCOFAM))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETRENDERLAYERBYUIRTSHOWLAYER_OFFSET))(showLayer);
		}

		static ::System::Void ReBuildUIAvatarShowSettingData(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIAVATARSHOWSETTINGDATA_OFFSET))(isAync, complete);
		}

		static ::System::Void PreloadAvatarShowSettings(::System::Int32 avatarID, ::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_PRELOADAVATARSHOWSETTINGS_OFFSET))(avatarID, isAync, complete);
		}

		static ::System::Void PreloadBuddyShowSettings(::System::Int32 buddyID, ::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_PRELOADBUDDYSHOWSETTINGS_OFFSET))(buddyID, isAync, complete);
		}

		static ::System::Boolean TryGetLoadedAvatarShowSettings(::System::Int32 avatarID, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*& showSettings)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETLOADEDAVATARSHOWSETTINGS_OFFSET))(avatarID, showSettings);
		}

		static ::System::Boolean TryGetLoadedBuddyShowSettings(::System::Int32 buddyID, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*& showSettings)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETLOADEDBUDDYSHOWSETTINGS_OFFSET))(buddyID, showSettings);
		}

		static ::System::Boolean TryGetAvatarShowSettings(::System::Int32 avatarID, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*& showSettings)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARSHOWSETTINGS_OFFSET))(avatarID, showSettings);
		}

		static ::System::Boolean TryGetBuddyShowSettings(::System::Int32 buddyID, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*& showSettings)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYSHOWSETTINGS_OFFSET))(buddyID, showSettings);
		}

		static ::System::Void LoadAvatarShowSettingsAsset(::System::Int32 avatarID, ::Foundation::AssetPath assetPath, ::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Int32, ::Foundation::AssetPath, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADAVATARSHOWSETTINGSASSET_OFFSET))(avatarID, assetPath, isAync, complete);
		}

		static ::System::Void LoadBuddyShowSettingsAsset(::System::Int32 buddyID, ::Foundation::AssetPath assetPath, ::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Int32, ::Foundation::AssetPath, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_LOADBUDDYSHOWSETTINGSASSET_OFFSET))(buddyID, assetPath, isAync, complete);
		}

		static ::System::Void CacheAvatarShowSettings(::MoleMole::ConfigUIAvatarShowSettings* config, ::Foundation::AssetPath assetPath, ::System::Int32 requestedAvatarID)
		{
			return ((::System::Void(*)(::MoleMole::ConfigUIAvatarShowSettings*, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CACHEAVATARSHOWSETTINGS_OFFSET))(config, assetPath, requestedAvatarID);
		}

		static ::System::Void CacheBuddyShowSettings(::MoleMole::ConfigBuddyAvatarShowSettings* config, ::Foundation::AssetPath assetPath, ::System::Int32 requestedBuddyID)
		{
			return ((::System::Void(*)(::MoleMole::ConfigBuddyAvatarShowSettings*, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CACHEBUDDYSHOWSETTINGS_OFFSET))(config, assetPath, requestedBuddyID);
		}

		static ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo CreateAvatarMainPageInfo(::MoleMole::ConfigUIAvatarShowSettings* config)
		{
			return ((::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo(*)(::MoleMole::ConfigUIAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CREATEAVATARMAINPAGEINFO_OFFSET))(config);
		}

		static ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo CreateBuddyMainPageInfo(::MoleMole::ConfigUIMainPageShowSetting* config)
		{
			return ((::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo(*)(::MoleMole::ConfigUIMainPageShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_CREATEBUDDYMAINPAGEINFO_OFFSET))(config);
		}

		static ::System::Void InvokeShowSettingsLoadCallbacks(::System::Collections::Generic::List_1<::System::Action*>* callbacks)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_INVOKESHOWSETTINGSLOADCALLBACKS_OFFSET))(callbacks);
		}

		static ::System::Single GetPageSwitchInterval()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETPAGESWITCHINTERVAL_OFFSET))();
		}

		static ::MoleMole::AvatarShowSettingDefault* GetDefaultUiAvatarShowSetting()
		{
			return ((::MoleMole::AvatarShowSettingDefault*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETDEFAULTUIAVATARSHOWSETTING_OFFSET))();
		}

		static ::MoleMole::UIAvatarLightSetting* GetCommonLightSettingByType(::System::String* ctrlName)
		{
			return ((::MoleMole::UIAvatarLightSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETCOMMONLIGHTSETTINGBYTYPE_OFFSET))(ctrlName);
		}

		static ::System::String* GetUIVolumeAssetPath(::System::String* ctrlName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIVOLUMEASSETPATH_OFFSET))(ctrlName);
		}

		static ::MoleMole::AvatarShowSetting* GetUIAvatarShowSetting(::System::String* ctrlName, ::System::Int32 AvatarID, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIndex)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARSHOWSETTING_OFFSET))(ctrlName, AvatarID, ShowTypeIndex, fromTypeName, showSettingTypeIndex);
		}

		static ::System::Boolean TryGetAvatarUIMainPageRuntimeInfo(::System::Int32 avatarID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARUIMAINPAGERUNTIMEINFO_OFFSET))(avatarID, info);
		}

		static ::System::String* GetUIAvatarMainPagePrefabPath(::System::Int32 avatarID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARMAINPAGEPREFABPATH_OFFSET))(avatarID);
		}

		static ::MoleMole::AvatarShowSetting* GetUIBuddyShowSetting(::System::String* ctrlName, ::System::Int32 BuddyID, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYSHOWSETTING_OFFSET))(ctrlName, BuddyID, ShowTypeIndex, fromTypeName);
		}

		static ::System::Boolean TryGetBuddyUIMainPageRuntimeInfo(::System::Int32 buddyID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYUIMAINPAGERUNTIMEINFO_OFFSET))(buddyID, info);
		}

		static ::System::String* GetUIBuddyMainPagePrefabPath(::System::Int32 buddyID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYMAINPAGEPREFABPATH_OFFSET))(buddyID);
		}

		static ::MoleMole::AvatarShowSetting* GetUIWeaponShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIWEAPONSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName);
		}

		static ::MoleMole::AvatarShowSetting* GetUIEquipShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIEQUIPSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName);
		}

		static ::MoleMole::AvatarShowSetting* GetUI3DModelShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIdx)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUI3DMODELSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName, showSettingTypeIdx);
		}

		static ::MoleMole::AvatarShowSetting* GetAvatarShowSettingCommon(::System::String* ctrlName, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* UIShowAvatarSettings, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIndex)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETAVATARSHOWSETTINGCOMMON_OFFSET))(ctrlName, UIShowAvatarSettings, ShowTypeIndex, fromTypeName, showSettingTypeIndex);
		}
	};
}
