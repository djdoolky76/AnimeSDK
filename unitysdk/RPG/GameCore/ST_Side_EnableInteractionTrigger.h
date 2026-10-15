#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_EnableInteractionTrigger; }

#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA55BF0)
#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA55C00)
#define RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA55B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_EnableInteractionTrigger_TypeDefinitionIndex = 20140;

	class ST_Side_EnableInteractionTrigger : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEINTERACTIONTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
