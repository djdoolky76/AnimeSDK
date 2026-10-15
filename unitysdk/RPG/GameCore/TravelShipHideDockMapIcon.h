#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TravelShipHideDockMapIcon; }

#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0E840)
#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC0E870)
#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC0E7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipHideDockMapIcon_TypeDefinitionIndex = 20977;

	class TravelShipHideDockMapIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideDockMapIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideDockMapIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideDockMapIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideDockMapIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
