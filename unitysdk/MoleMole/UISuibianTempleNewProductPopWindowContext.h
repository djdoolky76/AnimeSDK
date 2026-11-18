#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166E3810)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleNewProductPopWindowContext_TypeDefinitionIndex = 41934;

	class UISuibianTempleNewProductPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 productID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
