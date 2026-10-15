#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTargetHPBar; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWTARGETHPBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE5E30)
#define RPG_GAMECORE_SHOWTARGETHPBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE5E40)
#define RPG_GAMECORE_SHOWTARGETHPBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE5E00)

namespace RPG::GameCore
{
	class ShowTargetHPBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTargetHPBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTargetHPBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTargetHPBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTargetHPBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
