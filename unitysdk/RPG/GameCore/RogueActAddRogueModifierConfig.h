#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActAddRogueModifierConfig; }

#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96F7D0)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96F7E0)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96F790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddRogueModifierConfig_TypeDefinitionIndex = 19645;

	class RogueActAddRogueModifierConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
