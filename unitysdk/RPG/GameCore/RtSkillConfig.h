#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtSkillUseType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIConfigEx; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class RtSkillExtraConfigBase; }
namespace RPG::GameCore { class RtSkillPropertyConfig; }
namespace RPG::GameCore { class RtSkillTargetInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RTSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA36550)
#define RPG_GAMECORE_RTSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA35F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillConfig_TypeDefinitionIndex = 17673;

	class RtSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::SkillType SkillType; // 0x18
		::RPG::GameCore::RtSkillUseType UseType; // 0x1C
		::RPG::GameCore::RtSkillTargetInfo* TargetInfo; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* Tags; // 0x28
		::RPG::GameCore::PredicateConfig* UsableCondition; // 0x30
		::System::String* EntryAbility; // 0x38
		::System::Boolean BindAttackSpeed; // 0x40
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint DefaultDuration; // 0x48
		::RPG::GameCore::FixPoint CD; // 0x50
		::RPG::GameCore::FixPoint CastDistance; // 0x58
		::Il2CppArray<::RPG::GameCore::RtSkillPropertyConfig*>* Properties; // 0x60
		::RPG::GameCore::RtSkillExtraConfigBase* ExtraConfig; // 0x68
		::RPG::GameCore::ComplexSkillAIConfigEx* SkillTargetAI; // 0x70
		::Il2CppArray<::RPG::GameCore::FixPoint>* StanceParams; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
