#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelShipResetState; }

#define RPG_GAMECORE_TRAVELSHIPRESETSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3CA70)
#define RPG_GAMECORE_TRAVELSHIPRESETSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3CA80)
#define RPG_GAMECORE_TRAVELSHIPRESETSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3CA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipResetState_TypeDefinitionIndex = 20976;

	class TravelShipResetState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ShowToast; // 0x18
		::System::Boolean StopMove; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipResetState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipResetState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipResetState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipResetState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
