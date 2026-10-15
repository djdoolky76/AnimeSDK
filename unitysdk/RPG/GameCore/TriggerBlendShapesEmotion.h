#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerBlendShapesEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC16E10)
#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC16E20)
#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC16DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBlendShapesEmotion_TypeDefinitionIndex = 21890;

	class TriggerBlendShapesEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
