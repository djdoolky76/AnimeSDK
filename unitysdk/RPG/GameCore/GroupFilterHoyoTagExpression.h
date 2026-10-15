#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupFilterHoyoTagExpression; }

#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71D6A0)
#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71D6B0)
#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71D6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFilterHoyoTagExpression_TypeDefinitionIndex = 17396;

	class GroupFilterHoyoTagExpression : public ::RPG::GameCore::GroupFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
