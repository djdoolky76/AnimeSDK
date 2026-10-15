#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JKMJGCFCMMC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnInsertAction; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNINSERTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC64A40)
#define RPG_GAMECORE_TURNINSERTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC64AF0)
#define RPG_GAMECORE_TURNINSERTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC64970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAction_TypeDefinitionIndex = 22658;

	class TurnInsertAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomSource; // 0x20
		::System::String* PrepareAbilityName; // 0x28
		::System::String* InsertActionPriority; // 0x30
		::RPG::GameCore::ControlSkillType SkillType; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SkillIndex; // 0x40
		::RPG::GameCore::JsonEnum* SkillTag; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x58
		::System::Boolean PlayReadyCamera; // 0x60
		::System::Boolean PlayReadyAnim; // 0x61
		::System::Boolean CancelPrepareAbilityIfDelayed; // 0x62
		::System::Boolean PlayReadyAnimIfPrepareAbilityCancel; // 0x63
		::System::Boolean CanInsertUltraSkill; // 0x64
		::System::Boolean IsSilence; // 0x65
		::System::Byte _padding1[0x2];
		::RPG::GameCore::ControlSkillType SkillTypeWhenDelayed; // 0x68
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x70
		::System::Boolean AutoCast; // 0x78
		::System::Byte _padding3[0x7];
		::RPG::GameCore::TargetEvaluator* AutoCastTargetType; // 0x80
		::System::Boolean CanRunAfterFightFinish; // 0x88
		::System::Byte _padding4[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x90
		::System::Boolean CopyAbortContext; // 0x98
		::System::Byte _padding5[0x7];
		::Il2CppArray<::RPG::GameCore::DynamicString*>* CustomTags; // 0xA0
		::System::Boolean IgnoreBPDec; // 0xA8
		::System::Boolean IgnoreSPDec; // 0xA9
		::System::Byte _padding6[0x6];
		::RPG::GameCore::DynamicFloat* OverrideElationPoint; // 0xB0
		::System::Boolean FollowSameTagNormalAction; // 0xB8
		::System::Byte _padding7[0x7];
		::RPG::GameCore::TurnInsertActionUIConfig* UIConfig; // 0xC0
		::System::Boolean IgnoreUltraButtonEffect; // 0xC8
		::System::Byte _padding8[0x3];
		::RPG::GameCore::BoolEx OverrideCutIn; // 0xCC
		::JKMJGCFCMMC* PreCheck; // 0xD0
		::RPG::GameCore::PredicateConfig* ActivePredicate; // 0xD8
		::System::String* PendingInsertAbilityPriority; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
