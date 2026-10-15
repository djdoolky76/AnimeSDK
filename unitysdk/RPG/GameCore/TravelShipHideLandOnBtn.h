#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TravelShipHideLandOnBtn; }

#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3C2F0)
#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3C320)
#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3C2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipHideLandOnBtn_TypeDefinitionIndex = 20978;

	class TravelShipHideLandOnBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideLandOnBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideLandOnBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideLandOnBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideLandOnBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
