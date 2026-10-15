#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class StartBattleQTE; }

#define RPG_GAMECORE_STARTBATTLEQTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEE880)
#define RPG_GAMECORE_STARTBATTLEQTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEE890)
#define RPG_GAMECORE_STARTBATTLEQTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEE850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattleQTE_TypeDefinitionIndex = 23342;

	class StartBattleQTE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleQTEBaseConfig* QTEConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattleQTE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattleQTE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartBattleQTE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartBattleQTE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
