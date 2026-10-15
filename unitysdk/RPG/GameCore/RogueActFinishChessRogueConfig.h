#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActFinishChessRogueConfig; }

#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DBB0)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99DBC0)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActFinishChessRogueConfig_TypeDefinitionIndex = 19638;

	class RogueActFinishChessRogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActFinishChessRogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActFinishChessRogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
