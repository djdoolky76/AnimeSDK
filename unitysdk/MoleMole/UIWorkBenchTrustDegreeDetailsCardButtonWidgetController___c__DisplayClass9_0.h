#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessageContext; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBUTTONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E3E000)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBUTTONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONCLICKGOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x14E3E010)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardButtonWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 65191;

	class UIWorkBenchTrustDegreeDetailsCardButtonWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageContext* messageContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBUTTONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBUTTONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONCLICKGOBTN_B__0_OFFSET))(this);
		}
	};
}
