#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleBaseEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9217B0)
#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F9217C0)
#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F921500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleBaseEvaluator_TypeDefinitionIndex = 15991;

	class ChimeraBattleBaseEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleBaseEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleBaseEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleBaseEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleBaseEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
