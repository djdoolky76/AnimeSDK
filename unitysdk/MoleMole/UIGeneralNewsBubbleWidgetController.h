#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/IIGNPIIKPDN.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/UIGeneralNewsBubbleWidgetController_SlotLockType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"

class CJIFEPECODO;
class GFFBLAMFKHO;
class NewsBubbleParam;
namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController_NewsBubbleState; }
namespace MoleMole::Config { class UIBubbleMoveConfig; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDBUBBLETIP_OFFSET UNITYSDK_OFFSET(0x18E55A50)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSLOTLOCK_OFFSET UNITYSDK_OFFSET(0x18E5BEF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_BOJHDONPNGN_OFFSET UNITYSDK_OFFSET(0x18E5CD50)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_BPGOAFEAIMK_OFFSET UNITYSDK_OFFSET(0x18E547D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CLOSEALLBUBBLES_OFFSET UNITYSDK_OFFSET(0x18E58AF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DAGFGAADJCE_OFFSET UNITYSDK_OFFSET(0x18E55A20)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOAJGPIBLJM_OFFSET UNITYSDK_OFFSET(0x18E57980)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_EIFNJGILAPB_OFFSET UNITYSDK_OFFSET(0x18E57B10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_EJHMHCPPOBH_OFFSET UNITYSDK_OFFSET(0x18E5D4A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ELBIGILHICK_OFFSET UNITYSDK_OFFSET(0x18E5E0F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FHEFAJCNJFI_OFFSET UNITYSDK_OFFSET(0x18E5EA60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FINISHBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0x18E593B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FJKGNFNAGEN_OFFSET UNITYSDK_OFFSET(0x18E5D020)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GDALEAFILOL_OFFSET UNITYSDK_OFFSET(0x18E573C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETCURRENTSHOWMAP_OFFSET UNITYSDK_OFFSET(0x18E57140)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETFADEINTIPS_OFFSET UNITYSDK_OFFSET(0x18E59CE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETSHOWINGTIP_OFFSET UNITYSDK_OFFSET(0x18E58040)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETTIPBYID_OFFSET UNITYSDK_OFFSET(0x18E59B10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETWIDGETBYGROUPID_OFFSET UNITYSDK_OFFSET(0x18E5B050)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_GETCURRENTSHOWLIST_OFFSET UNITYSDK_OFFSET(0x18E5C020)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_MAXSHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x18E54CD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18E545F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GKBAKOMHIGL_OFFSET UNITYSDK_OFFSET(0x18E5F1D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HAJGHMOCFFE_OFFSET UNITYSDK_OFFSET(0x18E5EA10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYBUBBLEEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x18E58420)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYTIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x18E58210)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASTIPID_OFFSET UNITYSDK_OFFSET(0x18E58610)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HKAOPHCJPEC_OFFSET UNITYSDK_OFFSET(0x18E5F030)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_IFPGCIALNCA_OFFSET UNITYSDK_OFFSET(0x18E5ECC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_IHHHGBKLCAP_OFFSET UNITYSDK_OFFSET(0x18E56E00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INITSTATEMAP_OFFSET UNITYSDK_OFFSET(0x18E54600)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPTTIPID_OFFSET UNITYSDK_OFFSET(0x18E59EC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x18E5A560)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ISININTERVAL_OFFSET UNITYSDK_OFFSET(0x18E5B710)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JABOBHLKMEN_OFFSET UNITYSDK_OFFSET(0x18E57240)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JDGNFEAKKMB_OFFSET UNITYSDK_OFFSET(0x18E5D200)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JGMGGAKLEEE_OFFSET UNITYSDK_OFFSET(0x18E5D9C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JOKGNKKNCIK_OFFSET UNITYSDK_OFFSET(0x18E5EC70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JPDAKPBKLJJ_OFFSET UNITYSDK_OFFSET(0x18E5F090)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JPODFHIJLFP_OFFSET UNITYSDK_OFFSET(0x18E5B1B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_KHKBPMPHBNA_OFFSET UNITYSDK_OFFSET(0x18E57610)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_KOGKGLFMOOL_OFFSET UNITYSDK_OFFSET(0x18E5EA90)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_LBCNINOBPEF_OFFSET UNITYSDK_OFFSET(0x18E5CDF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_LOPLOFHLGFC_OFFSET UNITYSDK_OFFSET(0x18E5EE30)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_MODHCCAJPPM_OFFSET UNITYSDK_OFFSET(0x18E5A1D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEHLFBGIEOF_OFFSET UNITYSDK_OFFSET(0x18E5DFA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_OJCENAFOJGF_OFFSET UNITYSDK_OFFSET(0x18E5E6B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E54CE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18E550D0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEINFINISH_OFFSET UNITYSDK_OFFSET(0x18E571E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x18E57B70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYMOVEFINISH_OFFSET UNITYSDK_OFFSET(0x18E575B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONSLOTCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x18E5BFD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E54D70)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E548B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E54F10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18E55290)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PAUSEBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0x18E5AAF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PFCBAJPBHEP_OFFSET UNITYSDK_OFFSET(0x18E57E20)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PNKIGBBHKID_OFFSET UNITYSDK_OFFSET(0x18E5EFE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_POLMFDHLIIO_OFFSET UNITYSDK_OFFSET(0x18E5BC30)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REGISTERNEWBUBBLE_OFFSET UNITYSDK_OFFSET(0x18E5B240)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REMOVESLOTLOCK_OFFSET UNITYSDK_OFFSET(0x18E5BF60)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESETALLOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0x18E595A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESUMEBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0x18E5A6E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TESTSORTBUBBLE_OFFSET UNITYSDK_OFFSET(0x18E57930)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRIGGERFADE_OFFSET UNITYSDK_OFFSET(0x18E57710)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYADDBUBBLETIP_OFFSET UNITYSDK_OFFSET(0x18E5B830)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYGETVISIBLETOP_OFFSET UNITYSDK_OFFSET(0x18E5C080)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYSETTIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0x18E59880)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UNREGNEWSBUBBLE_OFFSET UNITYSDK_OFFSET(0x18E5AE20)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x18E55EC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_WAITSHOWLIST_OFFSET UNITYSDK_OFFSET(0x18E57190)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5C620)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E5CB80)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18E5CC10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E5CCA0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E5CCB0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E5CCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController_TypeDefinitionIndex = 69182;

	class UIGeneralNewsBubbleWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 KMBKJPEGPFO = 0x3; // 0x0
		::MoleMole::Config::UIBubbleMoveConfig* moveConfig; // 0x320
		::System::Boolean IsInNewbie; // 0x328
		::System::Byte _padding0[0x7];
		::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* CurrentState; // 0x330
		::System::Collections::Generic::Dictionary_2<::IIGNPIIKPDN, ::System::Object*>* StateMap; // 0x338
		::NewsBubbleParam* PPAHFGNPKOK; // 0x340
		::Il2CppArray<::UnityEngine::Vector3>* DIIFDOCDIDG; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* OFNANOCKBPF; // 0x350
		::GFFBLAMFKHO* _view; // 0x358
		::System::Collections::Generic::List_1<::System::Int32>* FPBJABMLKKE; // 0x360
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* PGEPHAPEHIF; // 0x368
		::System::Boolean KDPGCMKHHCA; // 0x370
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EDGIHGPAOEF; // 0x378
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* LAIBAGKCBAM; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* IFKDGBCHMKG; // 0x388
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* EMPNFOGDANE; // 0x390
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>*>* NKDIENOFBJM; // 0x398
		::System::Collections::Generic::Stack_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* HCHLIEEOMBD; // 0x3A0
		::System::Int32 JOOLLOLOLLE; // 0x3A8
		::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType NPENLHJLKIE; // 0x3AC
		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* EFGFKMFDEFG; // 0x3B0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* AHDKDKDKOIH; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void InitStateMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INITSTATEMAP_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* GetCurrentShowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETCURRENTSHOWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* WaitShowList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_WAITSHOWLIST_OFFSET))(this);
		}

		::System::Void OnNotifyFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEINFINISH_OFFSET))(this);
		}

		::System::Void OnNotifyMoveFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYMOVEFINISH_OFFSET))(this);
		}

		::System::Void TestSortBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TESTSORTBUBBLE_OFFSET))(this);
		}

		::System::Void TriggerFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRIGGERFADE_OFFSET))(this);
		}

		::System::Void OnNotifyFadeOutFinish(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONNOTIFYFADEOUTFINISH_OFFSET))(this, bubbleCtrl);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UPDATEPOSITION_OFFSET))(this);
		}

