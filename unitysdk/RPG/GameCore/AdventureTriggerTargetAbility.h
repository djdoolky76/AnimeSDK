#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTriggerTargetAbility; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0B30)
#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3D0B70)
#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D0AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerTargetAbility_TypeDefinitionIndex = 20205;

	class AdventureTriggerTargetAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AbilityName; // 0x28
		::RPG::GameCore::TargetEvaluator* AbilityTargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerTargetAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerTargetAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerTargetAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerTargetAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
