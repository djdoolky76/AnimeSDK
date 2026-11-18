#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLDACECJJCF_MLOOEBLOGFA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D56BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightPreparePageContext_TypeDefinitionIndex = 72117;

	class UIScaryNightPreparePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean HideShopButton; // 0x28
		::System::Byte _padding0[0x3];
		::JLDACECJJCF_MLOOEBLOGFA InitialState; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
