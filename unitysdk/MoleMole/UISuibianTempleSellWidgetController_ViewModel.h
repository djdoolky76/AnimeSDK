#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
template <typename T> class IHECGHKOIPM_1;

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x182869E0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x182869D0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_1_OFFSET UNITYSDK_OFFSET(0x18286E50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController_ViewModel_TypeDefinitionIndex = 77370;

	class UISuibianTempleSellWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::IHECGHKOIPM_1<::System::Int32>* buddyShowEnergy; // 0x88
		::IHECGHKOIPM_1<::System::UInt32>* buddyUid; // 0x90
		::IHECGHKOIPM_1<::System::Int32>* smallChangeGainLimit; // 0x98

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_1_OFFSET))(this);
		}
	};
}
