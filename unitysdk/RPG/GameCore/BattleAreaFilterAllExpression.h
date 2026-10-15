#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaFilterAllExpression; }

#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4520A0)
#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4520B0)
#define RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D452060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaFilterAllExpression_TypeDefinitionIndex = 17410;

	class BattleAreaFilterAllExpression : public ::RPG::GameCore::BattleAreaFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAreaFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAreaFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAreaFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAreaFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAFILTERALLEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
