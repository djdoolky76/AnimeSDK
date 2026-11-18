#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/IJGIBMLAOEG.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class OBNFLGIOLNA;
class OJNFJDBNLHL;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class RABPageCtrlContext; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole { class UIRABDepositoryWidgetController; }
namespace MoleMole { class UIRABGachaRowWidgetController; }
namespace MoleMole { class UIRABPageBtnRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABPAGECONTROLLER_EENNAFOJIGJ_OFFSET UNITYSDK_OFFSET(0x17D79E50)
#define MOLEMOLE_UIRABPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x17D78D60)
#define MOLEMOLE_UIRABPAGECONTROLLER_GET_RAB3DBATTLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17D77540)
#define MOLEMOLE_UIRABPAGECONTROLLER_GJBIFPCDLCK_OFFSET UNITYSDK_OFFSET(0x17D79EE0)
#define MOLEMOLE_UIRABPAGECONTROLLER_INJOCODMDME_OFFSET UNITYSDK_OFFSET(0x17D79A70)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONBKGHJELMM_OFFSET UNITYSDK_OFFSET(0x17D79D80)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D77550)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17D78140)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONLOCALENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x17D78F20)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17D781C0)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D799B0)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D775E0)
#define MOLEMOLE_UIRABPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D77840)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYBANGBOOEYESEQUENCE_OFFSET UNITYSDK_OFFSET(0x17D794F0)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYBLACKMASKANI_OFFSET UNITYSDK_OFFSET(0x17D78890)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYCONTENTANI_OFFSET UNITYSDK_OFFSET(0x17D79790)
#define MOLEMOLE_UIRABPAGECONTROLLER_PLAYSTAGEUPANI_OFFSET UNITYSDK_OFFSET(0x17D78BB0)
#define MOLEMOLE_UIRABPAGECONTROLLER_SETCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x17D78CD0)
#define MOLEMOLE_UIRABPAGECONTROLLER_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0x17D77A20)
#define MOLEMOLE_UIRABPAGECONTROLLER_SWITCHPAGE_OFFSET UNITYSDK_OFFSET(0x17D78220)
#define MOLEMOLE_UIRABPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17D796C0)
#define MOLEMOLE_UIRABPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D79AD0)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x17D79AE0)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D79B70)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17D79C00)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONLOCALENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x17D79C90)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17D79D40)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D79D50)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D79D60)
#define MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D79D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageController_TypeDefinitionIndex = 85849;

	class UIRABPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* MIPHDHHDAEO; // 0x0
		// static const ::System::String* LLFLKFPFIGF; // 0x0
		// static const ::System::String* ALOFHAPGEJD; // 0x0
		// static const ::System::String* MIAAHNFIGJA; // 0x0
		// static const ::System::String* ICBICKMKCDC; // 0x0
		// static const ::System::String* GPKCHJBFKFL; // 0x0
		::MoleMole::UIRABAutoBattleBase3DModelController* KAHDBKDAOMJ; // 0x330
		::OJNFJDBNLHL* _view; // 0x338
		::MoleMole::RABPageCtrlContext* BELKOBEJJFJ; // 0x340
		::IJGIBMLAOEG AJJKCKLACHN; // 0x348
		::System::Byte _padding0[0x4];
		::MoleMole::UIRABPageBtnRowWidgetController* DEFHKIKOOAD; // 0x350
		::MoleMole::UIRABDepositoryWidgetController* LMGEDFAGCLJ; // 0x358
		::MoleMole::UIRABGachaRowWidgetController* GPGMMBPNHBA; // 0x360
		::DPHLOBCHIEA DJEHKFHHGEL; // 0x368
		::System::Byte _padding1[0x4];
		::MoleMole::Battle::Entity* KCGAFMIGBCL; // 0x370
		::UnityEngine::GameObject* JGCCNJGJEKE; // 0x378
		::MoleMole::ScreenPlayer* EHAPCKBINCK; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRABAutoBattleBase3DModelController* get_RAB3DBattleController()
		{
			return ((::MoleMole::UIRABAutoBattleBase3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_GET_RAB3DBATTLECONTROLLER_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void SwitchPage(::IJGIBMLAOEG page, ::System::Int32 jumpParam, ::IJGIBMLAOEG backPageType)
		{
			return ((::System::Void(*)(::PVOID, ::IJGIBMLAOEG, ::System::Int32, ::IJGIBMLAOEG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SWITCHPAGE_OFFSET))(this, page, jumpParam, backPageType);
		}

		::System::Void ShowPage(::IJGIBMLAOEG type, ::System::Int32 jumpParam)
		{
			return ((::System::Void(*)(::PVOID, ::IJGIBMLAOEG, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SHOWPAGE_OFFSET))(this, type, jumpParam);
		}

		::System::Void PlayBlackMaskAni(::System::Boolean isFadeOut, ::System::Boolean isSamp, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYBLACKMASKANI_OFFSET))(this, isFadeOut, isSamp, onComplete);
		}

		::System::Void PlayStageUpAni(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYSTAGEUPANI_OFFSET))(this, onComplete);
		}

		::OBNFLGIOLNA* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::OBNFLGIOLNA*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::System::Void OnLocalEntityLoaded(::System::Int32 configID, ::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONLOCALENTITYLOADED_OFFSET))(this, configID, entityHandle);
		}

		::System::Void PlayBangbooEyeSequence(::System::Int32 stageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYBANGBOOEYESEQUENCE_OFFSET))(this, stageId);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetContentActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_SETCONTENTACTIVE_OFFSET))(this, active);
		}

		::System::Single PlayContentAni(::System::Boolean isFadeIn, ::System::Boolean withAni)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_PLAYCONTENTANI_OFFSET))(this, isFadeIn, withAni);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::OBNFLGIOLNA* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::OBNFLGIOLNA*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLocalEntityLoaded(::System::Int32 P0, ::MoleMole::EntityHandle P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONLOCALENTITYLOADED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ONBKGHJELMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_ONBKGHJELMM_OFFSET))(this);
		}

		::System::Void EENNAFOJIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_EENNAFOJIGJ_OFFSET))(this);
		}

		::System::Void INJOCODMDME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_INJOCODMDME_OFFSET))(this);
		}

		::System::Void GJBIFPCDLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER_GJBIFPCDLCK_OFFSET))(this);
		}
	};
}
