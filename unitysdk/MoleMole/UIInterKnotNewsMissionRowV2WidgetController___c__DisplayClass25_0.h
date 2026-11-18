#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIODKPBHOEB;

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183CFCF0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__SETMISSIONITEMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x183CFD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowV2WidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 38241;

	class UIInterKnotNewsMissionRowV2WidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetMissionItemSelect_b__0(::MIODKPBHOEB* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIODKPBHOEB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWV2WIDGETCONTROLLER___C__DISPLAYCLASS25_0__SETMISSIONITEMSELECT_B__0_OFFSET))(this, a);
		}
	};
}
