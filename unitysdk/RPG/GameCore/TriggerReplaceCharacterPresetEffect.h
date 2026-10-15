#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerReplaceCharacterPresetEffect; }

#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57FC0)
#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57FF0)
#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC57F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerReplaceCharacterPresetEffect_TypeDefinitionIndex = 20267;

	class TriggerReplaceCharacterPresetEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Preset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
