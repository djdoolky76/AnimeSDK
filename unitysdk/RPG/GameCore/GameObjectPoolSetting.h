#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameObjectPoolGroupSetting; }
namespace RPG::GameCore { class GameObjectPoolSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EA360)
#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EA370)
#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EA330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolSetting_TypeDefinitionIndex = 16463;

	class GameObjectPoolSetting : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Int32 MaxSpawnWaitTimeMs; // 0x18
		::System::Int32 BattleMaxSpawnWaitTimeMs; // 0x1C
		::System::Int32 FrameSpawnMaxTimeMs; // 0x20
		::System::Int32 BattleFrameSpawnMaxTimeMs; // 0x24
		::System::Int32 FrameSpawnMaxTimeIncMs; // 0x28
		::System::Int32 FrameSpawnMaxTimeLimitMs; // 0x2C
		::System::Int32 PoolAutoReleaseIntervalMs; // 0x30
		::System::Int32 PoolAutoReleaseMemoryThresh; // 0x34
		::System::Single PoolAutoReleaseMemoryRatioThresh; // 0x38
		::System::Int32 PoolImmediatelyReleaseMemoryThresh; // 0x3C
		::System::Single PoolImmediatelyReleaseMemoryRatioThresh; // 0x40
		::System::Boolean EnableBinaryPrefab; // 0x44
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameObjectPoolGroupSetting*>* GroupSettings; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameObjectPoolSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameObjectPoolSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameObjectPoolSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameObjectPoolSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
