#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }

#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6D190)
#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6D0F0)
#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6C450)

namespace RPG::GameCore
{
	class RuanMadeCakeFeatureConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SpaceZooChannelType ChannelType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeatureConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeatureConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeatureConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeatureConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
