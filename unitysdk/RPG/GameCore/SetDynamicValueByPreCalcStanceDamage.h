#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByPreCalcStanceDamage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8660)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA8AB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA8730)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA8570)

namespace RPG::GameCore
{
	class SetDynamicValueByPreCalcStanceDamage : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* AttackerTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* DefenderTargetType; // 0x30
		::RPG::GameCore::AttackType AttackType; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::AttackDamageTypeConfig* DamageType; // 0x40
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x48
		::System::Boolean AddForceStanceDamageFlag; // 0x50
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreCalcStanceDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRECALCSTANCEDAMAGE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
