#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarTransitionConfig; }
namespace RPG::GameCore { class CustomMazeBattleTransitionConfig; }

#define RPG_GAMECORE_AVATARTRANSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D431520)
#define RPG_GAMECORE_AVATARTRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D431430)

namespace RPG::GameCore
{
	class AvatarTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CustomMazeBattleTransitionConfig*>* MazeBattleTransitions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARTRANSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarTransitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarTransitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARTRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
