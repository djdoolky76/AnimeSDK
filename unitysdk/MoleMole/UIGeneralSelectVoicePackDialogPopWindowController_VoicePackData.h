#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSelectVoicePackDialogPopWindowController_VoicePackData_TypeDefinitionIndex = 64259;

	struct alignas(8) UIGeneralSelectVoicePackDialogPopWindowController_VoicePackData
	{
		::MoleMole::LanguageVoiceType voiceType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LanguagePath; // 0x18
		::System::String* LanguageName; // 0x20
		::System::Boolean isUsed; // 0x28
	};
}
