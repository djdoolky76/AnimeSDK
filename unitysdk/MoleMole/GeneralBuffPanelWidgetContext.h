#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JNPEJGEMEDE;

#define MOLEMOLE_GENERALBUFFPANELWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE55B0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBuffPanelWidgetContext_TypeDefinitionIndex = 45938;

	class GeneralBuffPanelWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNPEJGEMEDE* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBUFFPANELWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
