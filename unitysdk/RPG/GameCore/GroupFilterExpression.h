#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupFilterExpression; }

#define RPG_GAMECORE_GROUPFILTEREXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C8D0)
#define RPG_GAMECORE_GROUPFILTEREXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA6CA40)
#define RPG_GAMECORE_GROUPFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA6C8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFilterExpression_TypeDefinitionIndex = 17563;

	class GroupFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
