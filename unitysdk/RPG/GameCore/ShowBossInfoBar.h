#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BossInfoBarCustomizedBaseClickConfig; }
namespace RPG::GameCore { class ShowBossInfoBar; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBOSSINFOBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E5260)
#define RPG_GAMECORE_SHOWBOSSINFOBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3E5270)
#define RPG_GAMECORE_SHOWBOSSINFOBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3E5230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBossInfoBar_TypeDefinitionIndex = 23363;

	class ShowBossInfoBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig* ClickConfig; // 0x28
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
