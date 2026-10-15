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

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8010)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA8560)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA80F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCHPDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA7DB0)

namespace RPG::GameCore
{
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
