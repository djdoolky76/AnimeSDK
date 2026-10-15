#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPhaseUIConfig; }

#define RPG_GAMECORE_CHARACTERPHASEUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D576C50)
#define RPG_GAMECORE_CHARACTERPHASEUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D576930)

namespace RPG::GameCore
{
	class CharacterPhaseUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CharacterHUDOffset; // 0x10
		::RPG::MVector3 BuffPanelOffset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPhaseUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPhaseUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
