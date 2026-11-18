#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FLOMKKHDOFB;

#define MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16780910)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelFightingContext_TypeDefinitionIndex = 79051;

	class UIRepelFightingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FLOMKKHDOFB* groupData; // 0x28
		::System::Int32 focusLevelIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
