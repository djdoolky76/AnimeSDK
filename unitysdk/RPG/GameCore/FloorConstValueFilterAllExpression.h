#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorConstValueFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorConstValueFilterAllExpression; }

#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7310)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B7320)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B72D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorConstValueFilterAllExpression_TypeDefinitionIndex = 17407;

	class FloorConstValueFilterAllExpression : public ::RPG::GameCore::FloorConstValueFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorConstValueFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorConstValueFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorConstValueFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorConstValueFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
