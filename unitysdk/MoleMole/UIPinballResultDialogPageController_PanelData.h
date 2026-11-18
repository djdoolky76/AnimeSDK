#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147EBE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultDialogPageController_PanelData_TypeDefinitionIndex = 84422;

	class UIPinballResultDialogPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EGAANNPEJCH Rating; // 0x28
		::System::Boolean IsSuccess; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 CurrentBallId; // 0x30
		::System::Int32 TotalScore; // 0x34
		::System::Int32 CurrentLevelId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
