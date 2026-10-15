#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetImmediateAction; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIMMEDIATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6960)
#define RPG_GAMECORE_SETIMMEDIATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6970)
#define RPG_GAMECORE_SETIMMEDIATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6930)

namespace RPG::GameCore
{
	class SetImmediateAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetImmediateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetImmediateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
