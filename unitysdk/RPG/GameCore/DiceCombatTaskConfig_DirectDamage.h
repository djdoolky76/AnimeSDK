#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDirectDamageStyle.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_DirectDamage; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3F50)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E3F60)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E3F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_DirectDamage_TypeDefinitionIndex = 16050;

	class DiceCombatTaskConfig_DirectDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::RPG::GameCore::DiceCombatDirectDamageStyle Style; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
