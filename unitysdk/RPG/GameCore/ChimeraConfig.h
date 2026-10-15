#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityList; }
namespace RPG::GameCore { class ChimeraConfig; }
namespace RPG::GameCore { class ChimeraEventHandlers; }
namespace RPG::GameCore { class ChimeraLevelStatus; }
namespace RPG::GameCore { class ChimeraTalkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599E90)
#define RPG_GAMECORE_CHIMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599D10)

namespace RPG::GameCore
{
	class ChimeraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityList* AbilityConfig; // 0x10
		::RPG::GameCore::ChimeraLevelStatus* StatusConfig; // 0x18
		::RPG::GameCore::ChimeraTalkConfig* Talks; // 0x20
		::System::String* LeavePerformance; // 0x28
		::RPG::GameCore::ChimeraEventHandlers* EventHandlers; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
