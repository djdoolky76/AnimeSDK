#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FCVFilterExpression; }

#define RPG_GAMECORE_FCVFILTEREXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D667E30)
#define RPG_GAMECORE_FCVFILTEREXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D667E40)
#define RPG_GAMECORE_FCVFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D667CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FCVFilterExpression_TypeDefinitionIndex = 17400;

	class FCVFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FCVFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FCVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FCVFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FCVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
