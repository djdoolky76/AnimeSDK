#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondDimensionPointConfig; }

#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFB2C0)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBFB2D0)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBFB280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondDimensionPointConfig_TypeDefinitionIndex = 20128;

	class RogueCondDimensionPointConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondDimensionPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondDimensionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondDimensionPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondDimensionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
