#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHGEEOLJKL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLELISTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184884D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleListPopWindowControllerContext_TypeDefinitionIndex = 48368;

	class UICampIdleListPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNHGEEOLJKL m_playType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLELISTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
