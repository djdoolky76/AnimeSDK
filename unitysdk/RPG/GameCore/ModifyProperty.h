#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D898660)
#define RPG_GAMECORE_MODIFYPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D898670)
#define RPG_GAMECORE_MODIFYPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D898620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyProperty_TypeDefinitionIndex = 23563;

	class ModifyProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IncludeLimbo; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AbilityProperty Property; // 0x24
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
