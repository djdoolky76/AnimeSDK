#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaReplaceRoomCardByCompositionTypeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0080)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0090)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaReplaceRoomCardByCompositionTypeConfig_TypeDefinitionIndex = 19774;

	class RogueActPersonaReplaceRoomCardByCompositionTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
