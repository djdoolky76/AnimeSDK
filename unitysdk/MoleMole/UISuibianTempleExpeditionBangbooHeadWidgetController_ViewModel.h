#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x105462B0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x105462A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel_TypeDefinitionIndex = 44215;

	class UISuibianTempleExpeditionBangbooHeadWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONBANGBOOHEADWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
