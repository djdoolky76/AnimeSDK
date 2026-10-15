#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerCondHasAvatarConfig; }

#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933820)
#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933830)
#define RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9337E0)

namespace RPG::GameCore
{
	class PlayerCondHasAvatarConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDHASAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
