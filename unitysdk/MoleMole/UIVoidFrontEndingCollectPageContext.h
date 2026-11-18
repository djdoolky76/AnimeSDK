#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15649A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontEndingCollectPageContext_TypeDefinitionIndex = 40751;

	class UIVoidFrontEndingCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean OnlyShowMedalBtn; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 EntranceId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
