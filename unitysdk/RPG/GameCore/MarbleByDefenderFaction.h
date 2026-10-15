#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByDefenderFaction; }

#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8398C0)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8398D0)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D839870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFaction_TypeDefinitionIndex = 16878;

	class MarbleByDefenderFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByDefenderFaction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByDefenderFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByDefenderFaction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByDefenderFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
