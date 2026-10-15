#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionNoneConfig; }

#define RPG_GAMECORE_ACTIONNONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D345850)
#define RPG_GAMECORE_ACTIONNONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D345860)
#define RPG_GAMECORE_ACTIONNONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D345780)

namespace RPG::GameCore
{
	class ActionNoneConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionNoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionNoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
