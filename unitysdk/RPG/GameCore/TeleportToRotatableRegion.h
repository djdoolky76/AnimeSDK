#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TeleportToRotatableRegion; }

#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB52080)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB52090)
#define RPG_GAMECORE_TELEPORTTOROTATABLEREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB52050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportToRotatableRegion_TypeDefinitionIndex = 20917;

	class TeleportToRotatableRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TargetRegionIndex; // 0x18
		::RPG::GameCore::DynamicFloat* TargetAnchorGroupID; // 0x20
		::RPG::GameCore::DynamicFloat* TargetAnchorInstanceID; // 0x28
		::RPG::GameCore::DynamicString* SpecialPerformType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOROTATABLEREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
