#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleBaseEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleEffectEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599660)
#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D599670)
#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5998C0)

namespace RPG::GameCore
{
	class ChimeraBattleEffectEvaluator : public ::RPG::GameCore::ChimeraBattleBaseEvaluator
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleEffectEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleEffectEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleEffectEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleEffectEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
