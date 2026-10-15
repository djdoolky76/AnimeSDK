#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureStackProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESTACKPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A00E0)
#define RPG_GAMECORE_ADVENTURESTACKPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A00F0)
#define RPG_GAMECORE_ADVENTURESTACKPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A00B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStackProperty_TypeDefinitionIndex = 21762;

	class AdventureStackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureAbilityProperty Property; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureStackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureStackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTACKPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
