#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageKeyboardLayoutType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGEKEYBOARDLAYOUTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4CD70)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageKeyboardLayoutSettingContext_TypeDefinitionIndex = 69649;

	class LanguageKeyboardLayoutSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::LanguageKeyboardLayoutType languageKeyboardLayoutType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGEKEYBOARDLAYOUTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
