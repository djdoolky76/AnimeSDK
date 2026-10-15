#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReactionTaskConfig; }

#define RPG_GAMECORE_REACTIONTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9653B0)
#define RPG_GAMECORE_REACTIONTASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96F840)
#define RPG_GAMECORE_REACTIONTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96F620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReactionTaskConfig_TypeDefinitionIndex = 20041;

	class ReactionTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReactionTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReactionTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReactionTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReactionTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONTASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
