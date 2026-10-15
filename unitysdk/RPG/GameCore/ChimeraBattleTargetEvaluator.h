#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleBaseEvaluator.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56BCC0)
#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56BCD0)
#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D569FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleTargetEvaluator_TypeDefinitionIndex = 15835;

	class ChimeraBattleTargetEvaluator : public ::RPG::GameCore::ChimeraBattleBaseEvaluator
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetPrefixType Prefix; // 0x10
		::RPG::GameCore::ChimeraBattleTargetType Target; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
