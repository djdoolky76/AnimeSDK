#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDFMOBLBPGH.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/MoleMole/UISuibianDevelopRightWidgetController_DevelopRightState.h"

class GBLHIIBPDHJ;
class KOGPMKOGCLC;
namespace System { class Object; }
template <typename T> class IHECGHKOIPM_1;

#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18272E40)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x18272F70)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET UNITYSDK_OFFSET(0x18272F10)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18272E30)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x18272FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_ViewModel_TypeDefinitionIndex = 54647;

	class UISuibianDevelopRightWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::GBLHIIBPDHJ* productViewModel; // 0x88
		::IHECGHKOIPM_1<::System::Object*>* developRightState; // 0x90

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Void SetRightTabType(::EDFMOBLBPGH developTabType)
		{
			return ((::System::Void(*)(::PVOID, ::EDFMOBLBPGH))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETRIGHTTABTYPE_OFFSET))(this, developTabType);
		}

		::System::Void SetProductID(::System::Int32 productID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET))(this, productID);
		}

		::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState _OnCreateProperty_b__3_0()
		{
			return ((::MoleMole::UISuibianDevelopRightWidgetController_DevelopRightState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__3_0_OFFSET))(this);
		}
	};
}
