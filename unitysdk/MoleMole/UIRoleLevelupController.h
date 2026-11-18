#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class BKGKJNHLCKC;
class BPHGNMNLLHF;
class GIBMJLOJLKD;
class HGAJKHIMKJP;
class HPGBIDMABJP;
class IAENDOJEAFA;
class JKNLCCEJEAH;
class MBIAMKBFLMK;
class NBABKAOCNHB;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleDevelopPopWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIROLELEVELUPCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x155E55A0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_BJPCNMEAAHP_OFFSET UNITYSDK_OFFSET(0x155EBB30)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_BMMEOJAAPNF_OFFSET UNITYSDK_OFFSET(0x155EBFC0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CEDGBMMBMGE_OFFSET UNITYSDK_OFFSET(0x155E84C0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CEJJLLJHKJG_OFFSET UNITYSDK_OFFSET(0x155E66C0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CEJKFIAOCKA_OFFSET UNITYSDK_OFFSET(0x155E7570)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CHFJOGNFEKM_OFFSET UNITYSDK_OFFSET(0x155EA550)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_CLEARMATERIAL_OFFSET UNITYSDK_OFFSET(0x155E6C90)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_DIDBNMCAOFF_OFFSET UNITYSDK_OFFSET(0x155EC1E0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_DIECDKCELNL_OFFSET UNITYSDK_OFFSET(0x155E9D10)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_DOAMMKHGJBC_OFFSET UNITYSDK_OFFSET(0x155EB7F0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_DPKPGPOGGAI_OFFSET UNITYSDK_OFFSET(0x155EBF10)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ELANMENGBFG_OFFSET UNITYSDK_OFFSET(0x155E72A0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_FICJLOKPFEP_OFFSET UNITYSDK_OFFSET(0x155EC1C0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_FPLCEJIFEPC_OFFSET UNITYSDK_OFFSET(0x155E9240)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GBFICPCCFEL_OFFSET UNITYSDK_OFFSET(0x155EC990)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GFIBLIFEINO_OFFSET UNITYSDK_OFFSET(0x155E6980)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_GHBCAKPCIIG_OFFSET UNITYSDK_OFFSET(0x155EBDB0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_HCAEIJJCEMC_OFFSET UNITYSDK_OFFSET(0x155EC100)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_HFPLBOJBKAN_OFFSET UNITYSDK_OFFSET(0x155EB020)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_HICEDJPFEKP_OFFSET UNITYSDK_OFFSET(0x155EA640)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_KCJJOFDBMCM_OFFSET UNITYSDK_OFFSET(0x155E88F0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_LNOJDEJEMAE_OFFSET UNITYSDK_OFFSET(0x155EBA80)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN1_OFFSET UNITYSDK_OFFSET(0x155E61C0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN2_OFFSET UNITYSDK_OFFSET(0x155E6830)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x155E7450)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E79F0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155E5AD0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E6EC0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E6000)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x155E5D90)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x155E52E0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155E8D20)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x155E8FA0)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x155E9050)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155E9080)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E9120)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E91B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleLevelupController_TypeDefinitionIndex = 72623;

	class UIRoleLevelupController : public ::MoleMole::UIWidgetController
	{
	public:
		::NBABKAOCNHB* _view; // 0x2C8
		::BPHGNMNLLHF* NGHCGPEMMHP; // 0x2D0
		::BKGKJNHLCKC* DCPFGBNLIPF; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* GGHFFLCKMOF; // 0x2E0
		::HPGBIDMABJP* KDMABPELCGN; // 0x2E8
		::JKNLCCEJEAH* LJMJLHDNOGC; // 0x2F0
		::MBIAMKBFLMK* CABNHLKACIB; // 0x2F8
		::MoleMole::UIRoleDevelopPopWindowController* PNLDCLGPDME; // 0x300
		::System::Collections::Generic::List_1<::IAENDOJEAFA*>* DJBJPBPNOIC; // 0x308
		::System::Boolean DLFJCEPAJHN; // 0x310
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* HEEPMIGKMHK; // 0x318
		::MoleMole::MonoGamepadCustomList* MAABPNLNBFN; // 0x320
		::System::Int32 AGFOCMKJOLF; // 0x328
		::System::Int32 BMNLMEGNHFC; // 0x32C
		::System::Boolean MOABCEDPFBL; // 0x330
		::System::Boolean AHIPOCIOGDK; // 0x331
		::System::Byte _padding1[0x2];
		::System::Int32 DADEBKIEDAI; // 0x334
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GHECPAMIHGP; // 0x338
		::System::Int32 AGJFLPGCFEO; // 0x340
		::System::Int32 PNMKABHAPDH; // 0x344
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CKBNNHFFELG; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NCACEFAKLBO; // 0x350
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JECMIJLKKBH; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetParentView(::GIBMJLOJLKD* view)
		{
			return ((::System::Void(*)(::PVOID, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnClickBtn1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN1_OFFSET))(this);
		}

		::System::Void OnClickBtn2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONCLICKBTN2_OFFSET))(this);
		}

		::System::Void ClearMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CLEARMATERIAL_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void DIECDKCELNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_DIECDKCELNL_OFFSET))(this);
		}

		::System::Void HFPLBOJBKAN(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_HFPLBOJBKAN_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void CHFJOGNFEKM(::System::Single LDDJOFHAOHG, ::System::Single KBPLMDAFOEF, ::System::Int32 JMBPLCPDMMN, ::System::Int32 ODIDIOMBLKG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CHFJOGNFEKM_OFFSET))(this, LDDJOFHAOHG, KBPLMDAFOEF, JMBPLCPDMMN, ODIDIOMBLKG);
		}

		::System::Void DOAMMKHGJBC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DJCNCELJPOM, ::System::Int32 CBKAOKDJAMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_DOAMMKHGJBC_OFFSET))(this, DJCNCELJPOM, CBKAOKDJAMP);
		}

		::System::Void LNOJDEJEMAE(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_LNOJDEJEMAE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Boolean HICEDJPFEKP(::System::Boolean DKLFDOIGKGM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_HICEDJPFEKP_OFFSET))(this, DKLFDOIGKGM);
		}

		::System::Void GHBCAKPCIIG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GHBCAKPCIIG_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Boolean CEJJLLJHKJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CEJJLLJHKJG_OFFSET))(this);
		}

		::System::Void FPLCEJIFEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_FPLCEJIFEPC_OFFSET))(this);
		}

		::System::Void KCJJOFDBMCM(::System::Int32 FOLKIBNJNHM, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_KCJJOFDBMCM_OFFSET))(this, FOLKIBNJNHM, JIHLGFDODBC, NPPMJEIPMFC);
		}

		::System::Void CEDGBMMBMGE(::System::Int32 FOLKIBNJNHM, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CEDGBMMBMGE_OFFSET))(this, FOLKIBNJNHM, JIHLGFDODBC, NPPMJEIPMFC);
		}

		::System::Void BMMEOJAAPNF(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_BMMEOJAAPNF_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Int32 BJPCNMEAAHP(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_BJPCNMEAAHP_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void HCAEIJJCEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_HCAEIJJCEMC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GFIBLIFEINO()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GFIBLIFEINO_OFFSET))(this);
		}

		::System::Void FICJLOKPFEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_FICJLOKPFEP_OFFSET))(this);
		}

		::System::Void DIDBNMCAOFF(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_DIDBNMCAOFF_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void CEJKFIAOCKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_CEJKFIAOCKA_OFFSET))(this);
		}

		::System::Void ELANMENGBFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_ELANMENGBFG_OFFSET))(this);
		}

		::System::Void DPKPGPOGGAI(::System::Int32 KBKKELFNKMB, ::System::Int32 IBEKHOENAEJ, ::System::Int32 EDHGIHDCEEF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_DPKPGPOGGAI_OFFSET))(this, KBKKELFNKMB, IBEKHOENAEJ, EDHGIHDCEEF);
		}

		::System::Void GBFICPCCFEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER_GBFICPCCFEL_OFFSET))(this);
		}
	};
}
