#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EDOGNMJGGKO;

#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x159917E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooSpineWidgetController_Context_TypeDefinitionIndex = 87513;

	class UIDigibooSpineWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EDOGNMJGGKO* MachineBuilder; // 0x28
		::System::Int32 DigibooID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
