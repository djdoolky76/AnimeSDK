#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEmoGraphAlwaysEvaluate; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF6C0)
#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAF6D0)
#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAF690)

namespace RPG::GameCore
{
	class SetEmoGraphAlwaysEvaluate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlwaysEvaluate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
