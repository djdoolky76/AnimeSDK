#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDMNFDCNFPM_CGBNNDKNPEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F909E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusCollectWidgetController_Context_TypeDefinitionIndex = 90559;

	class UIVirusCollectWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EDMNFDCNFPM_CGBNNDKNPEA levelType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
