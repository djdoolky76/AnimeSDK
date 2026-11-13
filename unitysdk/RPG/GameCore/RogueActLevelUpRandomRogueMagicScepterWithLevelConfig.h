#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActLevelUpRandomRogueMagicScepterWithLevelConfig; }

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20735130)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20735140)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207350F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicScepterWithLevelConfig_TypeDefinitionIndex = 20021;

	class RogueActLevelUpRandomRogueMagicScepterWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
