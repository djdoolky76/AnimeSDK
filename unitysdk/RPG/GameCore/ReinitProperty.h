#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ReinitProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REINITPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D977540)
#define RPG_GAMECORE_REINITPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D977550)
#define RPG_GAMECORE_REINITPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReinitProperty_TypeDefinitionIndex = 23562;

	class ReinitProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AbilityProperty Property; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* InitValue; // 0x28
		::RPG::GameCore::DynamicFloat* MinValue; // 0x30
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReinitProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReinitProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReinitProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReinitProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
