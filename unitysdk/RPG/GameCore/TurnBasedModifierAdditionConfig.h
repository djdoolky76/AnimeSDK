#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierEventFilterMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierValueBindData; }
namespace RPG::GameCore { class SubModifierData; }
namespace RPG::GameCore { class TurnBasedModifierAdditionConfig; }
namespace RPG::GameCore { class TurnBasedModifierDependencyConfig; }

#define RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC62370)
#define RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC62140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierAdditionConfig_TypeDefinitionIndex = 18230;

	class TurnBasedModifierAdditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierEventFilterMask FilterMask; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TurnBasedModifierDependencyConfig* DependencyOnAdd; // 0x18
		::RPG::GameCore::TurnBasedModifierDependencyConfig* DependencyOnRemove; // 0x20
		::Il2CppArray<::RPG::GameCore::SubModifierData*>* SubModifierList; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierValueBindData*>* ValueBindList; // 0x30
		::System::Boolean InfectAddSubModifier; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedModifierAdditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedModifierAdditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERADDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
