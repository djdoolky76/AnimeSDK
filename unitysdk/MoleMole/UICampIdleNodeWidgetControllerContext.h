#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHGEEOLJKL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17055AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetControllerContext_TypeDefinitionIndex = 56252;

	class UICampIdleNodeWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNHGEEOLJKL m_playType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
