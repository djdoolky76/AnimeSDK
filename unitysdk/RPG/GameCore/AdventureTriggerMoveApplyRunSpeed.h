#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerMove.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTriggerMoveApplyRunSpeed; }

#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2470)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A24D0)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A2A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMoveApplyRunSpeed_TypeDefinitionIndex = 20185;

	class AdventureTriggerMoveApplyRunSpeed : public ::RPG::GameCore::AdventureTriggerMove
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEAPPLYRUNSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
