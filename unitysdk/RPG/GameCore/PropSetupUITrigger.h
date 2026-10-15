#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropSetupUITrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPUITRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D956A20)
#define RPG_GAMECORE_PROPSETUPUITRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D956A80)
#define RPG_GAMECORE_PROPSETUPUITRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9569A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupUITrigger_TypeDefinitionIndex = 20383;

	class PropSetupUITrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::System::Boolean DestroyAfterTriggered; // 0x20
		::System::Boolean DisableAfterTriggered; // 0x21
		::System::Boolean DisableWhenTriggered; // 0x22
		::System::Byte _padding0[0x5];
		::System::String* ButtonIcon; // 0x28
		::RPG::GameCore::JsonEnum* IconType; // 0x30
		::RPG::Client::TextID ButtonText; // 0x38
		::RPG::GameCore::DynamicString* ButtonTextCustom; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback; // 0x50
		::System::Boolean ForceInteractInDanger; // 0x58
		::System::Boolean ConsiderAngleLimit; // 0x59
		::System::Byte _padding1[0x2];
		::System::Single InteractAngleRange; // 0x5C
		::Il2CppArray<::RPG::GameCore::EntityType>* OverrideTargetTypes; // 0x60
		::System::Boolean TriggerByFakeAvatar; // 0x68
		::System::Boolean SkipFakeAvatar; // 0x69
		::System::Byte _padding2[0x6];
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x70
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupUITrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupUITrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPUITRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
