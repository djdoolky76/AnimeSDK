#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartLimaoDropMoveAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DE690)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DE6A0)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DE660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartLimaoDropMoveAction_TypeDefinitionIndex = 18690;

	class FiveDimStartLimaoDropMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Gravity; // 0x10
		::System::Single Radius; // 0x14
		::System::Single Speed; // 0x18
		::System::Single MaxDropDistance; // 0x1C
		::RPG::GameCore::LittleGameEvent* OnDropEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
