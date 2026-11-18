#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPARTNERDATEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17B94990)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageContext_TypeDefinitionIndex = 56714;

	class UIPartnerDatePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitPartnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
