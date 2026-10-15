#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerApplyInMapTeleport; }

#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D905D20)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D905D30)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D905C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerApplyInMapTeleport_TypeDefinitionIndex = 20504;

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
