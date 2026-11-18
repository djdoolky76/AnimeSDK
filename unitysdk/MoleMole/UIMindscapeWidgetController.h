#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_ECardClampType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroStickMergeType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickState.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class BPHGNMNLLHF;
class EMNHDPCCAEG;
class HBCHFHIEJDH;
class HGAJKHIMKJP;
class KJIEDDLNJFC;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIMindscapeCutBgController; }
namespace MoleMole { class UIMindscapeSwitchBtnRowWidgetController; }
namespace MoleMole { class UIRoleChangeWidgetController; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_AHNMJLDGKPD_OFFSET UNITYSDK_OFFSET(0x18EA6A00)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ALNLIGMBMLM_OFFSET UNITYSDK_OFFSET(0x18EA6890)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_AMLDFNGLDJA_OFFSET UNITYSDK_OFFSET(0x18EA7050)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BBBFGEANPNC_OFFSET UNITYSDK_OFFSET(0x18EA9A00)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BDAOBOHFPOE_OFFSET UNITYSDK_OFFSET(0x18EA5860)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x18EA1780)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CDKGBEHACPJ_OFFSET UNITYSDK_OFFSET(0x18EA8290)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHEBNJKNHMG_OFFSET UNITYSDK_OFFSET(0x18EA6BE0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHECKITEMISCALLINGCARDRECURSION_OFFSET UNITYSDK_OFFSET(0x18EA5530)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CKPLHNNDOHM_OFFSET UNITYSDK_OFFSET(0x18EA9480)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DDOAOHIDGHB_OFFSET UNITYSDK_OFFSET(0x18EA9DB0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DNEOHGDNFEP_OFFSET UNITYSDK_OFFSET(0x18EAA290)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EAIHOONAJGD_OFFSET UNITYSDK_OFFSET(0x18EA8040)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EEAGCCDHNNM_OFFSET UNITYSDK_OFFSET(0x18EA8EA0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EGFGDCOEALF_OFFSET UNITYSDK_OFFSET(0x18EA9200)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EOINONLFNGK_OFFSET UNITYSDK_OFFSET(0x18EA7700)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_FFDCNIGNBBN_OFFSET UNITYSDK_OFFSET(0x18EA9280)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_FIBOBFIFFGJ_OFFSET UNITYSDK_OFFSET(0x18EA9A20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HBHIPDHBKJK_OFFSET UNITYSDK_OFFSET(0x18EA77E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HDLAPJOAEAB_OFFSET UNITYSDK_OFFSET(0x18EA52C0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HEEJCJLCCHG_OFFSET UNITYSDK_OFFSET(0x18EA9120)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IBPAIOGCHNO_OFFSET UNITYSDK_OFFSET(0x18EAA480)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IHIBGFMMIGL_OFFSET UNITYSDK_OFFSET(0x18EA7DF0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ILMPBPKDHJM_OFFSET UNITYSDK_OFFSET(0x18EA3DB0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IPGJAENGJID_OFFSET UNITYSDK_OFFSET(0x18EA8120)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0x18EA2250)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_JLHFGMJMMCJ_OFFSET UNITYSDK_OFFSET(0x18EA5080)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KAEOAENHJCG_OFFSET UNITYSDK_OFFSET(0x18EAA4E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KMANAHAGKJL_OFFSET UNITYSDK_OFFSET(0x18EA6A10)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KMINCIEACCK_OFFSET UNITYSDK_OFFSET(0x18EAA3E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_LBGAIMJHHMJ_OFFSET UNITYSDK_OFFSET(0x18EA4190)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_LFMNGIOPFPP_OFFSET UNITYSDK_OFFSET(0x18EA4EC0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MCILACCDNJI_OFFSET UNITYSDK_OFFSET(0x18EAA490)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MHDMCBKHEDC_OFFSET UNITYSDK_OFFSET(0x18EA9AA0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MJNHAGPJCHK_OFFSET UNITYSDK_OFFSET(0x18EA7E40)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_NCDMBFMPDBF_OFFSET UNITYSDK_OFFSET(0x18EA8960)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_NJICDFCNIGK_OFFSET UNITYSDK_OFFSET(0x18EA3DF0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OGPOMLGDPKH_OFFSET UNITYSDK_OFFSET(0x18EA8B70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EA2370)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18EA50D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18EA2120)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18EA2460)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18EA4FB0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EA1DD0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EA1C80)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EA5C70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EA1440)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EA1A90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPMLOEHBMPE_OFFSET UNITYSDK_OFFSET(0x18EA7C20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18EA2050)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PFGICLKACBK_OFFSET UNITYSDK_OFFSET(0x18EA9950)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x18EA5410)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET UNITYSDK_OFFSET(0x18EA2400)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET UNITYSDK_OFFSET(0x18EA45F0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18EA3E70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EA62D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA6020)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EA6360)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18EA63F0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18EA64E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18EA6570)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18EA65A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EA6630)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EA66D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EA66E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EA6770)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EA6800)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_TypeDefinitionIndex = 40355;

	class UIMindscapeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_IsGyroscopeUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF050);
		}
		static ::System::Boolean* StaticGet_IsStickUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF051);
		}
		static ::System::Single* StaticGet_DampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF054);
		}
		static ::MoleMole::UIMindscapeWidgetController_EGyroType* StaticGet_GyroType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF058);
		}
		static ::System::Single* StaticGet_GyroscopeRateY()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF05C);
		}
		static ::System::Single* StaticGet_StickMoveRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF060);
		}
		static ::System::Single* StaticGet_StickMoveThesholdSqr()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF064);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMin()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF068);
		}
		static ::MoleMole::UIMindscapeWidgetController_ECardClampType* StaticGet_CardClampType()
		{
			return (::MoleMole::UIMindscapeWidgetController_ECardClampType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF06C);
		}
		static ::System::Single* StaticGet_GyroscopeSpeed()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF070);
		}
		static ::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType* StaticGet_GyroStickMergeType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF074);
		}
		static ::System::Single* StaticGet_StickMoveTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF078);
		}
		static ::System::Single* StaticGet_GyroscopeRateX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF07C);
		}
		static ::System::Single* StaticGet_AccelIgnoreRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF080);
		}
		static ::System::Single* StaticGet_StickToGyroTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF084);
		}
		static ::System::Single* StaticGet_PcLerpSpeedPower()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF088);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMax()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF08C);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickType* StaticGet_StickType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF090);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickState* StaticGet_StickState()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickState*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF094);
		}
		static ::UnityEngine::Vector2* StaticGet_PcDragSpeed()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF098);
		}
		static ::System::Single* StaticGet_PCDampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF0A0);
		}
		static ::System::Boolean* StaticGet_IsPcResetWhenMouseUp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF0A4);
		}
		static ::System::Boolean* StaticGet_UseOldGyroscope()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF0A5);
		}
		static ::System::Boolean* StaticGet_IsPcUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF0A6);
		}
		static ::System::Boolean* StaticGet_IsPcUseDrag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xF0A7);
		}
		// static const ::System::Int32 NMBJECJIEDH = 0x5; // 0x0
		::EMNHDPCCAEG* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeCutBgController*>* DCAMJLDBANK; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* AAGPALEEJDM; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeSwitchBtnRowWidgetController*>* PENDLJEPONB; // 0x2E0
		::MoleMole::UIGeneralToggleWidgetController* FEKLBBDNNJG; // 0x2E8
		::System::Boolean HJKAEMABJJE; // 0x2F0
		::System::Byte _padding0[0x7];
		::MoleMole::UIMindscapeCutBgController* JDBJFPBAKCL; // 0x2F8
		::MoleMole::UIRoleChangeWidgetController* IHNCKHDCLIJ; // 0x300
		::MoleMole::UIRoleInfoPageContext* KCJFFPCNPGD; // 0x308
		::BPHGNMNLLHF* NGHCGPEMMHP; // 0x310
		::System::Boolean DNAOJDHHPIJ; // 0x318
		::System::Boolean KPAAPKODIEH; // 0x319
		::System::Boolean IGBGKOMMBKO; // 0x31A
		::System::Byte _padding1[0x5];
		::Il2CppArray<::System::Boolean>* MEBFLACGNOK; // 0x320
		::System::Action* DCANDBAINGJ; // 0x328
		::System::Action* AEEIMOBBEFD; // 0x330
		::System::Boolean DPPJDOMJAIP; // 0x338
		::System::Byte _padding2[0x3];
		::System::Int32 IPAFKEOJEMM; // 0x33C
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x340
		::System::String* MLMNCFGIPHM; // 0x348
		::System::Single KBDKDMMHDFL; // 0x350
		::Foundation::Coroutine::CoroutineHandle HGIJHODLIBC; // 0x354
		::System::Single JMEHIFIPDPC; // 0x358
		::System::Single PANJKMIKBHE; // 0x35C
		::UnityEngine::Vector2 AFKCFAEINFD; // 0x360
		::UnityEngine::Vector2 DALLKNPNLGH; // 0x368
		::System::Nullable_1<::UnityEngine::Quaternion> PODGPIACKLG; // 0x370
		::System::Byte _padding3[0x10];
		::HBCHFHIEJDH* JDLAOHDBNBG; // 0x388
		::System::Single FBFIIDHDKIH; // 0x390
		::System::Single GLMJCKAEGOD; // 0x394
		::System::Boolean NJIMJFPBDNI; // 0x398
		::System::Boolean FLCAODMANMB; // 0x399
		::System::Byte _padding4[0x2];
		::System::Single GFMNJNMFIFE; // 0x39C
		::UnityEngine::Vector2 JIKNFAJHLJM; // 0x3A0
		::UnityEngine::Vector2 LLNCBENAGIM; // 0x3A8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OHHGHIFFKCH; // 0x3B0
		::System::Single GLGOEDDMBPO; // 0x3B8
		::UnityEngine::Vector2 CJAFLLNKCBJ; // 0x3BC
		::UnityEngine::Vector2 ALCNMDJDPDI; // 0x3C4
		::UnityEngine::Vector2 LCIPAGMJHGP; // 0x3CC
		::Foundation::Coroutine::CoroutineHandle IBAPDMIAJKM; // 0x3D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetCloseAction(::System::Action* action, ::System::Action* overAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET))(this, action, overAction);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLenticular()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Single PlayMaskFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET))(this);
		}

		::System::Void CheckItemIsCallingCardRecursion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHECKITEMISCALLINGCARDRECURSION_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ALNLIGMBMLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ALNLIGMBMLM_OFFSET))(this);
		}

		::System::Void NJICDFCNIGK(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_NJICDFCNIGK_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 AHNMJLDGKPD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_AHNMJLDGKPD_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, IAOJECCOMPN);
		}

		::System::Void AMLDFNGLDJA(::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_AMLDFNGLDJA_OFFSET))(this, CPHDDAGKHLB);
		}

		::System::Void EOINONLFNGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EOINONLFNGK_OFFSET))(this);
		}

		::System::Void HBHIPDHBKJK(::System::Int32 EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HBHIPDHBKJK_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void IHIBGFMMIGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IHIBGFMMIGL_OFFSET))(this);
		}

		::System::Void MJNHAGPJCHK(::System::Int32 EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MJNHAGPJCHK_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean OPMLOEHBMPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPMLOEHBMPE_OFFSET))(this);
		}

		::System::Void EAIHOONAJGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EAIHOONAJGD_OFFSET))(this);
		}

		::System::Single LFMNGIOPFPP(::System::Single CKPGOKHECCH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_LFMNGIOPFPP_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void IPGJAENGJID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IPGJAENGJID_OFFSET))(this);
		}

		::System::Boolean ILMPBPKDHJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ILMPBPKDHJM_OFFSET))(this);
		}

		::System::Void CDKGBEHACPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CDKGBEHACPJ_OFFSET))(this);
		}

		::System::Void OGPOMLGDPKH(::KJIEDDLNJFC* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::KJIEDDLNJFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OGPOMLGDPKH_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void EEAGCCDHNNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EEAGCCDHNNM_OFFSET))(this);
		}

		::System::Void EGFGDCOEALF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_EGFGDCOEALF_OFFSET))(this);
		}

		::System::Void HDLAPJOAEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HDLAPJOAEAB_OFFSET))(this);
		}

		::System::Void JLHFGMJMMCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_JLHFGMJMMCJ_OFFSET))(this);
		}

		::System::Void FFDCNIGNBBN(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_FFDCNIGNBBN_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void CKPLHNNDOHM(::System::Int32 EIFONLCJOPG, ::System::Boolean ONPIMDKPDJB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CKPLHNNDOHM_OFFSET))(this, EIFONLCJOPG, ONPIMDKPDJB);
		}

		::System::Void HEEJCJLCCHG(::System::Boolean CMBKOECNKKG, ::System::Boolean ONPIMDKPDJB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_HEEJCJLCCHG_OFFSET))(this, CMBKOECNKKG, ONPIMDKPDJB);
		}

		::System::Void CHEBNJKNHMG(::System::String* CNOPOAFPLON, ::System::Action* MPLOACBJCMC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHEBNJKNHMG_OFFSET))(this, CNOPOAFPLON, MPLOACBJCMC);
		}

		::System::Void PFGICLKACBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PFGICLKACBK_OFFSET))(this);
		}

		::System::String* KMANAHAGKJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KMANAHAGKJL_OFFSET))(this);
		}

		::System::Void LBGAIMJHHMJ(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Boolean GOOFJALPBDO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_LBGAIMJHHMJ_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GOOFJALPBDO);
		}

		::System::Void BBBFGEANPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BBBFGEANPNC_OFFSET))(this);
		}

		::System::Void FIBOBFIFFGJ(::System::Int32 EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_FIBOBFIFFGJ_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 NCDMBFMPDBF(::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_NCDMBFMPDBF_OFFSET))(this, IAOJECCOMPN);
		}

		::System::Void MHDMCBKHEDC(::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MHDMCBKHEDC_OFFSET))(this, IAOJECCOMPN);
		}

		::System::Void DNEOHGDNFEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DNEOHGDNFEP_OFFSET))(this);
		}

		::System::Void BDAOBOHFPOE(::System::Boolean DPAAPBODCFG, ::System::Boolean PIBNMOKLNEM, ::System::Boolean KHODCEHLBDJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BDAOBOHFPOE_OFFSET))(this, DPAAPBODCFG, PIBNMOKLNEM, KHODCEHLBDJ);
		}

		::System::Void KMINCIEACCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KMINCIEACCK_OFFSET))(this);
		}

		::System::Void IBPAIOGCHNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_IBPAIOGCHNO_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void MCILACCDNJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_MCILACCDNJI_OFFSET))(this);
		}

		::System::Void DDOAOHIDGHB(::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DDOAOHIDGHB_OFFSET))(this, IAOJECCOMPN);
		}

		::System::Void KAEOAENHJCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_KAEOAENHJCG_OFFSET))(this);
		}
	};
}