		::MoleMole::UIBubbleTips* GetShowingTip(::System::Int32 tipid)
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETSHOWINGTIP_OFFSET))(this, tipid);
		}

		::System::Boolean HasAnyTipExcludeCtrl(::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYTIPEXCLUDECTRL_OFFSET))(this, excludeCtrl);
		}

		::System::Boolean HasAnyBubbleExcludeCtrl(::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>* predicate, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASANYBUBBLEEXCLUDECTRL_OFFSET))(this, predicate, excludeCtrl);
		}

		::System::Boolean HasTipID(::System::Int32 tipid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HASTIPID_OFFSET))(this, tipid);
		}

		::System::Void CloseAllBubbles(::System::Boolean containTimeUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_CLOSEALLBUBBLES_OFFSET))(this, containTimeUp);
		}

		::System::Void ResetAllOverrideCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESETALLOVERRIDECANVAS_OFFSET))(this);
		}

		::System::Boolean TrySetTipExtraData(::System::Int32 targetTipID, ::CJIFEPECODO* extra)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJIFEPECODO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYSETTIPEXTRADATA_OFFSET))(this, targetTipID, extra);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* GetTipByID(::System::Int32 tipid)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETTIPBYID_OFFSET))(this, tipid);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* GetFadeInTips()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETFADEINTIPS_OFFSET))(this);
		}

		::System::Void InterruptTipID(::System::Int32 tipid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPTTIPID_OFFSET))(this, tipid);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_INTERRUPT_OFFSET))(this);
		}

		::System::Void ResumeBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean useSort)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_RESUMEBUBBLEGROUP_OFFSET))(this, ctrl, useSort);
		}

		::System::Void PauseBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean useSort)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PAUSEBUBBLEGROUP_OFFSET))(this, ctrl, useSort);
		}

		::System::Void FinishBubbleGroup(::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl, ::System::Boolean force, ::System::Boolean forceFadeReal)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FINISHBUBBLEGROUP_OFFSET))(this, ctrl, force, forceFadeReal);
		}

		::System::Void UnRegNewsBubble(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_UNREGNEWSBUBBLE_OFFSET))(this, bubbleCtrl);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* GetWidgetByGroupID(::MoleMole::BubbleType type, ::System::Int32 groupId)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::MoleMole::BubbleType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GETWIDGETBYGROUPID_OFFSET))(this, type, groupId);
		}

		::System::Void RegisterNewBubble(::MoleMole::UIGeneralNewsBubbleRowWidgetController* bubbleCtrl, ::MoleMole::BubbleType type, ::System::Int32 groupId, ::System::Nullable_1<::System::Int32> overrideGroup)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::MoleMole::BubbleType, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REGISTERNEWBUBBLE_OFFSET))(this, bubbleCtrl, type, groupId, overrideGroup);
		}

		::System::Boolean IsInInterval(::System::Int32 tipid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ISININTERVAL_OFFSET))(this, tipid);
		}

		::System::Void TryAddBubbleTip(::MoleMole::UIBubbleTips* tip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYADDBUBBLETIP_OFFSET))(this, tip);
		}

		::System::Void AddBubbleTip(::MoleMole::UIBubbleTips* tip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDBUBBLETIP_OFFSET))(this, tip);
		}

		::System::Void AddSlotLock(::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ADDSLOTLOCK_OFFSET))(this, type);
		}

		::System::Void RemoveSlotLock(::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_SlotLockType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_REMOVESLOTLOCK_OFFSET))(this, type);
		}

		::System::Void OnSlotCountChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ONSLOTCOUNTCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* get_GetCurrentShowList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_GETCURRENTSHOWLIST_OFFSET))(this);
		}

		::System::Boolean TryGetVisibleTop(::UnityEngine::Transform* relativeTo, ::System::Single& top)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_TRYGETVISIBLETOP_OFFSET))(this, relativeTo, top);
		}

		::System::Int32 get_maxShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GET_MAXSHOWCOUNT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Int32 JPODFHIJLFP(::MoleMole::BubbleType OBNIAHNMHPF, ::System::Int32 KPNIHKEKDOC, ::System::Nullable_1<::System::Int32> FPMIOACGKCE)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::BubbleType, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JPODFHIJLFP_OFFSET))(this, OBNIAHNMHPF, KPNIHKEKDOC, FPMIOACGKCE);
		}

		::System::Void BOJHDONPNGN(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_BOJHDONPNGN_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Int32 LBCNINOBPEF(::MoleMole::UIGeneralNewsBubbleRowWidgetController* EJCBEJMGFAJ, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_LBCNINOBPEF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		::System::Void FJKGNFNAGEN(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FJKGNFNAGEN_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void EJHMHCPPOBH(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_EJHMHCPPOBH_OFFSET))(this, KOIBHLHLMFC);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* POLMFDHLIIO()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_POLMFDHLIIO_OFFSET))(this);
		}

		::System::Boolean NEHLFBGIEOF(::System::Int32 AOCOIDIMLIH)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_NEHLFBGIEOF_OFFSET))(this, AOCOIDIMLIH);
		}

		::System::Void IHHHGBKLCAP(::MoleMole::UIBubbleTips* HMDKKCKDOFP, ::System::Boolean GILELJEDDIL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_IHHHGBKLCAP_OFFSET))(this, HMDKKCKDOFP, GILELJEDDIL);
		}

		::System::Void HAJGHMOCFFE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HAJGHMOCFFE_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void BPGOAFEAIMK(::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState* JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController_NewsBubbleState*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_BPGOAFEAIMK_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void FHEFAJCNJFI(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_FHEFAJCNJFI_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void JDGNFEAKKMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JDGNFEAKKMB_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OJCENAFOJGF(::System::Int32 KPNIHKEKDOC)
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_OJCENAFOJGF_OFFSET))(this, KPNIHKEKDOC);
		}

		::System::Boolean MODHCCAJPPM(::System::Int32 HBLGABGIIAC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_MODHCCAJPPM_OFFSET))(this, HBLGABGIIAC);
		}

		::System::Void JOKGNKKNCIK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JOKGNKKNCIK_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void IFPGCIALNCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_IFPGCIALNCA_OFFSET))(this);
		}

		::System::Boolean JGMGGAKLEEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JGMGGAKLEEE_OFFSET))(this);
		}

		::System::Void LOPLOFHLGFC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_LOPLOFHLGFC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Boolean KHKBPMPHBNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_KHKBPMPHBNA_OFFSET))(this);
		}

		::System::Void PNKIGBBHKID(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PNKIGBBHKID_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Boolean GDALEAFILOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GDALEAFILOL_OFFSET))(this);
		}

		static ::System::Boolean KOGKGLFMOOL(::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>* PCDADGKIPML, ::System::Int32 HBLGABGIIAC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::UIBubbleTips*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_KOGKGLFMOOL_OFFSET))(PCDADGKIPML, HBLGABGIIAC);
		}

		::System::Void DOAJGPIBLJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DOAJGPIBLJM_OFFSET))(this);
		}

		::System::Void EIFNJGILAPB(::MoleMole::UIGeneralNewsBubbleRowWidgetController* BADLNCGPKHP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_EIFNJGILAPB_OFFSET))(this, BADLNCGPKHP);
		}

		::System::Void HKAOPHCJPEC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_HKAOPHCJPEC_OFFSET))(this, KOIBHLHLMFC);
		}

		::IIGNPIIKPDN DAGFGAADJCE()
		{
			return ((::IIGNPIIKPDN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_DAGFGAADJCE_OFFSET))(this);
		}

		::System::Void JPDAKPBKLJJ(::IIGNPIIKPDN JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::IIGNPIIKPDN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JPDAKPBKLJJ_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Boolean ELBIGILHICK(::MoleMole::UIBubbleTips* HMDKKCKDOFP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_ELBIGILHICK_OFFSET))(this, HMDKKCKDOFP);
		}

		::System::Void GKBAKOMHIGL(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_GKBAKOMHIGL_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Boolean PFCBAJPBHEP(::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* DJLOKMMLFJC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_PFCBAJPBHEP_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Boolean JABOBHLKMEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER_JABOBHLKMEN_OFFSET))(this);
		}
	};
}
