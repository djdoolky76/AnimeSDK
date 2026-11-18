#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEDETAILWIDGETCONTROLLER_DETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13F33870)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeDetailWidgetController_DetailData_TypeDefinitionIndex = 55311;

	class UIAbyssS2RoleChallengeDetailWidgetController_DetailData : public ::System::Object
	{
	public:
		::System::String* titleKey; // 0x10
		::System::String* descKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEDETAILWIDGETCONTROLLER_DETAILDATA__CTOR_OFFSET))(this);
		}
	};
}
