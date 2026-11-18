#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_BOOLSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFA89EC0)

namespace MoleMole
{
	inline static constexpr unsigned int BoolSettingContext_TypeDefinitionIndex = 57149;

	class BoolSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsEnable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BOOLSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
