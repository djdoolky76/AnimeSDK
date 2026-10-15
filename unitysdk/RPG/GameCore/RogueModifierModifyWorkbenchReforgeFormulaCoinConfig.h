#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchReforgeFormulaCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB740)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB750)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeFormulaCoinConfig_TypeDefinitionIndex = 17882;

	class RogueModifierModifyWorkbenchReforgeFormulaCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
