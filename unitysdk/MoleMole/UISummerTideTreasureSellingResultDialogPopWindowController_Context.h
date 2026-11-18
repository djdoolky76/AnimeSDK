#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHLILAKNEGM.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1D9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingResultDialogPopWindowController_Context_TypeDefinitionIndex = 61188;

	class UISummerTideTreasureSellingResultDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJGEHPBJKDM WorldHandle; // 0x28
		::BHLILAKNEGM StageType; // 0x38
		::System::Int32 TotalScore; // 0x3C
		::System::Int32 Limit; // 0x40
		::System::Int32 BeforeScore; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
