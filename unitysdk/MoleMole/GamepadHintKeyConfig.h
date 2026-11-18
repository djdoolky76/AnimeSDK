#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOGHOHAGG.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig_NINNGNBJEEG.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

namespace MoleMole
{
	inline static constexpr unsigned int GamepadHintKeyConfig_TypeDefinitionIndex = 60848;

	struct alignas(8) GamepadHintKeyConfig
	{
		::MoleMole::GamepadHintKeyConfig_NINNGNBJEEG keyPanelInsertPosition; // 0x10
		::MoleMole::SpecialGamepadInputHintType specialGamepadInputHint; // 0x14
		::MoleMole::InputLogicEventType logicEvent; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Text* bindedText; // 0x20
		::System::String* textKey; // 0x28
		::System::Boolean IsHideHint; // 0x30
		::System::Boolean handleInput; // 0x31
		::System::Byte _padding1[0x6];
		::UnityEngine::UI::Extension::UIButtonBase* bindedButton; // 0x38
		::System::Boolean hideHintWhenButtonDisable; // 0x40
		::System::Boolean IsHandleLongPress; // 0x41
		::System::Byte _padding2[0x2];
		::Share::ENotificationBadgeType _notificationBadgeType; // 0x44
		::System::String* _notificationKey; // 0x48
		::System::Boolean isLockScInCn; // 0x50
		::System::Byte _padding3[0x7];
		::MoleMole::GamepadNavTargetConfig canNavigateToModuleConfig; // 0x58
		::IJLOGHOHAGG targetModuleHintCheckType; // 0x68
		::System::Boolean hideHintWhenCanNotNavigateTo; // 0x6C
	};
}
