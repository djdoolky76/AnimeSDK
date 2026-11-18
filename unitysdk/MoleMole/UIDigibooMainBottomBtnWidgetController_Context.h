#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNPEPDJDNPD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15991220)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooMainBottomBtnWidgetController_Context_TypeDefinitionIndex = 61670;

	class UIDigibooMainBottomBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ConfigID; // 0x28
		::LNPEPDJDNPD Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
