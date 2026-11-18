#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ECEMPOCFOMG;

#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147F5B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemWidgetController_Context_TypeDefinitionIndex = 51894;

	class UIRABGachaItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ECEMPOCFOMG* result; // 0x28
		::System::Int32 poolId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
