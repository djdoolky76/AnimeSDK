#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierBackup1Config; }

#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD5C0)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD5D0)
#define RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierBackup1Config_TypeDefinitionIndex = 17997;

	class RogueModifierBackup1Config : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERBACKUP1CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
