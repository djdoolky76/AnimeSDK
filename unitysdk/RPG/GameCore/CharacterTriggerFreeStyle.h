#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterTriggerFreeStyle; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C350)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_IACFALNNPHJ_OFFSET UNITYSDK_OFFSET(0x1D54C7D0)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54C360)
#define RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterTriggerFreeStyle_TypeDefinitionIndex = 21907;

	class CharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x20
		::System::Boolean ForceStart; // 0x28
		::System::Boolean FastStartWhenNotForceStart; // 0x29
		::System::Boolean AutoExitToDefault; // 0x2A
		::System::Boolean DisableAnimEvent; // 0x2B
		::System::Byte _padding0[0x4];
		::System::String* StoryAvatarID; // 0x30
		::System::Single NormalizedTimeWait; // 0x38
		::System::Single NormalizedTimeStart; // 0x3C
		::System::Single NormalizedTransitionDuration; // 0x40
		::System::UInt32 StoryMotionID; // 0x44
		::System::String* LayerName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean IACFALNNPHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERFREESTYLE_IACFALNNPHJ_OFFSET))(this);
		}

	};
}
