#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIMonopolyTryTriggerTeleport; }

#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE824A0)
#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE824B0)
#define RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE823E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyTryTriggerTeleport_TypeDefinitionIndex = 22116;

	class UIMonopolyTryTriggerTeleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYTRYTRIGGERTELEPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
