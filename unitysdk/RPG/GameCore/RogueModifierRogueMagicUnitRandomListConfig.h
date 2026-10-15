#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierRogueMagicUnitRandomListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC9A0)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRogueMagicUnitRandomListConfig_TypeDefinitionIndex = 17713;

	class RogueModifierRogueMagicUnitRandomListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRogueMagicUnitRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRogueMagicUnitRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEMAGICUNITRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
