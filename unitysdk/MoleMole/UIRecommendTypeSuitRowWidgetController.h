#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class AJHAJCAOAPF;
class BFLBNDFBIBH;
class EMONNCFEDAO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CJJDPAODDDA_OFFSET UNITYSDK_OFFSET(0x167B1F50)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x167B1770)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_DNGEAAHHPBC_OFFSET UNITYSDK_OFFSET(0x167B17C0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x167AFCA0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167B1190)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167B12A0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167B1220)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167AFAB0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167AFE00)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x167AFF10)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_PLAYCHOICEANIMATION_OFFSET UNITYSDK_OFFSET(0x167B18B0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x167B1B90)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167B1BE0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167B1CE0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167B1D70)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167B1DA0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167B1E30)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167B1EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController_TypeDefinitionIndex = 63707;

	class UIRecommendTypeSuitRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 PGBANGNBKAI = 0x3; // 0x0
		::AJHAJCAOAPF* _view; // 0x2C8
		::MoleMole::UIRoleEquipRecommendPopContext_1<::EMONNCFEDAO*>* DAAAEJDBNFI; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* JJMGPBAAIMK; // 0x2D8
		::MoleMole::UIGeneralFilterItemRowWidgetController* HHMNHCCNDDH; // 0x2E0
		::System::Boolean PPCMNNFJBMG; // 0x2E8
		::System::Boolean ACPGBFHAFFG; // 0x2E9
		::System::Byte _padding0[0x6];
		::System::Action* _itemClickAct; // 0x2F0
		::System::Action_1<::System::Boolean>* _onSuitFocusChange; // 0x2F8
		::System::String* LBPDCPLBIAG; // 0x300
		::System::String* HFGNFMBOLFO; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void PlayChoiceAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_PLAYCHOICEANIMATION_OFFSET))(this);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CJJDPAODDDA(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CJJDPAODDDA_OFFSET))(this, IAPKABMDJNF);
		}

		::System::Void DNGEAAHHPBC(::System::Boolean GCKPCMEMKMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_DNGEAAHHPBC_OFFSET))(this, GCKPCMEMKMM);
		}

		::System::Void PDKCHDBODJB(::BFLBNDFBIBH* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::BFLBNDFBIBH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void HJNJLKMIJPH(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET))(this, IAPKABMDJNF);
		}
	};
}
