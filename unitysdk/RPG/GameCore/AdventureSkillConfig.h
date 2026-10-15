#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/CostMpPhase.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUseType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class AdventureSkillTargetConfig; }
namespace RPG::GameCore { class SkillRangeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FDE0)
#define RPG_GAMECORE_ADVENTURESKILLCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D39FA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillConfig_TypeDefinitionIndex = 17509;

	class AdventureSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean CanCastWithoutTarget; // 0x18
		::System::Boolean SubmitSkillWhenCast; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AdventureSkillType AdventureSkillType; // 0x1C
		::RPG::GameCore::SkillUseType UseType; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::AdventureSkillTargetConfig* TargetInfo; // 0x28
		::System::String* EntryAbility; // 0x30
		::RPG::GameCore::SkillRangeConfig* RangeConfig; // 0x38
		::System::Single CoolDown; // 0x40
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::String*>* CustomSkillAnimStates; // 0x48
		::RPG::GameCore::CostMpPhase SkillCostMpPhase; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
