#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FNPKHLADEBJ;
class GEMNJHFCHPI;
class HOHJMEHNANH;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_EFHGPPNFAAO_OFFSET UNITYSDK_OFFSET(0x18244EB0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GCOEFAKGJHA_OFFSET UNITYSDK_OFFSET(0x18244590)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_KOGMDHPDFDJ_OFFSET UNITYSDK_OFFSET(0x18244F40)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18243760)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182448B0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x18243630)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18243950)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182437F0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18243470)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x182436F0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x18244610)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182449C0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18244AA0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18244B30)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18244BC0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18244C60)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18244CF0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18244D80)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x18244E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListWidgetController_TypeDefinitionIndex = 91499;

	class UIQuestionsListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FNPKHLADEBJ* _view; // 0x2C8
		::System::Collections::Generic::List_1<::HOHJMEHNANH*>* EDGENIPFFOH; // 0x2D0
		::GEMNJHFCHPI* OPOLMJLMHCD; // 0x2D8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* activityRewardBtn; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}

		::System::Int32 EFHGPPNFAAO(::HOHJMEHNANH* HAAEBCOBKFF, ::HOHJMEHNANH* BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::HOHJMEHNANH*, ::HOHJMEHNANH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_EFHGPPNFAAO_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void KOGMDHPDFDJ(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_KOGMDHPDFDJ_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::UIQuestionsAnswerPageController* GCOEFAKGJHA()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GCOEFAKGJHA_OFFSET))(this);
		}
	};
}
