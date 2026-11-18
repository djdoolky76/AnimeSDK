#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLBOCPNMMOH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DCFKHKBLIMA;

#define MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18245200)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementUpRowWidgetController_Context_TypeDefinitionIndex = 45064;

	class UIRABDepositoryElementUpRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DCFKHKBLIMA* BuddyData; // 0x28
		::System::Int32 AfterStar; // 0x30
		::DLBOCPNMMOH AttrId; // 0x34
		::System::Boolean Empty; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 BeforeStar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTUPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
