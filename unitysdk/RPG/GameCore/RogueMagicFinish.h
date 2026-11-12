#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicFinish; }

#define RPG_GAMECORE_ROGUEMAGICFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1DC00)
#define RPG_GAMECORE_ROGUEMAGICFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC1DC10)
#define RPG_GAMECORE_ROGUEMAGICFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC1DB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicFinish_TypeDefinitionIndex = 22528;

	class RogueMagicFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
