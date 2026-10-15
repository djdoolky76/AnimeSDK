#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackShield; }

#define RPG_GAMECORE_STACKSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD66E0)
#define RPG_GAMECORE_STACKSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6700)
#define RPG_GAMECORE_STACKSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackShield_TypeDefinitionIndex = 23601;

	class StackShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunc; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* StackValue; // 0x20
		::RPG::GameCore::ShieldModifyFormulaType CalculateFormula_StackValue; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* MaxStack; // 0x30
		::RPG::GameCore::ShieldModifyFormulaType CalculateFormula_MaxStack; // 0x38
		::System::Boolean ShowText; // 0x3C
		::System::Byte _padding2[0x3];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
