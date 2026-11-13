#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD16DE0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1BD16E10)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOptConfig_TypeDefinitionIndex = 42564;

	class AssetOptConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableAssetRef; // 0x10
		::System::Boolean IsEnableLimitMaxAsyncLoadCount; // 0x11
		::System::Boolean EnableLimitFrameUnload; // 0x12
		::System::Boolean EnableHighBackgroundThreadPriority; // 0x13
		::System::Boolean AllowEnableAssetInEachBatch; // 0x14
		::System::Boolean EnableHighBundleOptThreadPriority; // 0x15
		::System::Byte _padding0[0x2];
		::System::Int32 CustomUpdatePreloadTimeMs; // 0x18
		::System::Boolean EnablePrecache; // 0x1C
		::System::Boolean EnableLoadAssetOneTime; // 0x1D
		::System::Boolean EnableHighAssetOptThreadPriority; // 0x1E
		::System::Boolean ChangeBgJobQueueMaximumActiveThreadCount; // 0x1F
		::System::Int32 BgJobQueueMaximumActiveThreadCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void LogInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOPTCONFIG_LOGINFO_OFFSET))(this);
		}

	};
}
