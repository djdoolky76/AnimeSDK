#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_AttributeValueWhenEnterBattle; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589940)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D589950)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5898F0)

namespace RPG::GameCore
{
	class ChenLingBattleValueGetter_AttributeValueWhenEnterBattle : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AttributeValueWhenEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ATTRIBUTEVALUEWHENENTERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
