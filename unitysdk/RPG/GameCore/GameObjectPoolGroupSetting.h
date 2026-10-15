#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameObjectPoolGroupSetting; }

#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D717DA0)
#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7179D0)

namespace RPG::GameCore
{
	class GameObjectPoolGroupSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 AutoReleaseInstanceCount; // 0x10
		::System::Int32 BattleAutoReleaseInstanceCount; // 0x14
		::System::Boolean AutoReleaseCacheInstance; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 PoolAutoReleaseCacheInstanceThresh; // 0x1C
		::System::Single PoolAutoReleaseCacheInstanceRatio; // 0x20
		::System::Int32 BattlePoolAutoReleaseCacheInstanceThresh; // 0x24
		::System::Single BattlePoolAutoReleaseCacheInstanceRatio; // 0x28
		::System::Int32 DisablePreloadCache; // 0x2C
		::System::Int32 UnusedPoolCacheCount; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameObjectPoolGroupSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameObjectPoolGroupSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
