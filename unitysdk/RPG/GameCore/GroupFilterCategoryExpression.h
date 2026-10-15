#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupFilterCategoryExpression; }

#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74AF90)
#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D74AFA0)
#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74AF50)

namespace RPG::GameCore
{
	class GroupFilterCategoryExpression : public ::RPG::GameCore::GroupFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
