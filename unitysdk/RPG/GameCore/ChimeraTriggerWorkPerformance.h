#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTriggerWorkPerformance; }

#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5830C0)
#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5830D0)
#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTriggerWorkPerformance_TypeDefinitionIndex = 15869;

	class ChimeraTriggerWorkPerformance : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerWorkPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerWorkPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerWorkPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerWorkPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
