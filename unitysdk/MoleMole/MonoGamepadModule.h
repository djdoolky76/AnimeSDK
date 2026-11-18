#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCIGAHEFLF.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/GamepadNavDirConfig.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule_GGJNGBHAOON.h"
#include "unitysdk/MoleMole/MonoGamepadModule_GIMLNPODMOA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/MonoGamepadModule_COKKGCOMGFG.h"
#include "unitysdk/MoleMole/MonoGamepadModule_GGGMMPAGLAD.h"
#include "unitysdk/MoleMole/MonoGamepadModule_IPPIFHLKOCM.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADMODULE_ACGFBJGJPDG_OFFSET UNITYSDK_OFFSET(0x1247D370)
#define MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1247BD40)
#define MOLEMOLE_MONOGAMEPADMODULE_BLKFOGADELC_OFFSET UNITYSDK_OFFSET(0x1247F8E0)
#define MOLEMOLE_MONOGAMEPADMODULE_CAMHNILIDJH_OFFSET UNITYSDK_OFFSET(0x12480F40)
#define MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET UNITYSDK_OFFSET(0x1247E5E0)
#define MOLEMOLE_MONOGAMEPADMODULE_CFMMKJEFOCD_OFFSET UNITYSDK_OFFSET(0x12482170)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1247C840)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0x1247CA40)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x1247F360)
#define MOLEMOLE_MONOGAMEPADMODULE_CLIOEDMENMB_OFFSET UNITYSDK_OFFSET(0x1247D3F0)
#define MOLEMOLE_MONOGAMEPADMODULE_DDAJAIDOBCO_OFFSET UNITYSDK_OFFSET(0x1247C040)
#define MOLEMOLE_MONOGAMEPADMODULE_DECHGMMOBFK_OFFSET UNITYSDK_OFFSET(0x12480D50)
#define MOLEMOLE_MONOGAMEPADMODULE_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x1247E360)
#define MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1247F3B0)
#define MOLEMOLE_MONOGAMEPADMODULE_DPFCAJDAOCB_OFFSET UNITYSDK_OFFSET(0x12480A70)
#define MOLEMOLE_MONOGAMEPADMODULE_DPPALLOEGAE_OFFSET UNITYSDK_OFFSET(0x12480340)
#define MOLEMOLE_MONOGAMEPADMODULE_EHDMEKGNDPM_OFFSET UNITYSDK_OFFSET(0x1247F5A0)
#define MOLEMOLE_MONOGAMEPADMODULE_FAAMJEPLJBI_OFFSET UNITYSDK_OFFSET(0x1247F4D0)
#define MOLEMOLE_MONOGAMEPADMODULE_FJLNGDHPLFB_OFFSET UNITYSDK_OFFSET(0x1247D590)
#define MOLEMOLE_MONOGAMEPADMODULE_FNDGFKFKKCJ_OFFSET UNITYSDK_OFFSET(0x1247CC70)
#define MOLEMOLE_MONOGAMEPADMODULE_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x1247D5E0)
#define MOLEMOLE_MONOGAMEPADMODULE_FOBOIHBINLF_OFFSET UNITYSDK_OFFSET(0x1247FC80)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x1247BAF0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0x1247B900)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0x1247B890)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x1247B8A0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0x1247BB40)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET UNITYSDK_OFFSET(0x1247B990)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET UNITYSDK_OFFSET(0x1247B960)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1247BB20)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1247BAD0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1247B8B0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0x1247B9A0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x1247B920)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0x1247BB00)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1247B940)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0x1247B970)
#define MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1247E7D0)
#define MOLEMOLE_MONOGAMEPADMODULE_HCIFAAODNFK_OFFSET UNITYSDK_OFFSET(0x1247D3B0)
#define MOLEMOLE_MONOGAMEPADMODULE_HCILCMKHKDN_OFFSET UNITYSDK_OFFSET(0x1247BFC0)
#define MOLEMOLE_MONOGAMEPADMODULE_HMNILIIKCMG_OFFSET UNITYSDK_OFFSET(0x124814D0)
#define MOLEMOLE_MONOGAMEPADMODULE_IBKHEFHEIBC_OFFSET UNITYSDK_OFFSET(0x12482180)
#define MOLEMOLE_MONOGAMEPADMODULE_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x1247DB40)
#define MOLEMOLE_MONOGAMEPADMODULE_IILGCBAIAIK_OFFSET UNITYSDK_OFFSET(0x1247E3C0)
#define MOLEMOLE_MONOGAMEPADMODULE_IKLJDJIKFLA_OFFSET UNITYSDK_OFFSET(0x12480170)
#define MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0x1247E780)
#define MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x1247BD00)
#define MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET UNITYSDK_OFFSET(0x1247BB60)
#define MOLEMOLE_MONOGAMEPADMODULE_JHBOFKMNGLB_OFFSET UNITYSDK_OFFSET(0x1247EC00)
#define MOLEMOLE_MONOGAMEPADMODULE_JNMJDOPPMAA_OFFSET UNITYSDK_OFFSET(0x1247BE40)
#define MOLEMOLE_MONOGAMEPADMODULE_KBJNGKNJDLH_OFFSET UNITYSDK_OFFSET(0x1247D460)
#define MOLEMOLE_MONOGAMEPADMODULE_KJLKHOPODEA_OFFSET UNITYSDK_OFFSET(0x1247BCC0)
#define MOLEMOLE_MONOGAMEPADMODULE_KKNOKPMIEJN_OFFSET UNITYSDK_OFFSET(0x1247D520)
#define MOLEMOLE_MONOGAMEPADMODULE_KLOIPNGMFFD_OFFSET UNITYSDK_OFFSET(0x1247E060)
#define MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1247C520)
#define MOLEMOLE_MONOGAMEPADMODULE_LGFPPNBKHKP_OFFSET UNITYSDK_OFFSET(0x12481190)
#define MOLEMOLE_MONOGAMEPADMODULE_LLAOBINACHG_OFFSET UNITYSDK_OFFSET(0x1247FAB0)
#define MOLEMOLE_MONOGAMEPADMODULE_LPCECNCFKGJ_OFFSET UNITYSDK_OFFSET(0x1247E920)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET UNITYSDK_OFFSET(0x1247C5D0)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET UNITYSDK_OFFSET(0x1247C790)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET UNITYSDK_OFFSET(0x1247C6D0)
#define MOLEMOLE_MONOGAMEPADMODULE_MBCEBFOBHAM_OFFSET UNITYSDK_OFFSET(0x1247E2F0)
#define MOLEMOLE_MONOGAMEPADMODULE_MHCNFNEIBHM_OFFSET UNITYSDK_OFFSET(0x1247FF80)
#define MOLEMOLE_MONOGAMEPADMODULE_MOBAHBNLJPL_OFFSET UNITYSDK_OFFSET(0x1247D2F0)
#define MOLEMOLE_MONOGAMEPADMODULE_MPMNEKGIMII_OFFSET UNITYSDK_OFFSET(0x1247BEB0)
#define MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET UNITYSDK_OFFSET(0x1247CCE0)
#define MOLEMOLE_MONOGAMEPADMODULE_NAPPNMFPJKB_OFFSET UNITYSDK_OFFSET(0x1247CE00)
#define MOLEMOLE_MONOGAMEPADMODULE_NGINIEAKOCJ_OFFSET UNITYSDK_OFFSET(0x1247E970)
#define MOLEMOLE_MONOGAMEPADMODULE_OHBDDFOLDDD_OFFSET UNITYSDK_OFFSET(0x1247D330)
#define MOLEMOLE_MONOGAMEPADMODULE_OIILLOAKEEG_OFFSET UNITYSDK_OFFSET(0x1247F5F0)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1247C4D0)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1247C3B0)
#define MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1247BF20)
#define MOLEMOLE_MONOGAMEPADMODULE_PADILAPDKBB_OFFSET UNITYSDK_OFFSET(0x12481E10)
#define MOLEMOLE_MONOGAMEPADMODULE_PHIMKEFEDLC_OFFSET UNITYSDK_OFFSET(0x1247C450)
#define MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1247F540)
#define MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x1247CD60)
#define MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x1247D880)
#define MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1247C580)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET UNITYSDK_OFFSET(0x1247D140)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x1247CA90)
#define MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x1247F1C0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0x1247B910)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0x1247BB50)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1247BB30)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1247BAE0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x1247B930)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0x1247BB10)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1247B950)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0x1247B980)
#define MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x12481110)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadModule_TypeDefinitionIndex = 60090;

	class MonoGamepadModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean HJLFGIADCAF; // 0x18
		::System::Byte _padding0[0x3];
		::MoleMole::MonoGamepadModule_GIMLNPODMOA CFCOPFKDAHA; // 0x1C
		::MoleMole::MonoGamepadModule_GGJNGBHAOON _FJIMFLICFOD_k__BackingField; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* _moduleName; // 0x28
		::System::Boolean _focusOnEnable; // 0x30
		::System::Byte _padding2[0x3];
		::System::UInt32 _priorityLevel; // 0x34
		::System::UInt32 _inputHandleOrder; // 0x38
		::System::Boolean WorkOnAllLayoutPlatform; // 0x3C
		::System::Byte _padding3[0x3];
		::Il2CppArray<::UnityEngine::GameObject*>* _managedObjects; // 0x40
		::Il2CppArray<::UnityEngine::GameObject*>* _onFocusDisableObjects; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* _hintKeys; // 0x50
		::MoleMole::GamepadNavTargetConfig _upNavTarget; // 0x58
		::MoleMole::GamepadNavTargetConfig _downNavTarget; // 0x68
		::MoleMole::GamepadNavTargetConfig _leftNavTarget; // 0x78
		::MoleMole::GamepadNavTargetConfig _RightNavTarget; // 0x88
		::MoleMole::GamepadNavTargetConfig _lostFocusNavTarget; // 0x98
		::System::Boolean _focusImmediately; // 0xA8
		::System::Byte _padding4[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>* _navEvents; // 0xB0
		::System::Func_3<::MoleMole::MonoGamepadModule*, ::MoleMole::InputActionEvent, ::System::Boolean>* navigationOverrideFunc; // 0xB8
		::System::Int32 GEAGEPCKHEB; // 0xC0
		::System::Byte _padding5[0x4];
		::System::Action_1<::System::Boolean>* OnFocus; // 0xC8
		::System::Boolean KBLJHNHFHCD; // 0xD0
		::System::Byte _padding6[0x7];
		::MoleMole::UIBaseController* _COEOGFNBMMF_k__BackingField; // 0xD8
		::MoleMole::MonoGamepadModule* _PFKJBPNALHC_k__BackingField; // 0xE0
		::System::Boolean ODHELCIHJND; // 0xE8
		::System::Boolean KGCCLLLMKOD; // 0xE9
		::System::Boolean PEPDCAECLCM; // 0xEA
		::System::Boolean MFCJDIECELJ; // 0xEB
		::System::Boolean JKGEACMPDPM; // 0xEC
		::System::Boolean PMMKOGOPOBD; // 0xED

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_GIMLNPODMOA get_focusRecordState()
		{
			return ((::MoleMole::MonoGamepadModule_GIMLNPODMOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_GGJNGBHAOON get_focusState()
		{
			return ((::MoleMole::MonoGamepadModule_GGJNGBHAOON(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET))(this);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Boolean get_FocusOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET))(this);
		}

		::System::Void set_FocusOnEnable(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* get_moduleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_moduleName(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::UInt32 get_priorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void set_priorityLevel(::System::UInt32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::UInt32 get_InputHandleOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET))(this);
		}

		::System::Int32 get_PrioritySortIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET))(this);
		}

		::System::Void set_PrioritySortIndex(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* get_hintKeys()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET))(this);
		}

		::System::Boolean get_IsRegistered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::UIBaseController* get_controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_parentModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET))(this);
		}

		::System::Void set_parentModule(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_ForceIgnoreBeNavigated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET))(this);
		}

		::System::Void set_ForceIgnoreBeNavigated(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean IsWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET))(this);
		}

		::System::Boolean KJLKHOPODEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_KJLKHOPODEA_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetController(::MoleMole::UIBaseController* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void ManualAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET))(this);
		}

		::System::Void ManualEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET))(this);
		}

		::System::Void ManualDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET))(this);
		}

		::System::Void ClearController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET))(this);
		}

		::System::Void MuteFocusRecord(::System::Boolean NGJMKJNOGJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET))(this, NGJMKJNOGJN);
		}

		::System::Void RecordFocusState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET))(this);
		}

		::System::Void ClearFocusRecordState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET))(this);
		}

		::System::Void SetFocus(::System::Boolean CGPBOKCEGAO, ::System::Boolean NPPMJEIPMFC, ::System::Boolean MNDGBAGHIBF, ::System::Boolean ACJNEHDOIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET))(this, CGPBOKCEGAO, NPPMJEIPMFC, MNDGBAGHIBF, ACJNEHDOIEC);
		}

		::System::Void SetFocusByRegion(::System::Boolean CGPBOKCEGAO, ::System::Boolean NPPMJEIPMFC, ::System::Boolean MNDGBAGHIBF, ::System::Boolean ACJNEHDOIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET))(this, CGPBOKCEGAO, NPPMJEIPMFC, MNDGBAGHIBF, ACJNEHDOIEC);
		}

		::System::Void MOBAHBNLJPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MOBAHBNLJPL_OFFSET))(this);
		}

		::System::Void OHBDDFOLDDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_OHBDDFOLDDD_OFFSET))(this);
		}

		::System::Void ACGFBJGJPDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ACGFBJGJPDG_OFFSET))(this);
		}

		::System::Void HCIFAAODNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HCIFAAODNFK_OFFSET))(this);
		}

		::System::Void CLIOEDMENMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLIOEDMENMB_OFFSET))(this);
		}

		::System::Void KBJNGKNJDLH(::System::Boolean MNDGBAGHIBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_KBJNGKNJDLH_OFFSET))(this, MNDGBAGHIBF);
		}

		::System::Void KKNOKPMIEJN(::MoleMole::MonoGamepadModule* NMAGDAMKKHA, ::MNCIGAHEFLF KMJPEELFDJN, ::MoleMole::InputActionEvent BMMFFGLFODP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MNCIGAHEFLF, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_KKNOKPMIEJN_OFFSET))(this, NMAGDAMKKHA, KMJPEELFDJN, BMMFFGLFODP);
		}

		::System::Void FJLNGDHPLFB(::MoleMole::MonoGamepadModule* IPKBEMFODCJ, ::MNCIGAHEFLF GICJKNDCNFI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MNCIGAHEFLF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_FJLNGDHPLFB_OFFSET))(this, IPKBEMFODCJ, GICJKNDCNFI);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Void MBCEBFOBHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MBCEBFOBHAM_OFFSET))(this);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Boolean IILGCBAIAIK(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_IILGCBAIAIK_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Boolean CanNavigateTo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Boolean HandleInputAction(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET))(this, PKBLAMDICKB);
		}

		::MNCIGAHEFLF LPCECNCFKGJ(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::MNCIGAHEFLF(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LPCECNCFKGJ_OFFSET))(this, MBEHILFGMGI);
		}

		::System::Boolean NGINIEAKOCJ(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_NGINIEAKOCJ_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Void SetNavigateTarget(::MNCIGAHEFLF LHBDJBLNFDP, ::MoleMole::MonoGamepadModule* IFPMMHBEBFI, ::System::String* DGJNNJEINIM)
		{
			return ((::System::Void(*)(::PVOID, ::MNCIGAHEFLF, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET))(this, LHBDJBLNFDP, IFPMMHBEBFI, DGJNNJEINIM);
		}

		::System::Void ResolveManagedObjects(::System::Boolean JLGCMPJMDLO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET))(this, JLGCMPJMDLO);
		}

		::System::Void ClearManagedObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET))(this);
		}

		::System::Boolean FAAMJEPLJBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_FAAMJEPLJBI_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* PublicGetGamepadSelectable(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET))(this, LNEEMAGIHLB);
		}

		::MoleMole::MonoGamepadSelectable* EHDMEKGNDPM(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_EHDMEKGNDPM_OFFSET))(this, LNEEMAGIHLB);
		}

		::System::Boolean OIILLOAKEEG(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean JLGCMPJMDLO, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_OIILLOAKEEG_OFFSET))(this, LNEEMAGIHLB, JLGCMPJMDLO, NPPMJEIPMFC);
		}

		::System::Boolean FOBOIHBINLF(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean KCBDGFHGNJN, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_FOBOIHBINLF_OFFSET))(this, LNEEMAGIHLB, KCBDGFHGNJN, NPPMJEIPMFC);
		}

		::System::Boolean DPFCAJDAOCB(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean KCBDGFHGNJN)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DPFCAJDAOCB_OFFSET))(this, LNEEMAGIHLB, KCBDGFHGNJN);
		}

		static ::System::Nullable_1<::System::Boolean> DECHGMMOBFK(::MoleMole::MonoGamepadModule_IPPIFHLKOCM& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_IPPIFHLKOCM&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DECHGMMOBFK_OFFSET))(param_0);
		}

		::System::Void LGFPPNBKHKP(::MoleMole::InputActionEvent PKBLAMDICKB, ::System::String* MOKPNMHEOBB, ::System::String* FKMHMOELCIO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputActionEvent, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LGFPPNBKHKP_OFFSET))(this, PKBLAMDICKB, MOKPNMHEOBB, FKMHMOELCIO);
		}

		::System::Void DDAJAIDOBCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DDAJAIDOBCO_OFFSET))(this);
		}

		::System::Void HMNILIIKCMG(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean AKHPIECINEP, ::System::Boolean NNCPEPJJDEA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HMNILIIKCMG_OFFSET))(this, LNEEMAGIHLB, AKHPIECINEP, NNCPEPJJDEA);
		}

		static ::System::Nullable_1<::System::Boolean> MHCNFNEIBHM(::MoleMole::MonoGamepadModule_GGGMMPAGLAD& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_GGGMMPAGLAD&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MHCNFNEIBHM_OFFSET))(param_0);
		}

		::System::Void HCILCMKHKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HCILCMKHKDN_OFFSET))(this);
		}

		::System::Boolean JHBOFKMNGLB(::MNCIGAHEFLF KMJPEELFDJN, ::MoleMole::InputActionEvent BMMFFGLFODP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCIGAHEFLF, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_JHBOFKMNGLB_OFFSET))(this, KMJPEELFDJN, BMMFFGLFODP);
		}

		::System::Void FNDGFKFKKCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_FNDGFKFKKCJ_OFFSET))(this);
		}

		::System::Void CFMMKJEFOCD(::MoleMole::UIBaseController* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CFMMKJEFOCD_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void IBKHEFHEIBC(::MoleMole::MonoGamepadModule_GGJNGBHAOON EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule_GGJNGBHAOON))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_IBKHEFHEIBC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PHIMKEFEDLC(::System::Boolean MNDGBAGHIBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_PHIMKEFEDLC_OFFSET))(this, MNDGBAGHIBF);
		}

		::System::Void MPMNEKGIMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MPMNEKGIMII_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::Boolean> BLKFOGADELC(::MoleMole::MonoGamepadModule_COKKGCOMGFG& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_COKKGCOMGFG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_BLKFOGADELC_OFFSET))(param_0);
		}

		static ::System::Void DPPALLOEGAE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DPPALLOEGAE_OFFSET))();
		}

		::System::Void NAPPNMFPJKB(::System::Boolean CGPBOKCEGAO, ::System::Boolean NPPMJEIPMFC, ::System::Boolean MNDGBAGHIBF, ::System::Boolean ACJNEHDOIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_NAPPNMFPJKB_OFFSET))(this, CGPBOKCEGAO, NPPMJEIPMFC, MNDGBAGHIBF, ACJNEHDOIEC);
		}

		::System::Void JNMJDOPPMAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_JNMJDOPPMAA_OFFSET))(this);
		}

		::System::Int32 PADILAPDKBB(::MoleMole::MonoGamepadModule* DLHLAFHDMBE, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* LGJGPJKOPCG, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* GGLFOGGIBFF)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_PADILAPDKBB_OFFSET))(this, DLHLAFHDMBE, LGJGPJKOPCG, GGLFOGGIBFF);
		}

		::MoleMole::MonoGamepadModule* KLOIPNGMFFD(::MNCIGAHEFLF LHBDJBLNFDP, ::MoleMole::InputActionEvent BMMFFGLFODP)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MNCIGAHEFLF, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_KLOIPNGMFFD_OFFSET))(this, LHBDJBLNFDP, BMMFFGLFODP);
		}

		static ::System::Nullable_1<::System::Boolean> LLAOBINACHG(::MoleMole::MonoGamepadModule_COKKGCOMGFG& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_COKKGCOMGFG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LLAOBINACHG_OFFSET))(param_0);
		}

		static ::System::Nullable_1<::System::Boolean> IKLJDJIKFLA(::MoleMole::MonoGamepadModule_GGGMMPAGLAD& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_GGGMMPAGLAD&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_IKLJDJIKFLA_OFFSET))(param_0);
		}

		static ::System::Nullable_1<::System::Boolean> CAMHNILIDJH(::MoleMole::MonoGamepadModule_IPPIFHLKOCM& param_0)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_IPPIFHLKOCM&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CAMHNILIDJH_OFFSET))(param_0);
		}
	};
}
