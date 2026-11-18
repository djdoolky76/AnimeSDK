#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOREAWARDCOMPONENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18845100)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCoreAwardComponentContext_TypeDefinitionIndex = 91021;

	class UIActivityCoreAwardComponentContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* componentActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOREAWARDCOMPONENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
