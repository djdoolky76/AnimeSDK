#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBossInfoBar; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBOSSINFOBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9AA0)
#define RPG_GAMECORE_SHOWBOSSINFOBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9AB0)
#define RPG_GAMECORE_SHOWBOSSINFOBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD9A70)

namespace RPG::GameCore
{
	class ShowBossInfoBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBossInfoBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBossInfoBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBossInfoBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBossInfoBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
