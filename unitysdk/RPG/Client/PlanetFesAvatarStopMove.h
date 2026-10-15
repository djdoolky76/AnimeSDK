#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlanetFesAvatarStopMove; }

#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D329190)
#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3291A0)
#define RPG_CLIENT_PLANETFESAVATARSTOPMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D329160)

namespace RPG::Client
{
	class PlanetFesAvatarStopMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetPosition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesAvatarStopMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesAvatarStopMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesAvatarStopMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesAvatarStopMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARSTOPMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
