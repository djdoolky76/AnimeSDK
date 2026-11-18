#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166EAA10)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingLTRowWidgetController_Context_TypeDefinitionIndex = 72950;

	class UISummerTideTreasureSellingLTRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJGEHPBJKDM WorldHandle; // 0x28
		::Foundation::ViewObject::ViewObjectHandle Order; // 0x38
		::System::Int32 NeedCount; // 0x48
		::GPJMHAAEIKO AttributeName; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
