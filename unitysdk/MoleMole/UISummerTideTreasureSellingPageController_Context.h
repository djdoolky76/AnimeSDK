#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBA740)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingPageController_Context_TypeDefinitionIndex = 69145;

	class UISummerTideTreasureSellingPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJGEHPBJKDM WorldHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
