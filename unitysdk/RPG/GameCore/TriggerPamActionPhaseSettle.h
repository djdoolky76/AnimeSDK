#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamActionPhaseSettle; }

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC565D0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC565E0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseSettle_TypeDefinitionIndex = 20032;

	class TriggerPamActionPhaseSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
