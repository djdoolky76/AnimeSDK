#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/GCPCJLCCGDG.h"

class FDAMNBGJFLE;
class GMMBMCIOBKM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_FJGGGFFODLO_OFFSET UNITYSDK_OFFSET(0x19180790)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_FKKEOGCGGFM_OFFSET UNITYSDK_OFFSET(0x19180F90)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_KGDFFFKDAIJ_OFFSET UNITYSDK_OFFSET(0x1917F980)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_KOJFJGNPDHL_OFFSET UNITYSDK_OFFSET(0x19180680)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_OECPCOEEODG_OFFSET UNITYSDK_OFFSET(0x1917F710)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1917EA80)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1917F020)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1917EB90)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1917EB10)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1917E810)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1917E970)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1917ECC0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_PMNNAECGNCK_OFFSET UNITYSDK_OFFSET(0x1917FCC0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_SETCLICKFUNC_OFFSET UNITYSDK_OFFSET(0x1917F150)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1917F1A0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1917F3A0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1917F430)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1917F4C0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1917F560)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1917F5F0)
#define MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1917F680)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerList02WidgetController_TypeDefinitionIndex = 89847;

	class UIBabeltowerList02WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 BAAGDCPMHBL = 0x5; // 0x0
		::FDAMNBGJFLE* _view; // 0x2F8
		::System::Int32 OKGEKIAGBJA; // 0x300
		::System::UInt32 MHKABAJKHII; // 0x304
		::System::Boolean KKKNEGAOJDG; // 0x308
		::System::Byte _padding0[0x7];
		::GMMBMCIOBKM* LHPFMGBDFPN; // 0x310
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* EFKBJFONCGE; // 0x318
		::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* BFOMBFMONJG; // 0x320
		::System::Int32 MODAECOCCBC; // 0x328
		::System::Boolean ENMPDNBALBM; // 0x32C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetClickFunc(::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_SETCLICKFUNC_OFFSET))(this, onClick);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OECPCOEEODG(::System::Int32 CCKGEOKCJMA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_OECPCOEEODG_OFFSET))(this, CCKGEOKCJMA);
		}

		::System::Void PDKCHDBODJB(::GCPCJLCCGDG LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::GCPCJLCCGDG, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
		}

		::System::Void KOJFJGNPDHL(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_KOJFJGNPDHL_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void PMNNAECGNCK(::GCPCJLCCGDG LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::GCPCJLCCGDG, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_PMNNAECGNCK_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
		}

		::System::Void FKKEOGCGGFM(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_FKKEOGCGGFM_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void KGDFFFKDAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_KGDFFFKDAIJ_OFFSET))(this);
		}

		::System::Void FJGGGFFODLO(::System::UInt32 CCKGEOKCJMA, ::System::Boolean KKKNEGAOJDG, ::System::Boolean LMNECLIHDPC)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLIST02WIDGETCONTROLLER_FJGGGFFODLO_OFFSET))(this, CCKGEOKCJMA, KKKNEGAOJDG, LMNECLIHDPC);
		}
	};
}
