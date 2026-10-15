#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActLevelUpRandomRogueMagicScepterWithLevelConfig; }

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E640)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E650)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicScepterWithLevelConfig_TypeDefinitionIndex = 19689;

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
