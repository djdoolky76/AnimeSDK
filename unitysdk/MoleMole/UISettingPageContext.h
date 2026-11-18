#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14812FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageContext_TypeDefinitionIndex = 84746;

	class UISettingPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean PopRoulettSetting; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::ESystemSettingType ShowPageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
