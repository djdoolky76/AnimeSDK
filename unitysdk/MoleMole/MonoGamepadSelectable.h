#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/PKCHBOLJIMH.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_CAJLGJKALBO.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_KFLJHABALMF.h"

namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole::Config { class ConfigSoundAction_Post2DEvent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_MONOGAMEPADSELECTABLE_AMENAFABHHH_OFFSET UNITYSDK_OFFSET(0x104369B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x104357B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_BALKPIKLFEA_OFFSET UNITYSDK_OFFSET(0x104390E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_BAMCDNBCMCJ_OFFSET UNITYSDK_OFFSET(0x10435BD0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_BBBNBADBBCD_OFFSET UNITYSDK_OFFSET(0x10436180)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_BDOMPEDCGHP_OFFSET UNITYSDK_OFFSET(0x1043A700)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_CDBKNHGNGEE_OFFSET UNITYSDK_OFFSET(0x10439FC0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET UNITYSDK_OFFSET(0x10437050)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_CLPFEMDPFMA_OFFSET UNITYSDK_OFFSET(0x1043AC80)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_DFDGKLKICEO_OFFSET UNITYSDK_OFFSET(0x104394B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_FPGJCEDFEKJ_OFFSET UNITYSDK_OFFSET(0x104378B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GETSCROLLTOSHOWRECT_OFFSET UNITYSDK_OFFSET(0x104397E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x10435490)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x10435680)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x10435480)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET UNITYSDK_OFFSET(0x104354B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET UNITYSDK_OFFSET(0x104356A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISCURRENTCLICKFROMNAVAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x10437040)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x10435470)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x10435460)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET UNITYSDK_OFFSET(0x10435620)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10435730)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x10435710)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x10435750)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10435700)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_HFGDFKOLEAP_OFFSET UNITYSDK_OFFSET(0x1043A5A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_HPLOCNJPJHO_OFFSET UNITYSDK_OFFSET(0x10439690)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_IIAHNJKJLNO_OFFSET UNITYSDK_OFFSET(0x1043A3A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_INAGGCLAMEJ_OFFSET UNITYSDK_OFFSET(0x1043A1B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_JAKDNGOALDB_OFFSET UNITYSDK_OFFSET(0x10438150)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_JHHAMJMOKND_OFFSET UNITYSDK_OFFSET(0x1043AA90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_KPDFDDBJKAD_OFFSET UNITYSDK_OFFSET(0x10439DA0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_MAKEPAPPLFM_OFFSET UNITYSDK_OFFSET(0x104392D0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_MBBHCDGMGPL_OFFSET UNITYSDK_OFFSET(0x10437D90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_MIHFEBMIPFI_OFFSET UNITYSDK_OFFSET(0x10439870)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_NIHPPFMHJPM_OFFSET UNITYSDK_OFFSET(0x1043AFB0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_ONGKFCACNHB_OFFSET UNITYSDK_OFFSET(0x10437F70)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_PBALLCJOAFH_OFFSET UNITYSDK_OFFSET(0x10436A00)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x10437C30)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET UNITYSDK_OFFSET(0x104384D0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTON_OFFSET UNITYSDK_OFFSET(0x10438330)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x104386B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x104354A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x10435690)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10435740)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x10435720)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x10436E90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET UNITYSDK_OFFSET(0x10436490)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x10438520)
#define MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10439820)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSelectable_TypeDefinitionIndex = 88415;

	class MonoGamepadSelectable : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_GDLICFACELD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadSelectable_TypeDefinitionIndex)->GetStaticField(0xDBA0);
		}
		::System::Boolean GPAPKNPENGB; // 0x18
		::System::Boolean CPENEGOLKEF; // 0x19
		::System::Boolean forceIgnore; // 0x1A
		::System::Boolean forceExclude; // 0x1B
		::System::Boolean ExcludeWhenIgnore; // 0x1C
		::System::Boolean _ignoreWhenSmallAlpha; // 0x1D
		::System::Byte _padding0[0x2];
		::MoleMole::MonoGamepadBaseList* _list; // 0x20
		::System::Boolean _ignoreWhenListEmpty; // 0x28
		::System::Boolean _excludeWhenListEmpty; // 0x29
		::System::Byte _padding1[0x6];
		::UnityEngine::UI::Extension::UIButtonBase* _buttonV2; // 0x30
		::UnityEngine::UI::Button* _untiyButton; // 0x38
		::System::Boolean _setButtonStateOnSelect; // 0x40
		::System::Boolean _selectWhenButtonUnavailable; // 0x41
		::System::Byte _padding2[0x6];
		::UnityEngine::UI::InputField* _inputField; // 0x48
		::UnityEngine::Transform* _scrollToShowRect; // 0x50
		::UnityEngine::GameObject* _activateOnSelect; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnSelectList; // 0x60
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnWeakFocusList; // 0x68
		::MoleMole::GamepadNavTargetConfig _targetModule; // 0x70
		::System::Boolean _focusOnTargetModuleOnClick; // 0x80
		::System::Boolean _focusOnTargetModuleOnSelect; // 0x81
		::System::Boolean _focusImmediately; // 0x82
		::System::Boolean _affectChildSelectable; // 0x83
		::PKCHBOLJIMH _affectChildSelectableType; // 0x84
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x88
		::System::Boolean _muteSelectSound; // 0x90
		::System::Boolean _overrideSelectSound; // 0x91
		::System::Byte _padding3[0x6];
		::MoleMole::Config::ConfigSoundAction_Post2DEvent* _selectSound; // 0x98
		::System::Action_1<::System::Boolean>* HJLPKEKOCLN; // 0xA0
		::System::Action_1<::System::Boolean>* CFGLBEFGNHL; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonBase* get_Button()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ActivateOnSelect()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET))(this);
		}

		::System::Void set_ActivateOnSelect(::UnityEngine::GameObject* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_HasFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET))(this);
		}

		::System::Boolean get_IsWeakFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* get_ActivateOnWeakFocusList()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this);
		}

		::System::Void set_ActivateOnWeakFocusList(::Il2CppArray<::UnityEngine::GameObject*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_HasWeakFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::Action_1<::System::Boolean>* get_OnSelectChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET))(this);
		}

		::System::Void set_OnSelectChanged(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Action_1<::System::Boolean>* get_OnFocusStateChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET))(this);
		}

		::System::Void set_OnFocusStateChanged(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET))(this);
		}

		::System::Boolean ShouldIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET))(this);
		}

		::System::Boolean ShouldExclude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET))(this);
		}

		static ::System::Boolean get_IsCurrentClickFromNavAutoSelect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISCURRENTCLICKFROMNAVAUTOSELECT_OFFSET))();
		}

		::System::Boolean Click(::MoleMole::MonoGamepadModule* IPKBEMFODCJ, ::System::Boolean AKHPIECINEP, ::System::Boolean NNCPEPJJDEA)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET))(this, IPKBEMFODCJ, AKHPIECINEP, NNCPEPJJDEA);
		}

		::System::Void SetBtnFocusState(::System::Boolean JLGCMPJMDLO, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET))(this, JLGCMPJMDLO, NPPMJEIPMFC);
		}

		::System::Void SetButton(::UnityEngine::UI::Button* DLMDEFNAIFG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTON_OFFSET))(this, DLMDEFNAIFG);
		}

		::System::Void SetButtonV2(::UnityEngine::UI::Extension::UIButtonBase* DLMDEFNAIFG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET))(this, DLMDEFNAIFG);
		}

		::System::Boolean TryDeactivateInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean KCBDGFHGNJN, ::MoleMole::MonoGamepadModule* IPKBEMFODCJ, ::System::Boolean NPPMJEIPMFC, ::System::Boolean EAFLCDJBDOO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET))(this, KCBDGFHGNJN, IPKBEMFODCJ, NPPMJEIPMFC, EAFLCDJBDOO);
		}

		::UnityEngine::Transform* GetScrollToShowRect()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GETSCROLLTOSHOWRECT_OFFSET))(this);
		}

		::System::Void MIHFEBMIPFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_MIHFEBMIPFI_OFFSET))(this);
		}

		::System::Void CDBKNHGNGEE(::MoleMole::MonoGamepadSelectable_KFLJHABALMF& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_KFLJHABALMF&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_CDBKNHGNGEE_OFFSET))(this, param_0);
		}

		::System::Void INAGGCLAMEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_INAGGCLAMEJ_OFFSET))(this);
		}

		::System::Void JAKDNGOALDB(::MoleMole::MonoGamepadSelectable_CAJLGJKALBO& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_CAJLGJKALBO&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_JAKDNGOALDB_OFFSET))(this, param_0);
		}

		::System::Void DFDGKLKICEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_DFDGKLKICEO_OFFSET))(this);
		}

		::System::Void BALKPIKLFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_BALKPIKLFEA_OFFSET))(this);
		}

		::System::Void IIAHNJKJLNO(::MoleMole::MonoGamepadSelectable_KFLJHABALMF& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_KFLJHABALMF&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_IIAHNJKJLNO_OFFSET))(this, param_0);
		}

		::System::Void MAKEPAPPLFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_MAKEPAPPLFM_OFFSET))(this);
		}

		::System::Boolean AMENAFABHHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_AMENAFABHHH_OFFSET))(this);
		}

		::System::Void HFGDFKOLEAP(::MoleMole::MonoGamepadSelectable_KFLJHABALMF& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_KFLJHABALMF&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_HFGDFKOLEAP_OFFSET))(this, param_0);
		}

		::System::Void HPLOCNJPJHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_HPLOCNJPJHO_OFFSET))(this);
		}

		::System::String* BDOMPEDCGHP(::UnityEngine::Transform* GKBJOPJKCLB)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_BDOMPEDCGHP_OFFSET))(this, GKBJOPJKCLB);
		}

		::UnityEngine::GameObject* JHHAMJMOKND()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_JHHAMJMOKND_OFFSET))(this);
		}

		::System::Void BAMCDNBCMCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_BAMCDNBCMCJ_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* PBALLCJOAFH(::System::Boolean AAADCELFMLE)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_PBALLCJOAFH_OFFSET))(this, AAADCELFMLE);
		}

		::MoleMole::MonoGamepadModule* FPGJCEDFEKJ()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_FPGJCEDFEKJ_OFFSET))(this);
		}

		::System::Void ONGKFCACNHB(::MoleMole::MonoGamepadSelectable_CAJLGJKALBO& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_CAJLGJKALBO&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_ONGKFCACNHB_OFFSET))(this, param_0);
		}

		::System::Void CLPFEMDPFMA(::System::Boolean KCBDGFHGNJN, ::MoleMole::MonoGamepadModule* IPKBEMFODCJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_CLPFEMDPFMA_OFFSET))(this, KCBDGFHGNJN, IPKBEMFODCJ);
		}

		::System::Void KPDFDDBJKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_KPDFDDBJKAD_OFFSET))(this);
		}

		::System::Void NIHPPFMHJPM(::MoleMole::MonoGamepadSelectable_KFLJHABALMF& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_KFLJHABALMF&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_NIHPPFMHJPM_OFFSET))(this, param_0);
		}

		::System::Void MBBHCDGMGPL(::MoleMole::MonoGamepadSelectable_CAJLGJKALBO& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_CAJLGJKALBO&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_MBBHCDGMGPL_OFFSET))(this, param_0);
		}

		::System::Void BBBNBADBBCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_BBBNBADBBCD_OFFSET))(this);
		}
	};
}
