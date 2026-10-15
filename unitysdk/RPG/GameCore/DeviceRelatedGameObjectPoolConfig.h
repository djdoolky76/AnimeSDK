#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedGameObjectPoolConfig; }
namespace RPG::GameCore { class GameObjectPoolSetting; }

#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1A90)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1AA0)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D20E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedGameObjectPoolConfig_TypeDefinitionIndex = 16476;

	class DeviceRelatedGameObjectPoolConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::GameObjectPoolSetting* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
