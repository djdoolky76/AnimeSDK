#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyShieldMax; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELDMAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86BC90)
#define RPG_GAMECORE_MODIFYSHIELDMAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86BCA0)
#define RPG_GAMECORE_MODIFYSHIELDMAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyShieldMax_TypeDefinitionIndex = 23119;

	class ModifyShieldMax : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ShieldModifiers; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierCaster; // 0x28
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x30
		::RPG::GameCore::ShieldModifyFormulaType FormulaType; // 0x34
		::RPG::GameCore::DynamicFloat* FormulaValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShieldMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShieldMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDMAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
