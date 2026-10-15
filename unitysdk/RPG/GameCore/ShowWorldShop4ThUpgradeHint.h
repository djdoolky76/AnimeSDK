#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowWorldShop4ThUpgradeHint; }

#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE8A70)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE8A80)
#define RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE8A40)

namespace RPG::GameCore
{
	class ShowWorldShop4ThUpgradeHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OfferingTypeID; // 0x18
		::System::UInt32 PhaseID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP4THUPGRADEHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
