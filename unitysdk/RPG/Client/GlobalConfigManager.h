#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APPPABDOEJN;
namespace RPG::Client { class DesignDataMgr; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7052D0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C704C50)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C704DE0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_ENSURESTARTUPTEXTMAP_OFFSET UNITYSDK_OFFSET(0x1C705450)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C704CE0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1C705140)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET UNITYSDK_OFFSET(0x1C704EC0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7050F0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7050A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalConfigManager_TypeDefinitionIndex = 61325;

	class GlobalConfigManager : public ::System::Object
	{
	public:
		::RPG::Client::DesignDataMgr* DesignDataMgr; // 0x10
		::APPPABDOEJN* LuaBundleMgr; // 0x18
		::System::Boolean IsLoadingDesignData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncLoadStartupConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET))(this);
		}

		::System::Void _LoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET))(this);
		}

		::System::Void UnloadAllConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET))(this, a1);
		}

		::System::Void SyncLoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AsyncLoadAllConfig()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET))(this);
		}

		::System::Void EnsureStartupTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_ENSURESTARTUPTEXTMAP_OFFSET))(this);
		}

	};
}
