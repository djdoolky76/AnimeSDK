#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JNAHOHABAIC;

#define MOLEMOLE_UIJOURNEYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190320A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIJourneyWidgetContext_TypeDefinitionIndex = 90079;

	class UIJourneyWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JNAHOHABAIC* treeNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
