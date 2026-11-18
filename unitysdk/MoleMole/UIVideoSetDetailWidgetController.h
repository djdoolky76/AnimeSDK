#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class EBOLIBBCDDD;
class FKCFOADAMNI_PNGPFNNONCG;
class GCIMMDDIFBJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x16702BD0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16702CF0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONICBBOCMHB_OFFSET UNITYSDK_OFFSET(0x16702F10)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16702D80)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16702E80)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16702B60)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16702C80)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x16703150)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET UNITYSDK_OFFSET(0x16703090)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16703990)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16703A70)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16703B00)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16703BA0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16703C30)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16703CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoSetDetailWidgetController_TypeDefinitionIndex = 61790;

	class UIVideoSetDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EBOLIBBCDDD* _view; // 0x2C8
		::FKCFOADAMNI_PNGPFNNONCG* IFOFMGKDFDO; // 0x2D0
		::GCIMMDDIFBJ* HGODEKOOJAD; // 0x2D8
		::System::Boolean FLLBILKMMAH; // 0x2E0
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* BKAHINJDDED; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetSuitData(::FKCFOADAMNI_PNGPFNNONCG* suitData, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::FKCFOADAMNI_PNGPFNNONCG*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET))(this, suitData, force);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ONICBBOCMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONICBBOCMHB_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}
	};
}
