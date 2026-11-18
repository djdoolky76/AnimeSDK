#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EZenkovConsoleInteractInputMode.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_ZENKOVCONSOLEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5D9C0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovConsoleInteractInputModeSettingContext_TypeDefinitionIndex = 70615;

	class ZenkovConsoleInteractInputModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::EZenkovConsoleInteractInputMode InteractInputMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCONSOLEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
