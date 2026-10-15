#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionApplyMoveStateInGridMoveDirection; }

#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D547FB0)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D547FC0)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D547F60)

namespace RPG::GameCore
{
	class CakeRaceActionApplyMoveStateInGridMoveDirection : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceMoveState MoveState; // 0x10
		::RPG::GameCore::CakeRaceMoveState EnableOnPreMoveState; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
