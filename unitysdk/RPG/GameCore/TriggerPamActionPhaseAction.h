#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamActionPhaseAction; }

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6A190)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE6A1A0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE6A0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseAction_TypeDefinitionIndex = 20365;

	class TriggerPamActionPhaseAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
