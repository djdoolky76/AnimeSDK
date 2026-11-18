#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIRouletteWidgetControllerBase_DebugInfo.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GCIMMDDIFBJ;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ACNIMPKPDKN_OFFSET UNITYSDK_OFFSET(0x14CCD840)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_BKOFAGIPDML_OFFSET UNITYSDK_OFFSET(0x14CCA030)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLAMPDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x14CCA2B0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x14CCA110)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DNGEDJOJDJE_OFFSET UNITYSDK_OFFSET(0x14CC9AF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x14CCB5C0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_EBLPKEAJPHK_OFFSET UNITYSDK_OFFSET(0x14CCC170)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ELIDDNCHEJG_OFFSET UNITYSDK_OFFSET(0x14CCD220)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GEJBPNJAIDJ_OFFSET UNITYSDK_OFFSET(0x14CC8830)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETCURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x14CC7240)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETINDEXDIRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x14CC8440)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETMISTAKECURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x14CC7290)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETRINGINNERRADIUS_OFFSET UNITYSDK_OFFSET(0x14CC9C70)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETVECTORINDEX_OFFSET UNITYSDK_OFFSET(0x14CCAB30)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_CONSOLELISTENLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x14CC9010)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x14CC7230)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET UNITYSDK_OFFSET(0x14CCBD60)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_IMPGICOLEGB_OFFSET UNITYSDK_OFFSET(0x14CCCFC0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITBUTTONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x14CC7360)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITSELECTINDEXONSHOW_OFFSET UNITYSDK_OFFSET(0x14CC7F10)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISSHOWCURSORMODE_OFFSET UNITYSDK_OFFSET(0x14CC7E10)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JJHEFCNKHII_OFFSET UNITYSDK_OFFSET(0x14CCD640)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JNFOFHGKJKM_OFFSET UNITYSDK_OFFSET(0x14CCCD30)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JNNCOJBKMDM_OFFSET UNITYSDK_OFFSET(0x14CCCA20)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_KOEIFIPDHDH_OFFSET UNITYSDK_OFFSET(0x14CCC4D0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14CC7680)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MEDGICBOBBH_OFFSET UNITYSDK_OFFSET(0x14CCCB20)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MHFEFAEPJEO_OFFSET UNITYSDK_OFFSET(0x14CCD5F0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MJIDABJCIIK_OFFSET UNITYSDK_OFFSET(0x14CC9E30)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14CC9020)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONROULETTELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14CC76D0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CC75F0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14CC72E0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEIN_OFFSET UNITYSDK_OFFSET(0x14CCB960)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEOUT_OFFSET UNITYSDK_OFFSET(0x14CCBC80)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x14CCB900)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x14CCBC10)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYTITLEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x14CCBF40)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_REFRESHTITLETXT_OFFSET UNITYSDK_OFFSET(0x14CCBF90)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_SETONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x14CC7DC0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPBUTTON_OFFSET UNITYSDK_OFFSET(0x14CCB760)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14CC8AF0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_GAMEPAD_OFFSET UNITYSDK_OFFSET(0x14CC7780)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOBILE_OFFSET UNITYSDK_OFFSET(0x14CCB090)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOUSENEW_OFFSET UNITYSDK_OFFSET(0x14CC9530)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCC830)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14CCC950)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CCC8A0)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14CCC980)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x14CCC940)
#define MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x14CCCA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRouletteWidgetControllerBase_TypeDefinitionIndex = 66089;

	class UIRouletteWidgetControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MGPKIPCHIHF; // 0x0
		::System::Boolean LDHNLBFLBNA; // 0x2C8
		::System::Byte _padding0[0x3];
		::System::Int32 _currentIndex; // 0x2CC
		::System::Int32 _currentRealStickIndex; // 0x2D0
		::UnityEngine::Vector2 _mousePos; // 0x2D4
		::System::Nullable_1<::UnityEngine::Vector2> _touchPos; // 0x2DC
		::System::Byte _padding1[0x4];
		::System::Single DKOGBBBJNDJ; // 0x2E8
		::System::Int32 FNEHBOAKEGJ; // 0x2EC
		::System::Boolean HPBAMNGFIOL; // 0x2F0
		::System::Byte _padding2[0x7];
		::System::Action_1<::System::Int32>* ABLLGDNLOIL; // 0x2F8
		::MoleMole::UIRouletteWidgetControllerBase_DebugInfo EODBKDDMFON; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Int32 GetCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETCURRENTINDEX_OFFSET))(this);
		}

		::System::Int32 GetMistakeCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETMISTAKECURRENTINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRouletteLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONROULETTELATEUPDATE_OFFSET))(this);
		}

		::System::Void SetOnClickButton(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_SETONCLICKBUTTON_OFFSET))(this, onClick);
		}

		::System::Boolean IsShowCursorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ISSHOWCURSORMODE_OFFSET))(this);
		}

		::System::Void InitSelectIndexOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITSELECTINDEXONSHOW_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_ConsoleListenLogicEvent()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_CONSOLELISTENLOGICEVENT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void UpdateSelect_Gamepad(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_GAMEPAD_OFFSET))(this, value);
		}

		::System::Void UpdateSelect_MouseNew(::UnityEngine::Vector2 deltaPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOUSENEW_OFFSET))(this, deltaPos);
		}

		::System::Void UpdateSelect_Mobile(::UnityEngine::Vector3 touchScreenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECT_MOBILE_OFFSET))(this, touchScreenPos);
		}

		::System::Void UpdateSelectIndex(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPDATESELECTINDEX_OFFSET))(this, index, force);
		}

		::System::Boolean ClickButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLICKBUTTON_OFFSET))(this, index);
		}

		::System::Void DownButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DOWNBUTTON_OFFSET))(this, index);
		}

		::System::Void UpButton(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_UPBUTTON_OFFSET))(this, index);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayArrowFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void PlayArrowFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYARROWFADEOUT_OFFSET))(this);
		}

		static ::System::Boolean get_PlatformNeedRefreshRouletteTitleView()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GET_PLATFORMNEEDREFRESHROULETTETITLEVIEW_OFFSET))();
		}

		static ::System::Void PlayTitleFadeInAnim(::GCIMMDDIFBJ*& anim)
		{
			return ((::System::Void(*)(::GCIMMDDIFBJ*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_PLAYTITLEFADEINANIM_OFFSET))(anim);
		}

		static ::System::Void RefreshTitleTxt(::UnityEngine::UI::Extension::UILocalizationText*& titleTxt, ::System::String*& txtMapKey)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_REFRESHTITLETXT_OFFSET))(titleTxt, txtMapKey);
		}

		::System::Void InitButtonCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_INITBUTTONCALLBACKS_OFFSET))(this);
		}

		::System::Single GetRingInnerRadius(::System::Single outerRadius)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETRINGINNERRADIUS_OFFSET))(this, outerRadius);
		}

		::UnityEngine::Vector2 GetIndexDirectionValue(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETINDEXDIRECTIONVALUE_OFFSET))(this, index);
		}

		::System::Int32 GetVectorIndex(::UnityEngine::Vector2 direction, ::System::Boolean ignoreDeadZone)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GETVECTORINDEX_OFFSET))(this, direction, ignoreDeadZone);
		}

		::UnityEngine::Vector2 ClampDirectionValue(::UnityEngine::Vector2 originValue, ::System::Int32 minIndex, ::System::Int32 maxIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_CLAMPDIRECTIONVALUE_OFFSET))(this, originValue, minIndex, maxIndex);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}

		static ::UnityEngine::Vector2 JNNCOJBKMDM(::UnityEngine::Vector2 NBLLKDGOOOC, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single NCCDJLDKFGA, ::System::Single GOEJKGLGFCD)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JNNCOJBKMDM_OFFSET))(NBLLKDGOOOC, MPLDDNMCECG, NCCDJLDKFGA, GOEJKGLGFCD);
		}

		::System::Void MEDGICBOBBH(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MEDGICBOBBH_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Nullable_1<::System::Single> KOEIFIPDHDH()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_KOEIFIPDHDH_OFFSET))(this);
		}

		::System::Void JNFOFHGKJKM(::System::EventArgs* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JNFOFHGKJKM_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean IMPGICOLEGB(::UnityEngine::Vector2 NBLLKDGOOOC, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single CGDOFPGLLLF, ::System::Single BBDBDKFLEJL, ::System::Int32 DMCLCHOLGDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_IMPGICOLEGB_OFFSET))(this, NBLLKDGOOOC, MPLDDNMCECG, CGDOFPGLLLF, BBDBDKFLEJL, DMCLCHOLGDG);
		}

		::System::Nullable_1<::System::Single> EBLPKEAJPHK()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_EBLPKEAJPHK_OFFSET))(this);
		}

		static ::System::Boolean MJIDABJCIIK(::UnityEngine::Vector2 NBLLKDGOOOC, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MJIDABJCIIK_OFFSET))(NBLLKDGOOOC, MPLDDNMCECG, FJDMDOONDFG, CGDOFPGLLLF);
		}

		::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single> ELIDDNCHEJG(::UnityEngine::Vector2 MPLDDNMCECG, ::System::Int32 DMCLCHOLGDG, ::System::Single BBDBDKFLEJL)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ELIDDNCHEJG_OFFSET))(this, MPLDDNMCECG, DMCLCHOLGDG, BBDBDKFLEJL);
		}

		::System::Void MHFEFAEPJEO(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_MHFEFAEPJEO_OFFSET))(this, ABHBKFJKINO);
		}

		static ::UnityEngine::Vector2 DNGEDJOJDJE(::UnityEngine::Vector3 BAECLPHLLHO)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_DNGEDJOJDJE_OFFSET))(BAECLPHLLHO);
		}

		::System::Void JJHEFCNKHII(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_JJHEFCNKHII_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void GEJBPNJAIDJ(::System::Boolean FIPHFGHNNBE, ::UnityEngine::Vector2 JBCNPOHMGPE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_GEJBPNJAIDJ_OFFSET))(this, FIPHFGHNNBE, JBCNPOHMGPE);
		}

		::System::Int32 BKOFAGIPDML(::UnityEngine::Vector2 NBLLKDGOOOC, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single CGDOFPGLLLF, ::System::Single BBDBDKFLEJL)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_BKOFAGIPDML_OFFSET))(this, NBLLKDGOOOC, MPLDDNMCECG, CGDOFPGLLLF, BBDBDKFLEJL);
		}

		::System::Void ACNIMPKPDKN(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROULETTEWIDGETCONTROLLERBASE_ACNIMPKPDKN_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
