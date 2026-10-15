#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyShield; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D899200)
#define RPG_GAMECORE_MODIFYSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D899210)
#define RPG_GAMECORE_MODIFYSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8991C0)

namespace RPG::GameCore
{
	class ModifyShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ShieldModifiers; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierCaster; // 0x28
		::System::Boolean AllowExpandMax; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x34
		::RPG::GameCore::ShieldModifyFormulaType FormulaType; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* FormulaValue; // 0x40
		::System::Boolean ShowText; // 0x48
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
