#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddMazeBuffExConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC26A30)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC26A40)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC269F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddMazeBuffExConfig_TypeDefinitionIndex = 18118;

	class RogueModifierAddMazeBuffExConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
