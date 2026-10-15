#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierConfig; }
namespace RPG::GameCore { class RogueModifierListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17390)
#define RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17300)

namespace RPG::GameCore
{
	class RogueModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueModifierConfig*>* ModifierList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
