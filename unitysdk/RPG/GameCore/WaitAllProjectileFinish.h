#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitAllProjectileFinish; }

#define RPG_GAMECORE_WAITALLPROJECTILEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC93400)
#define RPG_GAMECORE_WAITALLPROJECTILEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC93410)
#define RPG_GAMECORE_WAITALLPROJECTILEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC93340)

namespace RPG::GameCore
{
	class WaitAllProjectileFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAllProjectileFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAllProjectileFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAllProjectileFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAllProjectileFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
