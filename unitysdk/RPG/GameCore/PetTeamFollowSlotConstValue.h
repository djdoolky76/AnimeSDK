#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSlotConstValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetLineupPlacementConfig; }
namespace RPG::GameCore { class PetTeamFollowSlotConstValue; }

#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90B2C0)
#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90B2D0)
#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90B290)

namespace RPG::GameCore
{
	class PetTeamFollowSlotConstValue : public ::RPG::GameCore::FollowSlotConstValue
	{
	public:
		::RPG::GameCore::PetLineupPlacementConfig* PetLineupPlacement; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetTeamFollowSlotConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetTeamFollowSlotConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetTeamFollowSlotConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetTeamFollowSlotConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
