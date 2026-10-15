#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ApplyOpponentCurveAction; }

#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A530)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84A540)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84A4E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyOpponentCurveAction_TypeDefinitionIndex = 24898;

	class ApplyOpponentCurveAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CurveID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
