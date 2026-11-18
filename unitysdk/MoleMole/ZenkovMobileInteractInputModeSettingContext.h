#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EZenkovMobileInteractInputMode.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_ZENKOVMOBILEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3FF10)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovMobileInteractInputModeSettingContext_TypeDefinitionIndex = 42105;

	class ZenkovMobileInteractInputModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::EZenkovMobileInteractInputMode InteractInputMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVMOBILEINTERACTINPUTMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
