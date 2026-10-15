#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveMazeBuffConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1000)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1010)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveMazeBuffConfig_TypeDefinitionIndex = 19629;

	class RogueActRemoveMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
