#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueMagicUnitConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20734E30)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20734E40)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20734DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitConfig_TypeDefinitionIndex = 20009;

	class RogueActGetRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
