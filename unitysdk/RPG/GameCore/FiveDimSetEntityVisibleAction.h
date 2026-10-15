#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }

#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ABF70)
#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ABF80)
#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ABEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetEntityVisibleAction_TypeDefinitionIndex = 18683;

	class FiveDimSetEntityVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
