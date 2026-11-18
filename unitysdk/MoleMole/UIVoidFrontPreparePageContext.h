#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F91A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontPreparePageContext_TypeDefinitionIndex = 61012;

	class UIVoidFrontPreparePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 battleId; // 0x28
		::System::Boolean showMainBtn; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
