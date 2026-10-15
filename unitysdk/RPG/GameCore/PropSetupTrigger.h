#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropSetupTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D955A90)
#define RPG_GAMECORE_PROPSETUPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D955AC0)
#define RPG_GAMECORE_PROPSETUPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D955A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupTrigger_TypeDefinitionIndex = 20353;

	class PropSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsSingle; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EntityType TargetEntityType; // 0x24
		::RPG::GameCore::DynamicFloat* TargetGroupID; // 0x28
		::RPG::GameCore::DynamicFloat* TargetID; // 0x30
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x38
		::System::String* ColliderRelativePath; // 0x40
		::System::Boolean DestroyAfterTriggered; // 0x48
		::System::Boolean DisableAfterTriggered; // 0x49
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x58
		::System::Boolean BlockDialogueInRange; // 0x60
		::System::Boolean DestroyAfterGraphEnd; // 0x61
		::System::Boolean TriggerByFakeAvatar; // 0x62
		::System::Boolean SkipFakeAvatar; // 0x63
		::System::Byte _padding2[0x4];
		::RPG::GameCore::PredicateConfig* OnExitFilter; // 0x68
		::System::Boolean BlockChangeFakeAvatarCallback; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
