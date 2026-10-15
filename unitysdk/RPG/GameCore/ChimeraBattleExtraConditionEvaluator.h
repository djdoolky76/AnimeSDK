#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleExtraPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleExtraTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599990)
#define RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596200)

namespace RPG::GameCore
{
	class ChimeraBattleExtraConditionEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraBattleExtraPrefixType Prefix; // 0x10
		::RPG::GameCore::ChimeraBattleExtraTargetType Target; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
