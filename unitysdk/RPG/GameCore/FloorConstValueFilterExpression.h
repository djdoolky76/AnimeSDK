#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorConstValueFilterExpression; }

#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4DB0)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E4F00)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E4DC0)

namespace RPG::GameCore
{
	class FloorConstValueFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorConstValueFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorConstValueFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorConstValueFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorConstValueFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
