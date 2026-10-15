#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameBlockConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D880DB0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D880DC0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D880D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdBlockConfig_TypeDefinitionIndex = 18810;

	class MiniGameFlappyBirdBlockConfig : public ::RPG::GameCore::BaseScrollGameBlockConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
