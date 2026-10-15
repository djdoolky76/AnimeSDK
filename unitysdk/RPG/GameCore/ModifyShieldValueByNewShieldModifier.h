#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyShieldValueByNewShieldModifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D899980)
#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8999F0)
#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8998F0)

namespace RPG::GameCore
{
	class ModifyShieldValueByNewShieldModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TargetModifierName; // 0x20
		::System::String* NewModifierName; // 0x28
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Percentage; // 0x38
		::System::Boolean EnableSame; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
