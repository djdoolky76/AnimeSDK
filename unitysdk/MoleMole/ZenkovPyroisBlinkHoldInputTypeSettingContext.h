#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EZenkovPyroisBlinkHoldInputType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_ZENKOVPYROISBLINKHOLDINPUTTYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5D9E0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovPyroisBlinkHoldInputTypeSettingContext_TypeDefinitionIndex = 88671;

	class ZenkovPyroisBlinkHoldInputTypeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::EZenkovPyroisBlinkHoldInputType BlinkHoldInputType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVPYROISBLINKHOLDINPUTTYPESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
