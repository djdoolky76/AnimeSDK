#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorLayerEmotionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAnimatorLayerEmotion; }

#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC43C10)
#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC43C20)
#define RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC43BD0)

namespace RPG::GameCore
{
	class TriggerAnimatorLayerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimatorLayerEmotionType Type; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* EmotionKey; // 0x28
		::System::Single TransitTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMATORLAYEREMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
