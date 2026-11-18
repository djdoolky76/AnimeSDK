#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BFFKDCEMMJM;
class NHFBHCALILM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GETTRICKROWCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x17098DE0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17097FD0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_INITTRICKS_OFFSET UNITYSDK_OFFSET(0x170984A0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x170989A0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17098D70)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17097FE0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17098280)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17098F30)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17099050)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170990F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickDialogPopWindowController_TypeDefinitionIndex = 87212;

	class UITrickDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*>* EIGFFIFPAFP; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DEDFAGIEBBI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitTricks(::System::Collections::Generic::List_1<::BFFKDCEMMJM*>* trickRows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BFFKDCEMMJM*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_INITTRICKS_OFFSET))(this, trickRows);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* GetTrickRowControllers(::System::String* Root)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GETTRICKROWCONTROLLERS_OFFSET))(this, Root);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void LCOMPIBAKEI(::System::String* HIAIKHDFCLN, ::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_LCOMPIBAKEI_OFFSET))(this, HIAIKHDFCLN, JKBLDFBGBPK);
		}

		::NHFBHCALILM* OGMPOGIHBIK()
		{
			return ((::NHFBHCALILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
