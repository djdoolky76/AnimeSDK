#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGBFEOMHILK.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIZenkovTalentPageController___c__DisplayClass40_0.h"

class EKGAHGCJOAN;
class EKGAHGCJOAN_PLPDLPGLIAD;
class HEMJCFNNLDD;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIZenkovTalentPageController_Context; }
namespace MoleMole { class UIZenkovTalentPointWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_APPLYTIPSOPENFOCUSINTENT_OFFSET UNITYSDK_OFFSET(0x18C1ADB0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_BGGEONJBGDH_OFFSET UNITYSDK_OFFSET(0x18C1D980)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CLEARTIPSOPENFOCUSINTENT_OFFSET UNITYSDK_OFFSET(0x18C1AFA0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CLPOELHBPFH_OFFSET UNITYSDK_OFFSET(0x18C1F1E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CMHNLBDJEBH_OFFSET UNITYSDK_OFFSET(0x18C1DD60)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CMJPKMFCKDI_OFFSET UNITYSDK_OFFSET(0x18C1B800)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CNFHFDKLCEN_OFFSET UNITYSDK_OFFSET(0x18C161E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_DPJGLGAGAKI_OFFSET UNITYSDK_OFFSET(0x18C1B870)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_EAGFODFKCKK_OFFSET UNITYSDK_OFFSET(0x18C18760)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ECIAKEJGLMJ_OFFSET UNITYSDK_OFFSET(0x18C1DE10)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_FOCJGMCJLHP_OFFSET UNITYSDK_OFFSET(0x18C1A760)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18C160E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GHGJBJBENBA_OFFSET UNITYSDK_OFFSET(0x18C1DC00)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_IKBPGCLKNJG_OFFSET UNITYSDK_OFFSET(0x18C1F2B0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_KLLONACMCNK_OFFSET UNITYSDK_OFFSET(0x18C18ED0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_LPCMIJNKDCA_OFFSET UNITYSDK_OFFSET(0x18C1BAF0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_LPFLJGJDLKA_OFFSET UNITYSDK_OFFSET(0x18C1CB60)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OAEDPNHENIF_OFFSET UNITYSDK_OFFSET(0x18C1DE20)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18C186F0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIAJGOOFNEH_OFFSET UNITYSDK_OFFSET(0x18C1AD60)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIOHJLOADFH_OFFSET UNITYSDK_OFFSET(0x18C1B790)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIPKLLCBKKP_OFFSET UNITYSDK_OFFSET(0x18C1A1E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18C160F0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18C1A5D0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18C18CF0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18C187F0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18C18980)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C16190)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C17F60)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_PFMNJKOFLKF_OFFSET UNITYSDK_OFFSET(0x18C1F5B0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1B050)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEARESTNODE_40_0_OFFSET UNITYSDK_OFFSET(0x18C1B2E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18C1B4C0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18C1B560)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18C1B590)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18C1B620)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18C1B630)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C1B6F0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C1B700)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController_TypeDefinitionIndex = 43034;

	class UIZenkovTalentPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* HBALIOOCNJC; // 0x0
		// static const ::System::String* FGILLBFKHJO; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>* OBAOLDLJJGI; // 0x320
		::INOEOEPKMJL HOHMLALHKKG; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NBILKPJOLOE; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IAAMDAAFEND; // 0x340
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PJNLBBOPGCO; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Object*>* OJPJEOFJFKG; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::UIZenkovTalentPointWidgetController*>* CGPHAMHKKJN; // 0x358
		::System::Int32 CNLJBPLFLMG; // 0x360
		::Foundation::Coroutine::CoroutineHandle GHBIGKKBCKE; // 0x364
		::System::Boolean IHGACHLHKCA; // 0x368
		::System::Boolean FBMLDGJGBNC; // 0x369
		::System::Byte _padding0[0x6];
		::MoleMole::UIGeneralDynamicTipsPopWindowController* JEDFJMAGOHG; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ApplyTipsOpenFocusIntent(::MoleMole::UIGeneralDynamicTipsPopWindowController* itemInfoPopup)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralDynamicTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_APPLYTIPSOPENFOCUSINTENT_OFFSET))(this, itemInfoPopup);
		}

		::System::Void ClearTipsOpenFocusIntent(::MoleMole::UIGeneralDynamicTipsPopWindowController* itemInfoPopup)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralDynamicTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CLEARTIPSOPENFOCUSINTENT_OFFSET))(this, itemInfoPopup);
		}

		static ::EKGAHGCJOAN_PLPDLPGLIAD* _TryOverrideAllGamepadSpaceTargets_g__GetNearestNode_40_0(::System::Collections::Generic::List_1<::System::Object*>* nodes, ::System::Int32 col)
		{
			return ((::EKGAHGCJOAN_PLPDLPGLIAD*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__TRYOVERRIDEALLGAMEPADSPACETARGETS_G__GETNEARESTNODE_40_0_OFFSET))(nodes, col);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::MonoGamepadModule* OIOHJLOADFH(::System::String* JFMECFLEHFI)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIOHJLOADFH_OFFSET))(this, JFMECFLEHFI);
		}

		::System::Int32 CMJPKMFCKDI(::System::Int32 PCEFKJHBDDF, ::System::Int32 DAAEHEHLLLD, ::MoleMole::UIZenkovTalentPageController___c__DisplayClass40_0& param_2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::UIZenkovTalentPageController___c__DisplayClass40_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CMJPKMFCKDI_OFFSET))(this, PCEFKJHBDDF, DAAEHEHLLLD, param_2);
		}

		::System::Void DPJGLGAGAKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_DPJGLGAGAKI_OFFSET))(this);
		}

		::HEMJCFNNLDD* OGMPOGIHBIK()
		{
			return ((::HEMJCFNNLDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void LPFLJGJDLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_LPFLJGJDLKA_OFFSET))(this);
		}

		::System::Void BGGEONJBGDH(::System::Boolean OGLDGNLMFMK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_BGGEONJBGDH_OFFSET))(this, OGLDGNLMFMK);
		}

		::System::Void CNFHFDKLCEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CNFHFDKLCEN_OFFSET))(this);
		}

		::System::Boolean FOCJGMCJLHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_FOCJGMCJLHP_OFFSET))(this);
		}

		::System::Int32 GHGJBJBENBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_GHGJBJBENBA_OFFSET))(this);
		}

		::System::Void CMHNLBDJEBH(::EKGAHGCJOAN_PLPDLPGLIAD* HHIJHDFHPOI)
		{
			return ((::System::Void(*)(::PVOID, ::EKGAHGCJOAN_PLPDLPGLIAD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CMHNLBDJEBH_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Void ECIAKEJGLMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_ECIAKEJGLMJ_OFFSET))(this);
		}

		::System::Void KLLONACMCNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_KLLONACMCNK_OFFSET))(this);
		}

		::System::Void LPCMIJNKDCA(::UnityEngine::GameObject* IAPKABMDJNF, ::System::Boolean AMGAAHMANDM, ::System::Boolean AJCMAAHCOMP, ::System::Int32 MOBNMDEDJIP, ::System::Boolean NGLPLNECMCL, ::System::Boolean FGFONILCFPK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_LPCMIJNKDCA_OFFSET))(this, IAPKABMDJNF, AMGAAHMANDM, AJCMAAHCOMP, MOBNMDEDJIP, NGLPLNECMCL, FGFONILCFPK);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* EAGFODFKCKK(::MoleMole::UIZenkovTalentPageController_Context* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::UIZenkovTalentPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_EAGFODFKCKK_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void OAEDPNHENIF(::MoleMole::UIZenkovTalentPageController_Context* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovTalentPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OAEDPNHENIF_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void IKBPGCLKNJG(::EKGAHGCJOAN_PLPDLPGLIAD* HHIJHDFHPOI, ::EGBFEOMHILK KGGJCGPMAIH, ::EGBFEOMHILK BPEGDPLGFPO)
		{
			return ((::System::Void(*)(::PVOID, ::EKGAHGCJOAN_PLPDLPGLIAD*, ::EGBFEOMHILK, ::EGBFEOMHILK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_IKBPGCLKNJG_OFFSET))(this, HHIJHDFHPOI, KGGJCGPMAIH, BPEGDPLGFPO);
		}

		::EKGAHGCJOAN* CLPOELHBPFH()
		{
			return ((::EKGAHGCJOAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_CLPOELHBPFH_OFFSET))(this);
		}

		::System::Void OIPKLLCBKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIPKLLCBKKP_OFFSET))(this);
		}

		::System::Void PFMNJKOFLKF(::MNAGAGOHIGH& NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_PFMNJKOFLKF_OFFSET))(this, NFFNEFLKPDG);
		}

		::System::Boolean OIAJGOOFNEH(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER_OIAJGOOFNEH_OFFSET))(this, MBEHILFGMGI);
		}
	};
}
