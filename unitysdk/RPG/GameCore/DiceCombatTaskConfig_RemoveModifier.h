#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_RemoveModifier; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5540)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5550)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E54F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_RemoveModifier_TypeDefinitionIndex = 16062;

	class DiceCombatTaskConfig_RemoveModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
