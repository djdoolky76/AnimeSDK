#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AppPrefs; }
namespace RPG::Client { class SettingsPrefs; }
namespace RPG::Client { class UserPrefs; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_PREFS_AUTOSAVE_OFFSET UNITYSDK_OFFSET(0xE6A6A80)
#define RPG_CLIENT_PREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0xE6A6AE0)
#define RPG_CLIENT_PREFS_FORCESAVE_OFFSET UNITYSDK_OFFSET(0xE6A6670)
#define RPG_CLIENT_PREFS_GET_APP_OFFSET UNITYSDK_OFFSET(0xE690A30)
#define RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xE6A6BC0)
#define RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xE696A60)
#define RPG_CLIENT_PREFS_GET_USER_OFFSET UNITYSDK_OFFSET(0xE68E4A0)
#define RPG_CLIENT_PREFS_RECOVERFROMCLOUD_OFFSET UNITYSDK_OFFSET(0xE6A7010)
#define RPG_CLIENT_PREFS_SET_APP_OFFSET UNITYSDK_OFFSET(0xE6A6B90)
#define RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xE6A6F80)
#define RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xE6A6BB0)
#define RPG_CLIENT_PREFS_SET_USER_OFFSET UNITYSDK_OFFSET(0xE6A6BA0)
#define RPG_CLIENT_PREFS_SWITCHTODEBUGPACKAGEPREFS_OFFSET UNITYSDK_OFFSET(0xE6A6B50)
#define RPG_CLIENT_PREFS_TICKSAVE_OFFSET UNITYSDK_OFFSET(0xE6A66B0)
#define RPG_CLIENT_PREFS__FORCESAVETOCLOUD_OFFSET UNITYSDK_OFFSET(0xE6A6770)
#define RPG_CLIENT_PREFS__FORCESAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xE6A69B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Prefs_TypeDefinitionIndex = 60629;

	class Prefs : public ::System::Object
	{
	public:
		static ::RPG::Client::SettingsPrefs** StaticGet__SettingsPrefs()
		{
			return (::RPG::Client::SettingsPrefs**)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0x4A790);
		}

		static ::RPG::Client::AppPrefs** StaticGet__PackagePrefs()
		{
			return (::RPG::Client::AppPrefs**)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0x4A798);
		}

		static ::RPG::Client::AppPrefs** StaticGet__AppPrefs()
		{
			return (::RPG::Client::AppPrefs**)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0x4A7A0);
		}

		static ::RPG::Client::UserPrefs** StaticGet__UserPrefs()
		{
			return (::RPG::Client::UserPrefs**)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0x4A7A8);
		}

		static ::System::Boolean* StaticGet__NeedSave()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0xF320);
		}

		static ::System::UInt32* StaticGet__UserID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0xF324);
		}

		static ::System::Single* StaticGet__LastSaveTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "Prefs")->GetStaticField(0xF328);
		}

		// static const ::System::Object AutoSaveInterval; // 0x0
		// static const ::System::String* CloudSaveDataKey; // 0x0
		static ::System::Void ForceSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_FORCESAVE_OFFSET))();
		}

		static ::System::Void TickSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_TICKSAVE_OFFSET))();
		}

		static ::System::Void AutoSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_AUTOSAVE_OFFSET))();
		}

		static ::System::Void DeleteAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_DELETEALL_OFFSET))();
		}

		static ::System::Void SwitchToDebugPackagePrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SWITCHTODEBUGPACKAGEPREFS_OFFSET))();
		}

		static ::RPG::Client::AppPrefs* get_App()
		{
			return ((::RPG::Client::AppPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_APP_OFFSET))();
		}

		static ::System::Void set_App(::RPG::Client::AppPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_APP_OFFSET))(a1);
		}

		static ::RPG::Client::UserPrefs* get_User()
		{
			return ((::RPG::Client::UserPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_USER_OFFSET))();
		}

		static ::System::Void set_User(::RPG::Client::UserPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_USER_OFFSET))(a1);
		}

		static ::RPG::Client::SettingsPrefs* get_Settings()
		{
			return ((::RPG::Client::SettingsPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET))();
		}

		static ::System::Void set_Settings(::RPG::Client::SettingsPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SettingsPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET))(a1);
		}

		static ::RPG::Client::AppPrefs* get_Package()
		{
			return ((::RPG::Client::AppPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET))();
		}

		static ::System::Void set_Package(::RPG::Client::AppPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET))(a1);
		}

		static ::System::Void _ForceSaveToLocal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS__FORCESAVETOLOCAL_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* RecoverFromCloud()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_RECOVERFROMCLOUD_OFFSET))();
		}

		static ::System::Void _ForceSaveToCloud()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS__FORCESAVETOCLOUD_OFFSET))();
		}

	};
}
