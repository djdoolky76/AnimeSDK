#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }

#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2370)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E2380)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E2300)

namespace RPG::GameCore
{
	class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
