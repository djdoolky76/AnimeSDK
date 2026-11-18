#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASUREPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1718BE70)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasurePreparePageController_Context_TypeDefinitionIndex = 84683;

	class UISummerTideTreasurePreparePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
