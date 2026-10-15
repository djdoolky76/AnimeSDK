#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerApplyInMapTeleport; }

#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933690)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9336A0)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9335D0)

namespace RPG::GameCore
{
	class PlayerApplyInMapTeleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerApplyInMapTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerApplyInMapTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerApplyInMapTeleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerApplyInMapTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
