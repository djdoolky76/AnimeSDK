#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActLevelUpRandomRogueMagicUnitWithLevelConfig; }

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970D40)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970D50)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicUnitWithLevelConfig_TypeDefinitionIndex = 19684;

	class RogueActLevelUpRandomRogueMagicUnitWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicUnitWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICUNITWITHLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
