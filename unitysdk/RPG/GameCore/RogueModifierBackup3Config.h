#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierBackup3Config; }

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AFD20)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AFD30)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AFCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup3Config_TypeDefinitionIndex = 17999;

	class RogueModifierBackup3Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP3CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
