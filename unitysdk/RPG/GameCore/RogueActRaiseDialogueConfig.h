#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRaiseDialogueConfig; }

#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9734C0)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9734D0)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRaiseDialogueConfig_TypeDefinitionIndex = 19697;

	class RogueActRaiseDialogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRaiseDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRaiseDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
