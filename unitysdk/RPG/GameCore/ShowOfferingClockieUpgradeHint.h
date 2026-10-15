#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowOfferingClockieUpgradeHint; }

#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4900)
#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB4910)
#define RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB48D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowOfferingClockieUpgradeHint_TypeDefinitionIndex = 21941;

	class ShowOfferingClockieUpgradeHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OfferingTypeID; // 0x18
		::System::UInt32 PhaseID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWOFFERINGCLOCKIEUPGRADEHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
