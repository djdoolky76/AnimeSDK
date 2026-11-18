#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DEBNKJEHNIL;
class EMPEGMEDAHH;
class FGCOIBFFCHB;
class JHGFGOIKFEG;
class MJGHEKNNBNA;
class ODNBJIEICJH;
namespace MoleMole { class UIABInLevelCountDownWidgetController; }
namespace MoleMole { class UIAutoBattleMonsterHudWidgetController; }
namespace MoleMole { class UIAutoBattleMonsterHudWidgetController_Context; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_AFKMENPDKON_OFFSET UNITYSDK_OFFSET(0x1A103550)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BBAMNNPKPHO_OFFSET UNITYSDK_OFFSET(0x1A104620)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x1A1019A0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CHBFFJNEOML_OFFSET UNITYSDK_OFFSET(0x1A1012C0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x1A105530)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_DPBPFJPBPIC_OFFSET UNITYSDK_OFFSET(0x1A104E10)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_EKHBENMNOJA_OFFSET UNITYSDK_OFFSET(0x1A1057B0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_EKNKMPLCJMG_OFFSET UNITYSDK_OFFSET(0x1A100710)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_FDBNBMFEEAC_OFFSET UNITYSDK_OFFSET(0x1A104E60)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GETDMGTXTROOT_OFFSET UNITYSDK_OFFSET(0x1A101580)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GLAOKPPMHKP_OFFSET UNITYSDK_OFFSET(0x1A1010E0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_IOAOIDPOCGO_OFFSET UNITYSDK_OFFSET(0x1A104CF0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ISSTARTTIPSPLAYING_OFFSET UNITYSDK_OFFSET(0x1A101CA0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A100FB0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_NNMBFOBLMGL_OFFSET UNITYSDK_OFFSET(0x1A100F00)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_OCEFGALJIDN_OFFSET UNITYSDK_OFFSET(0x1A1054A0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_OHJCDOOIOLB_OFFSET UNITYSDK_OFFSET(0x1A104170)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCAMPCHANGE_OFFSET UNITYSDK_OFFSET(0x1A102F90)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A100CA0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A100D30)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A1004E0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A100B00)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_PELCBHEPNLN_OFFSET UNITYSDK_OFFSET(0x1A104320)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_SETPLAYERNAMEANDICON_OFFSET UNITYSDK_OFFSET(0x1A101D50)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET UNITYSDK_OFFSET(0x1A101880)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET UNITYSDK_OFFSET(0x1A1015E0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A103EF0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A103CA0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A103F30)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A103FC0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A104050)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A1040E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController_TypeDefinitionIndex = 87226;

	class UIABBattlePhaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_AMNLOPPGKFB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController_TypeDefinitionIndex)->GetStaticField(0x10E80);
		}
		::JHGFGOIKFEG* _view; // 0x2C8
		::DEBNKJEHNIL* FFDBFAEKDCL; // 0x2D0
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x2D8
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* IPLAPKDDLNJ; // 0x2E0
		::MoleMole::UIABInLevelCountDownWidgetController* BHAAIINMHHN; // 0x2E8
		::MoleMole::UIBangBooAutoBattleInLevelPageController* OKJPBIEFFEF; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIAutoBattleMonsterHudWidgetController*>* MHFGAPIMMJK; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattleMonsterHudWidgetController*>* JMJDHJLEPOM; // 0x300
		::System::Collections::Generic::Queue_1<::System::Object*>* FPCJCMGOHJI; // 0x308
		::UnityEngine::Material* IONKABHLKAB; // 0x310
		::UnityEngine::Material* JPFDFNPJICA; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DJPLDNODFPG; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetDmgTxtRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GETDMGTXTROOT_OFFSET))(this);
		}

		::System::Void ToggleHUDFocus(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET))(this, entityId);
		}

		::System::Void ToggleHUDDrag(::System::UInt32 entityId, ::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET))(this, entityId, isDrag);
		}

		::System::Void BindView(::MoleMole::UIInLevelDamageTextContainerChildWindowController* dmgCtrl, ::DEBNKJEHNIL* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*, ::DEBNKJEHNIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, dmgCtrl, viewModel);
		}

		::System::Boolean IsStartTipsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ISSTARTTIPSPLAYING_OFFSET))(this);
		}

		static ::System::Void SetPlayerNameAndIcon(::EMPEGMEDAHH* playerData, ::UnityEngine::UI::Extension::UILocalizationText* name, ::FGCOIBFFCHB* icon, ::FGCOIBFFCHB* deathIcon, ::UnityEngine::UI::Extension::UILocalizationText* hpNum, ::FGCOIBFFCHB* HP, ::UnityEngine::UI::Extension::UILocalizationText* lvlText, ::System::Boolean isFoe, ::UnityEngine::UI::Extension::UILocalizationText* foeHPSub, ::System::Int32 expectedDmg)
		{
			return ((::System::Void(*)(::EMPEGMEDAHH*, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_SETPLAYERNAMEANDICON_OFFSET))(playerData, name, icon, deathIcon, hpNum, HP, lvlText, isFoe, foeHPSub, expectedDmg);
		}

		::System::Void OnCampChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCAMPCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OHJCDOOIOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_OHJCDOOIOLB_OFFSET))(this);
		}

		::System::Void GLAOKPPMHKP(::MoleMole::UIAutoBattleMonsterHudWidgetController_Context* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAutoBattleMonsterHudWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GLAOKPPMHKP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void PELCBHEPNLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_PELCBHEPNLN_OFFSET))(this);
		}

		::System::Void AFKMENPDKON(::MJGHEKNNBNA* BKFKMEPHFFG, ::System::Int32 OLNAFBAENGH)
		{
			return ((::System::Void(*)(::PVOID, ::MJGHEKNNBNA*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_AFKMENPDKON_OFFSET))(this, BKFKMEPHFFG, OLNAFBAENGH);
		}

		::System::Void BBAMNNPKPHO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BBAMNNPKPHO_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void NNMBFOBLMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_NNMBFOBLMGL_OFFSET))(this);
		}

		::System::Void IOAOIDPOCGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_IOAOIDPOCGO_OFFSET))(this);
		}

		::System::Void CHBFFJNEOML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CHBFFJNEOML_OFFSET))(this);
		}

		::System::Void EKNKMPLCJMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_EKNKMPLCJMG_OFFSET))(this);
		}

		::System::Void DPBPFJPBPIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_DPBPFJPBPIC_OFFSET))(this);
		}

		::System::Void OCEFGALJIDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_OCEFGALJIDN_OFFSET))(this);
		}

		::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void FDBNBMFEEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_FDBNBMFEEAC_OFFSET))(this);
		}

		::System::Void EKHBENMNOJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_EKHBENMNOJA_OFFSET))(this);
		}
	};
}
