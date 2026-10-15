#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMinionDestroySelfAction; }

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AC70)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69AC80)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69ABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroySelfAction_TypeDefinitionIndex = 18744;

	class FiveDimMinionDestroySelfAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean WithDither; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
