#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/BFJIMHBAHBI.h"

class BDGOGBMOPPF;
class JJOKKBDDGNN;
class JPGAKCLPEPK;
class ODNBJIEICJH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole { class UIRABHudContext; }
namespace MoleMole { class UIRABHudWidgetController; }
namespace MoleMole { class UIRABInLevelPageController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ANLBIOJNIKC_OFFSET UNITYSDK_OFFSET(0x166C2D70)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BBAMNNPKPHO_OFFSET UNITYSDK_OFFSET(0x1907FA40)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x1907D9C0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CHBFFJNEOML_OFFSET UNITYSDK_OFFSET(0x1907EE00)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x1907F540)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_EKHBENMNOJA_OFFSET UNITYSDK_OFFSET(0x1907F7C0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_GLAOKPPMHKP_OFFSET UNITYSDK_OFFSET(0x1907EB70)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_HIDEHUDELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1907E830)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1907EA10)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_OHJCDOOIOLB_OFFSET UNITYSDK_OFFSET(0x166C2CC0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1907D6F0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1907D780)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1907D230)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1907D450)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_SHOWHUDELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1907E680)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET UNITYSDK_OFFSET(0x1907E540)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET UNITYSDK_OFFSET(0x1907E340)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1907F2C0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1907F100)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1907F300)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1907F390)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1907F420)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1907F4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController_TypeDefinitionIndex = 71068;

	class UIRABInLevelBattleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_AMNLOPPGKFB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		::BDGOGBMOPPF* _view; // 0x2C8
		::MoleMole::UIRABInLevelPageController* OKJPBIEFFEF; // 0x2D0
		::UnityEngine::Animation* GDKFAEAOAHF; // 0x2D8
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x2E0
		::JPGAKCLPEPK* FFDBFAEKDCL; // 0x2E8
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* IPLAPKDDLNJ; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIRABHudWidgetController*>* MHFGAPIMMJK; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIRABHudWidgetController*>* JMJDHJLEPOM; // 0x300
		::System::Collections::Generic::Queue_1<::MoleMole::UIRABHudContext*>* FPCJCMGOHJI; // 0x308
		::System::UInt32 LLJJIJKDLON; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::MoleMole::UIInLevelDamageTextContainerChildWindowController* dmgCtrl, ::JPGAKCLPEPK* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*, ::JPGAKCLPEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, dmgCtrl, viewModel);
		}

		::System::Void ToggleHUDFocus(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET))(this, entityId);
		}

		::System::Void ToggleHUDDrag(::System::UInt32 entityId, ::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET))(this, entityId, isDrag);
		}

		::System::Void ShowHUDElementAdvantage(::System::Int32 elementId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_SHOWHUDELEMENTADVANTAGE_OFFSET))(this, elementId);
		}

		::System::Void HideHUDElementAdvantage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_HIDEHUDELEMENTADVANTAGE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CHBFFJNEOML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CHBFFJNEOML_OFFSET))(this);
		}

		::System::Void GLAOKPPMHKP(::MoleMole::UIRABHudContext* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABHudContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_GLAOKPPMHKP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void EKHBENMNOJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_EKHBENMNOJA_OFFSET))(this);
		}

		::System::Void BBAMNNPKPHO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_BBAMNNPKPHO_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void OHJCDOOIOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_OHJCDOOIOLB_OFFSET))(this);
		}

		::MoleMole::UIRABHudContext* ANLBIOJNIKC(::BFJIMHBAHBI JPCHMNFHFFI, ::JJOKKBDDGNN* HPEMFJDOAKL, ::MoleMole::UIRABHudContext* AAOCANGHBDG)
		{
			return ((::MoleMole::UIRABHudContext*(*)(::PVOID, ::BFJIMHBAHBI, ::JJOKKBDDGNN*, ::MoleMole::UIRABHudContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER_ANLBIOJNIKC_OFFSET))(this, JPCHMNFHFFI, HPEMFJDOAKL, AAOCANGHBDG);
		}
	};
}
