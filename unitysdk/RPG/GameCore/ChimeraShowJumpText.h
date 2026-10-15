#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraShowJumpText; }

#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AEAC0)
#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AEAD0)
#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AEA70)

namespace RPG::GameCore
{
	class ChimeraShowJumpText : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraShowJumpText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraShowJumpText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraShowJumpText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraShowJumpText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
