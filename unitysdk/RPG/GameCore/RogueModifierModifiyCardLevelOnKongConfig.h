#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifiyCardLevelOnKongConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17440)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17450)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyCardLevelOnKongConfig_TypeDefinitionIndex = 17824;

	class RogueModifierModifiyCardLevelOnKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
