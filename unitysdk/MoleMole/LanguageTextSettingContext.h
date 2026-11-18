#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGETEXTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162D1F60)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageTextSettingContext_TypeDefinitionIndex = 45955;

	class LanguageTextSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::LanguageType languageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGETEXTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
