#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MNCIGAHEFLF.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CDDEMDDDBAP;
class DMHOLJNNCJA;
class FMHDMLBDIJC;
class GGPKLBJJFDP;
class IFOHGNLIAKH;
class KFPKNGNFJNO;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ANFHGFIMHGB_OFFSET UNITYSDK_OFFSET(0x18D337F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_BACKTOBAGPAGE_OFFSET UNITYSDK_OFFSET(0x18D28240)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET UNITYSDK_OFFSET(0x18D2B460)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_1_OFFSET UNITYSDK_OFFSET(0x18D28880)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x18D28410)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DBIKPLAHGDD_OFFSET UNITYSDK_OFFSET(0x18D32470)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DIHHOBGOFIM_OFFSET UNITYSDK_OFFSET(0x18D31790)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DJKJOAEFBAA_OFFSET UNITYSDK_OFFSET(0x18D332F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_EILMFPHKIBD_OFFSET UNITYSDK_OFFSET(0x18D33C20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ELGLDKAONFO_OFFSET UNITYSDK_OFFSET(0x18D325B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_FDECAGJHLHN_OFFSET UNITYSDK_OFFSET(0x18D322C0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_FMKEGJEIEIH_OFFSET UNITYSDK_OFFSET(0x18D2A1F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPBACKGROUNDISDROPTARGET_OFFSET UNITYSDK_OFFSET(0x18D269C0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPREADONLYEXCEPTMULTISELL_OFFSET UNITYSDK_OFFSET(0x18D269B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPTABLAST_OFFSET UNITYSDK_OFFSET(0x18D269D0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_HIDEEQUIPSECTION_OFFSET UNITYSDK_OFFSET(0x18D269A0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_HIDESAFEBOXTAB_OFFSET UNITYSDK_OFFSET(0x18D269E0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_PLAYTYPE_OFFSET UNITYSDK_OFFSET(0x18D267B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_SHOWPAGETYPE_OFFSET UNITYSDK_OFFSET(0x18D269F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18D267A0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GKFHCPNGIMG_OFFSET UNITYSDK_OFFSET(0x18D2DB00)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_HCEJCEAFANN_OFFSET UNITYSDK_OFFSET(0x18D32110)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_HIBHPEKANCI_OFFSET UNITYSDK_OFFSET(0x18D33080)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_IMGOOILIKBE_OFFSET UNITYSDK_OFFSET(0x18D32AB0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_JPODHBIDGGA_OFFSET UNITYSDK_OFFSET(0x18D332E0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_KMGPDNFIOKD_OFFSET UNITYSDK_OFFSET(0x18D29E00)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_KOCJFGDLHNC_OFFSET UNITYSDK_OFFSET(0x18D2A850)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_LCJHNOLAAFJ_OFFSET UNITYSDK_OFFSET(0x18D32250)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x18D2E080)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKISOPENED_OFFSET UNITYSDK_OFFSET(0x18D2DCA0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MKHELKEPHIO_OFFSET UNITYSDK_OFFSET(0x18D31980)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_NFFJCOALFOF_OFFSET UNITYSDK_OFFSET(0x18D33760)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_NOBMJLJPAAM_OFFSET UNITYSDK_OFFSET(0x18D27A10)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ODCAKNGLGOG_OFFSET UNITYSDK_OFFSET(0x18D27220)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OGHBJDCNCIO_OFFSET UNITYSDK_OFFSET(0x18D30630)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18D26930)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET UNITYSDK_OFFSET(0x18D2A0B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D26BC0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18D2D650)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18D2EED0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x18D2E380)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18D2FC50)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D30280)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18D281D0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18D30C20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D30F20)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D26D40)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D272B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENITEMINFOPANEL_OFFSET UNITYSDK_OFFSET(0x18D291D0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENMASKITEMINFO_OFFSET UNITYSDK_OFFSET(0x18D2B500)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPMKACFIJGE_OFFSET UNITYSDK_OFFSET(0x18D2D370)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PKGLGPMFMPP_OFFSET UNITYSDK_OFFSET(0x18D26EA0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET UNITYSDK_OFFSET(0x18D2C110)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REMOVESELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x18D28CE0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET UNITYSDK_OFFSET(0x18D30B80)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET UNITYSDK_OFFSET(0x18D2C160)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SELECTQUEST_OFFSET UNITYSDK_OFFSET(0x18D28360)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SETHIDEONCE_OFFSET UNITYSDK_OFFSET(0x18D307E0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_TRYHANDLEWEAPONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0x18D26B70)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATEHINTKEYACTIVE_OFFSET UNITYSDK_OFFSET(0x18D2A000)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D27180)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D31020)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x18D31120)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D311B0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18D31250)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18D312E0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x18D31390)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18D31470)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18D31560)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18D31590)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18D31620)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D316E0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D316F0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D31700)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_TypeDefinitionIndex = 54341;

	class UIBangkovBagPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* HFDCPNCNEDG; // 0x0
		// static const ::System::String* BagScrollView; // 0x0
		// static const ::System::String* BagRegion; // 0x0
		// static const ::System::String* RightRegion; // 0x0
		// static const ::System::String* BoxWrapper; // 0x0
		// static const ::System::Single GIDFFDKGFNH; // 0x0
		::GGPKLBJJFDP* IALDFKEOELD; // 0x320
		::System::Boolean JDJEKBNCMAM; // 0x328
		::System::Byte _padding0[0x7];
		::Il2CppArray<::MoleMole::UIBangkovItemInfoWidgetController*>* LMNNNJNHHMJ; // 0x330
		::IFOHGNLIAKH* MOBBGNKKPBM; // 0x338
		::IFOHGNLIAKH* PFEOCAGGMIC; // 0x340
		::MoleMole::UIInLevelTipsWidgetController* MBJIAEMGNOH; // 0x348
		::System::Action_1<::System::Object*>* KDNJJHCBBKF; // 0x350
		::DMHOLJNNCJA* KHBEIKNPBEI; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EDMANBEFFJG; // 0x360
		::System::Boolean MGNNOAEFBCI; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::OFDKEANKAIL get_PlayType()
		{
			return ((::OFDKEANKAIL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_PLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HideEquipSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_HIDEEQUIPSECTION_OFFSET))(this);
		}

		::System::Boolean get_EquipReadOnlyExceptMultiSell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPREADONLYEXCEPTMULTISELL_OFFSET))(this);
		}

		::System::Boolean get_EquipBackgroundIsDropTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPBACKGROUNDISDROPTARGET_OFFSET))(this);
		}

		::System::Boolean get_EquipTabLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_EQUIPTABLAST_OFFSET))(this);
		}

		::System::Boolean get_HideSafeBoxTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_HIDESAFEBOXTAB_OFFSET))(this);
		}

		::AKLBGAKHAOC get_ShowPageType()
		{
			return ((::AKLBGAKHAOC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GET_SHOWPAGETYPE_OFFSET))(this);
		}

		::System::Boolean TryHandleWeaponDoubleClick(::FMHDMLBDIJC* bagIndex, ::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_TRYHANDLEWEAPONDOUBLECLICK_OFFSET))(this, bagIndex, itemId);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void BackToBagPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_BACKTOBAGPAGE_OFFSET))(this);
		}

		::System::Void SelectQuest(::KFPKNGNFJNO* qeust)
		{
			return ((::System::Void(*)(::PVOID, ::KFPKNGNFJNO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SELECTQUEST_OFFSET))(this, qeust);
		}

		::System::Boolean ContainsInSelectedItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo itemInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_OFFSET))(this, itemInfo);
		}

		::System::Boolean ContainsInSelectedItem_1(::FMHDMLBDIJC* itemIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTAINSINSELECTEDITEM_1_OFFSET))(this, itemIndex);
		}

		::System::Void RemoveSelectedItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo itemInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REMOVESELECTEDITEM_OFFSET))(this, itemInfo);
		}

		::System::Void OpenItemInfoPanel(::MoleMole::UIItemIconBtnWidgetController* ctrl, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENITEMINFOPANEL_OFFSET))(this, ctrl, direction);
		}

		::System::Void OnClickBangkovItem(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::IFOHGNLIAKH* iconController, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::IFOHGNLIAKH*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONCLICKBANGKOVITEM_OFFSET))(this, localBangkovItemInfo, iconController, itemInfoParentOverride);
		}

		::System::Boolean ChangeItemFocusToNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CHANGEITEMFOCUSTONEXT_OFFSET))(this);
		}

		::System::Void OpenMaskItemInfo(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo localBangkovItemInfo, ::UnityEngine::RectTransform* itemInfoParentOverride)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPENMASKITEMINFO_OFFSET))(this, localBangkovItemInfo, itemInfoParentOverride);
		}

		::System::Void UpdateHintKeyActive(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_UPDATEHINTKEYACTIVE_OFFSET))(this, flag);
		}

		::System::Void PreparePrimaryFromExternalIconClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET))(this);
		}

		::System::Void RequestNestedGiftPreview(::MoleMole::UIBangkovItemInfoWidgetController* fromWidget, ::System::Int32 previewItemId, ::IFOHGNLIAKH* iconCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Int32, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTNESTEDGIFTPREVIEW_OFFSET))(this, fromWidget, previewItemId, iconCtrl);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::MNCIGAHEFLF navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::MNCIGAHEFLF, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetHideOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_SETHIDEONCE_OFFSET))(this);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void RequestCloseItemInfoPopupFromOutsideClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_REQUESTCLOSEITEMINFOPOPUPFROMOUTSIDECLICK_OFFSET))(this);
		}

		::System::Boolean MaskIsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MASKISOPENED_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::MNCIGAHEFLF P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::MNCIGAHEFLF, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void KMGPDNFIOKD(::System::Int32 HPEMFJDOAKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_KMGPDNFIOKD_OFFSET))(this, HPEMFJDOAKL);
		}

		::System::Void DIHHOBGOFIM(::FMHDMLBDIJC* HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DIHHOBGOFIM_OFFSET))(this, HODAIDNDKHD);
		}

		::CDDEMDDDBAP* OGMPOGIHBIK()
		{
			return ((::CDDEMDDDBAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::IFOHGNLIAKH* MKHELKEPHIO()
		{
			return ((::IFOHGNLIAKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_MKHELKEPHIO_OFFSET))(this);
		}

		::System::Void HCEJCEAFANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_HCEJCEAFANN_OFFSET))(this);
		}

		::System::Void FMKEGJEIEIH(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo IJPCNIJCKKJ, ::IFOHGNLIAKH* CPAHLHMBPME, ::UnityEngine::RectTransform* DEPOILMNOIF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::IFOHGNLIAKH*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_FMKEGJEIEIH_OFFSET))(this, IJPCNIJCKKJ, CPAHLHMBPME, DEPOILMNOIF);
		}

		::System::Void FDECAGJHLHN(::System::Int32 HPEMFJDOAKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_FDECAGJHLHN_OFFSET))(this, HPEMFJDOAKL);
		}

		::System::Boolean OGHBJDCNCIO(::MoleMole::InputActionEvent MLNBANAGAEE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OGHBJDCNCIO_OFFSET))(this, MLNBANAGAEE);
		}

		::System::Void PKGLGPMFMPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_PKGLGPMFMPP_OFFSET))(this);
		}

		::System::Void ODCAKNGLGOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ODCAKNGLGOG_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* LCJHNOLAAFJ()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_LCJHNOLAAFJ_OFFSET))(this);
		}

		::System::Void JPODHBIDGGA(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_JPODHBIDGGA_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Boolean ELGLDKAONFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ELGLDKAONFO_OFFSET))(this);
		}

		::System::Boolean GKFHCPNGIMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_GKFHCPNGIMG_OFFSET))(this);
		}

		::System::Void NOBMJLJPAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_NOBMJLJPAAM_OFFSET))(this);
		}

		::System::Boolean HIBHPEKANCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_HIBHPEKANCI_OFFSET))(this);
		}

		::System::Void DBIKPLAHGDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DBIKPLAHGDD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* OPMKACFIJGE(::MoleMole::UIBangkovItemInfoWidgetController* EFDNKKCCPCO)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_OPMKACFIJGE_OFFSET))(this, EFDNKKCCPCO);
		}

		::System::Void KOCJFGDLHNC(::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo IJPCNIJCKKJ, ::IFOHGNLIAKH* CPAHLHMBPME, ::UnityEngine::RectTransform* DEPOILMNOIF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo, ::IFOHGNLIAKH*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_KOCJFGDLHNC_OFFSET))(this, IJPCNIJCKKJ, CPAHLHMBPME, DEPOILMNOIF);
		}

		::System::Void NFFJCOALFOF(::System::Object* MFHBPIBHAOB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_NFFJCOALFOF_OFFSET))(this, MFHBPIBHAOB);
		}

		::System::Boolean IMGOOILIKBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_IMGOOILIKBE_OFFSET))(this);
		}

		::System::Void DJKJOAEFBAA(::MoleMole::MonoGamepadModule* JPJOBEJPPLN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_DJKJOAEFBAA_OFFSET))(this, JPJOBEJPPLN);
		}

		::System::Void ANFHGFIMHGB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_ANFHGFIMHGB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void EILMFPHKIBD(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_EILMFPHKIBD_OFFSET))(this, PIIPCLCCOIG);
		}
	};
}
