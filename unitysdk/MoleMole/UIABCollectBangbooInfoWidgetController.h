#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HCPOHNGPJCN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ADJJNIIMKDP_OFFSET UNITYSDK_OFFSET(0x189783A0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189771F0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18977280)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189772D0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18977040)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18977180)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_SETBANGBODDIDANDREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18977350)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18978110)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18978030)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18978150)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x189781E0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189781F0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18978280)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18978310)

namespace MoleMole
{
	inline static constexpr unsigned int UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex = 84760;

	class UIABCollectBangbooInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_AMNLOPPGKFB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x13530);
		}
		::HCPOHNGPJCN* _view; // 0x2C8
		::System::Int32 CILEHDKHDAJ; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OOFIMHOBGNA; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetBangboddIDAndRefreshView(::System::Int32 bangbooID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_SETBANGBODDIDANDREFRESHVIEW_OFFSET))(this, bangbooID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ADJJNIIMKDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ADJJNIIMKDP_OFFSET))(this);
		}
	};
}
