#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActReplaceRogueMagicScepterConfig; }

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1600)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1610)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A15C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueMagicScepterConfig_TypeDefinitionIndex = 19698;

	class RogueActReplaceRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
