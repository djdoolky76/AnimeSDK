#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class KLIOMMIOFDC_1;

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16ECEEF0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECEEE0)
#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_0_OFFSET UNITYSDK_OFFSET(0x16ECF080)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController_ViewModel_TypeDefinitionIndex = 77984;

	class UIFlowerShopNewGuestPopWindowController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::KLIOMMIOFDC_1<::System::Int32>* AccessID; // 0x88
		::JIOLFCAGOFH_1<::System::Boolean>* ShowAccess; // 0x90
		::KLIOMMIOFDC_1<::System::Int32>* PopID; // 0x98

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__4_0_OFFSET))(this);
		}
	};
}
