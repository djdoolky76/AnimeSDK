#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDDETAILINFODETAILTEXTWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x171B2DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkbenchTrustDegreeDetailsCardDetailInfoDetailTextWidgetController_Data_TypeDefinitionIndex = 47028;

	class UIWorkbenchTrustDegreeDetailsCardDetailInfoDetailTextWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* text; // 0x10
		::System::Boolean isLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDDETAILINFODETAILTEXTWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
