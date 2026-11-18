#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18D74260)
#define MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18D74280)
#define MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18D74270)
#define MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D74250)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainListTagWidgetController_ViewModel_TypeDefinitionIndex = 55976;

	class UIFlowerMainListTagWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Int32>* _Value_k__BackingField; // 0x88

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::LJHFMILANJA_1<::System::Int32>* get_Value()
		{
			return ((::LJHFMILANJA_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::LJHFMILANJA_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINLISTTAGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
