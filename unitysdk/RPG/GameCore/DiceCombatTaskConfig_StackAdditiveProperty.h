#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_StackAdditiveProperty; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613640)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613650)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6135F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StackAdditiveProperty_TypeDefinitionIndex = 16088;

	class DiceCombatTaskConfig_StackAdditiveProperty : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAdditivePropertyType AdditiveProperty; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
