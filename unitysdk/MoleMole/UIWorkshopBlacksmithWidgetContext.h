#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class MBHOGLGMFEM;

#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3A980)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopBlacksmithWidgetContext_TypeDefinitionIndex = 39887;

	class UIWorkshopBlacksmithWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MBHOGLGMFEM* storeData; // 0x28
		::Share::EItemType ShowItemType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
