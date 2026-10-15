#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierBackup2Config; }

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AFCC0)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AFCD0)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AFC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup2Config_TypeDefinitionIndex = 17998;

	class RogueModifierBackup2Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP2CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
