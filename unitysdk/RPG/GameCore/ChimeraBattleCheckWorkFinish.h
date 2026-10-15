#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace RPG::GameCore { class ChimeraBattleCheckWorkFinish; }

#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597D20)
#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D597D30)
#define RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599860)

namespace RPG::GameCore
{
	class ChimeraBattleCheckWorkFinish : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraAbilityProgressBase* OnFinish; // 0x18
		::RPG::GameCore::ChimeraAbilityProgressBase* OnNotFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleCheckWorkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleCheckWorkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECHECKWORKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
