#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishHitStateImmediately; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9300)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9310)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A92D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishHitStateImmediately_TypeDefinitionIndex = 23457;

	class FinishHitStateImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
