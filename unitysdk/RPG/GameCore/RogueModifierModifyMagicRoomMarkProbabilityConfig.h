#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyMagicRoomMarkProbabilityConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17F00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17F10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicRoomMarkProbabilityConfig_TypeDefinitionIndex = 17727;

	class RogueModifierModifyMagicRoomMarkProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyMagicRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMMARKPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
