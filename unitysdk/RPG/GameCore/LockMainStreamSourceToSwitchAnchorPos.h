#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockMainStreamSourceToSwitchAnchorPos; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F12F0)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F1300)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F12C0)

namespace RPG::GameCore
{
	class LockMainStreamSourceToSwitchAnchorPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* AnchorConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
