#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FEGBNICMNHM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIVHSStoreLimitBtnsWidgetController; }
namespace MoleMole { class UIVHSStoreLimitRoleInfoWidgetController; }
namespace MoleMole { class UIVHSStoreLimitWidgetController_Context; }
namespace MoleMole { class UIVHSStoreLimitWidgetController_TagScrollViewHelper; }
namespace MoleMole { class UIVHSStoreRecommandWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_BFJFAENKMDJ_OFFSET UNITYSDK_OFFSET(0x1136A680)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x1136A980)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_EGIPEDNELDF_OFFSET UNITYSDK_OFFSET(0x1136A9D0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET_SELECTEDVHS_OFFSET UNITYSDK_OFFSET(0x1136A6F0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_INITBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1136A5F0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_LGAOGJEIBNP_OFFSET UNITYSDK_OFFSET(0x1136A970)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1136A480)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1136A510)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1136A290)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1136A590)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1136A760)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1136A7C0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1136A850)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1136A8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLimitWidgetController_TypeDefinitionIndex = 49842;

	class UIVHSStoreLimitWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FEGBNICMNHM* _view; // 0x2C8
		::MoleMole::UIVHSStoreLimitRoleInfoWidgetController* PJGCNOCNIBG; // 0x2D0
		::MoleMole::UIVHSStoreLimitBtnsWidgetController* NIPGIKJFANK; // 0x2D8
		::MoleMole::UIVHSStoreRecommandWidgetController* BHOHEJLDDHJ; // 0x2E0
		::MoleMole::UIVHSStoreLimitWidgetController_Context* CHKEJGHMHJK; // 0x2E8
		::MoleMole::UIVHSStoreLimitWidgetController_TagScrollViewHelper* CFBHIBNANOD; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitByContext(::MoleMole::UIVHSStoreLimitWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLimitWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_INITBYCONTEXT_OFFSET))(this, context);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_SelectedVhs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET_SELECTEDVHS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::UIVHSStoreLimitWidgetController_Context* LGAOGJEIBNP()
		{
			return ((::MoleMole::UIVHSStoreLimitWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_LGAOGJEIBNP_OFFSET))(this);
		}

		::System::Boolean CGADIPLIANC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CGADIPLIANC_OFFSET))(this);
		}

		::System::Void BFJFAENKMDJ(::MoleMole::UIVHSStoreLimitWidgetController_Context* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLimitWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_BFJFAENKMDJ_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void EGIPEDNELDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_EGIPEDNELDF_OFFSET))(this);
		}
	};
}
