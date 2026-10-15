#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFinish; }

#define RPG_GAMECORE_ROGUETOURNFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA39380)
#define RPG_GAMECORE_ROGUETOURNFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA39390)
#define RPG_GAMECORE_ROGUETOURNFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA392C0)

namespace RPG::GameCore
{
	class RogueTournFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
