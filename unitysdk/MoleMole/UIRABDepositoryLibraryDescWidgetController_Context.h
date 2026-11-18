#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CANOPECPHCD;

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBB650)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryDescWidgetController_Context_TypeDefinitionIndex = 81113;

	class UIRABDepositoryLibraryDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CANOPECPHCD* FactorData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
