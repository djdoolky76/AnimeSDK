#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x1986E9C0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1986E9E0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET UNITYSDK_OFFSET(0x1986E9D0)
#define MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1986DCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTabWidgetController_ViewModel_TypeDefinitionIndex = 38480;

	class UIFlowerMainTabWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Boolean>* _Select_k__BackingField; // 0x88

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_Select()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_GET_SELECT_OFFSET))(this);
		}

		::System::Void set_Select(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_SET_SELECT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTABWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
