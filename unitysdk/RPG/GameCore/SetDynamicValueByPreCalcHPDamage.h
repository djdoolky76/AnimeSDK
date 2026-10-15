#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SetDynamicValueByPreCalcHPDamage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7A770)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7ACC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7A850)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7A510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPreCalcHPDamage_TypeDefinitionIndex = 23266;

	class SetDynamicValueByPreCalcHPDamage : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* AttackerTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* DefenderTargetType; // 0x30
		::RPG::GameCore::AttackType AttackType; // 0x38
		::RPG::GameCore::AttackDamageType DamageType; // 0x3C
		::RPG::GameCore::AttackFormulaType FormulaType; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* DamagePercentage; // 0x48
		::RPG::GameCore::DynamicFloat* DamageValue; // 0x50
		::RPG::GameCore::DynamicFloat* DamageMulRatio; // 0x58
		::RPG::GameCore::JsonEnum* DamageBehavior; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
