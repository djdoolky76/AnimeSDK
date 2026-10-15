#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierWorkbenchReforgeExtraFreeCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AD00)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1AD10)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1ACC0)

namespace RPG::GameCore
{
	class RogueModifierWorkbenchReforgeExtraFreeCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWorkbenchReforgeExtraFreeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGEEXTRAFREECOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
