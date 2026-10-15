#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyTeamBoostPoint; }
namespace RPG::GameCore { class SpecialBpFeature; }

#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89B170)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89B180)
#define RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89B130)

namespace RPG::GameCore
{
	class ModifyTeamBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::SpecialBpFeature* OverrideBpFeature; // 0x28
		::System::Boolean IsSilence; // 0x30
		::System::Boolean AllowDarkTeamModifyToNegative; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYTEAMBOOSTPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
