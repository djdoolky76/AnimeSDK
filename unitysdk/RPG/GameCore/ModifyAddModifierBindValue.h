#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ModifyAddModifierBindValue; }

#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890190)
#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8901A0)
#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D890160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAddModifierBindValue_TypeDefinitionIndex = 23707;

	class ModifyAddModifierBindValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueKey; // 0x18
		::RPG::GameCore::DynamicString* TargetModifierName; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* TargetBehaviorFlagList; // 0x28
		::System::Boolean IsRevert; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* ChanceRatio; // 0x38
		::RPG::GameCore::DynamicFloat* ChanceDelta; // 0x40
		::RPG::GameCore::DynamicFloat* LifeTimeRatio; // 0x48
		::RPG::GameCore::DynamicFloat* LifeTimeDelta; // 0x50
		::RPG::GameCore::DynamicFloat* MaxLayerRatio; // 0x58
		::RPG::GameCore::DynamicFloat* MaxLayerDelta; // 0x60
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackRatio; // 0x68
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackDelta; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAddModifierBindValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAddModifierBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAddModifierBindValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAddModifierBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
