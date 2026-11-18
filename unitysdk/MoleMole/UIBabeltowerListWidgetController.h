#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/GCPCJLCCGDG.h"

class DBMMCJALNKO;
class GMMBMCIOBKM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_FJGGGFFODLO_OFFSET UNITYSDK_OFFSET(0x1703FBE0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_FKKEOGCGGFM_OFFSET UNITYSDK_OFFSET(0x17040490)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_KGDFFFKDAIJ_OFFSET UNITYSDK_OFFSET(0x1703F220)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_KOJFJGNPDHL_OFFSET UNITYSDK_OFFSET(0x1703FAD0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_OECPCOEEODG_OFFSET UNITYSDK_OFFSET(0x17040220)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1703E5A0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1703EB30)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1703E6B0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1703E630)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1703E330)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1703E490)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1703E7C0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_PMNNAECGNCK_OFFSET UNITYSDK_OFFSET(0x1703F520)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_SETCLICKFUNC_OFFSET UNITYSDK_OFFSET(0x1703EC60)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1703ECB0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1703EEB0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1703EF40)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1703EFD0)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1703F070)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1703F100)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1703F190)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerListWidgetController_TypeDefinitionIndex = 66757;

	class UIBabeltowerListWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 BAAGDCPMHBL = 0x5; // 0x0
		::DBMMCJALNKO* _view; // 0x2F8
		::System::UInt32 MHKABAJKHII; // 0x300
		::System::Boolean KKKNEGAOJDG; // 0x304
		::System::Byte _padding0[0x3];
		::GMMBMCIOBKM* LHPFMGBDFPN; // 0x308
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* EFKBJFONCGE; // 0x310
		::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* BFOMBFMONJG; // 0x318
		::System::Int32 MODAECOCCBC; // 0x320
		::System::Int32 OIHPFIKNDPH; // 0x324
		::System::Boolean ENMPDNBALBM; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetClickFunc(::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_SETCLICKFUNC_OFFSET))(this, onClick);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PDKCHDBODJB(::GCPCJLCCGDG LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::GCPCJLCCGDG, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
		}

		::System::Void KOJFJGNPDHL(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_KOJFJGNPDHL_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void PMNNAECGNCK(::GCPCJLCCGDG LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::GCPCJLCCGDG, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_PMNNAECGNCK_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
		}

		::System::Void KGDFFFKDAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_KGDFFFKDAIJ_OFFSET))(this);
		}

		::System::Void OECPCOEEODG(::System::Int32 CCKGEOKCJMA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_OECPCOEEODG_OFFSET))(this, CCKGEOKCJMA);
		}

		::System::Void FKKEOGCGGFM(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_FKKEOGCGGFM_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void FJGGGFFODLO(::System::UInt32 CCKGEOKCJMA, ::System::Boolean KKKNEGAOJDG, ::System::Boolean LMNECLIHDPC)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER_FJGGGFFODLO_OFFSET))(this, CCKGEOKCJMA, KKKNEGAOJDG, LMNECLIHDPC);
		}
	};
}
