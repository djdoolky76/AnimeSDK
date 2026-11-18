#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFIGGJCBBI.h"
#include "unitysdk/BHPFNHAOAFA.h"
#include "unitysdk/CIEFMFICPNJ.h"
#include "unitysdk/MNCIGAHEFLF.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_AJGBMMFGAJH.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_JIAOBPNNBMG.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/NAPScrollView/DataStruct/LayoutMeta_LayoutType.h"
#include "unitysdk/OIJMFNHGANO.h"
#include "unitysdk/OIMBPCCLGMF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/MoleMole/GamepadNavDirConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_NDKKCEHOIIL.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADBASELIST_ACGFBJGJPDG_OFFSET UNITYSDK_OFFSET(0x130ECBF0)
#define MOLEMOLE_MONOGAMEPADBASELIST_ADDITEMSELECTOPERATION_OFFSET UNITYSDK_OFFSET(0x130EEE90)
#define MOLEMOLE_MONOGAMEPADBASELIST_AIDAJJJIOFC_OFFSET UNITYSDK_OFFSET(0x130EFE50)
#define MOLEMOLE_MONOGAMEPADBASELIST_AINDKPFLJNN_OFFSET UNITYSDK_OFFSET(0x130EFA40)
#define MOLEMOLE_MONOGAMEPADBASELIST_AJHFOIGACAF_OFFSET UNITYSDK_OFFSET(0x130ED260)
#define MOLEMOLE_MONOGAMEPADBASELIST_ALCPBDAOIFK_OFFSET UNITYSDK_OFFSET(0x130EF700)
#define MOLEMOLE_MONOGAMEPADBASELIST_BEDAGEAHFHO_OFFSET UNITYSDK_OFFSET(0x130EF3F0)
#define MOLEMOLE_MONOGAMEPADBASELIST_BGDJBHENHPA_OFFSET UNITYSDK_OFFSET(0x130EECB0)
#define MOLEMOLE_MONOGAMEPADBASELIST_CCOMDAHPDAH_OFFSET UNITYSDK_OFFSET(0x130EE880)
#define MOLEMOLE_MONOGAMEPADBASELIST_CHANGERESETINDEXONFOCUS_OFFSET UNITYSDK_OFFSET(0x130ECA70)
#define MOLEMOLE_MONOGAMEPADBASELIST_CLEARCACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x130ECD20)
#define MOLEMOLE_MONOGAMEPADBASELIST_CMJCFCMIABJ_OFFSET UNITYSDK_OFFSET(0x130F0470)
#define MOLEMOLE_MONOGAMEPADBASELIST_DCAOCHAMLED_OFFSET UNITYSDK_OFFSET(0x130F0100)
#define MOLEMOLE_MONOGAMEPADBASELIST_EHDMEKGNDPM_OFFSET UNITYSDK_OFFSET(0x130ED340)
#define MOLEMOLE_MONOGAMEPADBASELIST_FIJCPOACEEF_OFFSET UNITYSDK_OFFSET(0x130EFEE0)
#define MOLEMOLE_MONOGAMEPADBASELIST_FOBOIHBINLF_OFFSET UNITYSDK_OFFSET(0x130ED7C0)
#define MOLEMOLE_MONOGAMEPADBASELIST_GBCJEPAMBJJ_OFFSET UNITYSDK_OFFSET(0x130EF660)
#define MOLEMOLE_MONOGAMEPADBASELIST_GETINDEX_OFFSET UNITYSDK_OFFSET(0x130EEC60)
#define MOLEMOLE_MONOGAMEPADBASELIST_GETITEMTRANSBYINDEX_OFFSET UNITYSDK_OFFSET(0x130EEE40)
#define MOLEMOLE_MONOGAMEPADBASELIST_GETLISTMETAINFO_OFFSET UNITYSDK_OFFSET(0x130EDB10)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_CACHEDSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x130ECA60)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET UNITYSDK_OFFSET(0x130ECAF0)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x130ECAE0)
#define MOLEMOLE_MONOGAMEPADBASELIST_IFEHDKLMCBK_OFFSET UNITYSDK_OFFSET(0x130ED840)
#define MOLEMOLE_MONOGAMEPADBASELIST_IMKPEICFNON_OFFSET UNITYSDK_OFFSET(0x130EFF70)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISALLOWLOOPBYINPUT_OFFSET UNITYSDK_OFFSET(0x130EDD60)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISDRIVENBYSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x130EDC90)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISLISTTAB_OFFSET UNITYSDK_OFFSET(0x130EDB70)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISLOOPDIRECTIONENABLED_OFFSET UNITYSDK_OFFSET(0x130EE260)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISUSESELECTEDINDEXFROMSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x130EDBC0)
#define MOLEMOLE_MONOGAMEPADBASELIST_KAMKJJGLIFE_OFFSET UNITYSDK_OFFSET(0x130EFCB0)
#define MOLEMOLE_MONOGAMEPADBASELIST_KLIJIINHMFH_OFFSET UNITYSDK_OFFSET(0x130EEA10)
#define MOLEMOLE_MONOGAMEPADBASELIST_LISTISEMPTY_OFFSET UNITYSDK_OFFSET(0x130ECB10)
#define MOLEMOLE_MONOGAMEPADBASELIST_LPCECNCFKGJ_OFFSET UNITYSDK_OFFSET(0x130ECD70)
#define MOLEMOLE_MONOGAMEPADBASELIST_MUTECACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x130EF060)
#define MOLEMOLE_MONOGAMEPADBASELIST_NENGEBGHPDH_OFFSET UNITYSDK_OFFSET(0x130EE7D0)
#define MOLEMOLE_MONOGAMEPADBASELIST_OBKBKJMGDMI_OFFSET UNITYSDK_OFFSET(0x130F0500)
#define MOLEMOLE_MONOGAMEPADBASELIST_OBNABGACKBJ_OFFSET UNITYSDK_OFFSET(0x130F06A0)
#define MOLEMOLE_MONOGAMEPADBASELIST_OIILLOAKEEG_1_OFFSET UNITYSDK_OFFSET(0x130ED740)
#define MOLEMOLE_MONOGAMEPADBASELIST_OIILLOAKEEG_OFFSET UNITYSDK_OFFSET(0x130ED670)
#define MOLEMOLE_MONOGAMEPADBASELIST_OJBBMDEIFFE_OFFSET UNITYSDK_OFFSET(0x130EF890)
#define MOLEMOLE_MONOGAMEPADBASELIST_OJGNDFLABOG_OFFSET UNITYSDK_OFFSET(0x130EE300)
#define MOLEMOLE_MONOGAMEPADBASELIST_OKGCMEDNLLF_OFFSET UNITYSDK_OFFSET(0x130ECDF0)
#define MOLEMOLE_MONOGAMEPADBASELIST_OOAFFPEEHAE_OFFSET UNITYSDK_OFFSET(0x130ED620)
#define MOLEMOLE_MONOGAMEPADBASELIST_PKFLGKENBBF_OFFSET UNITYSDK_OFFSET(0x130F0160)
#define MOLEMOLE_MONOGAMEPADBASELIST_POHFDNBMKJD_OFFSET UNITYSDK_OFFSET(0x130F0170)
#define MOLEMOLE_MONOGAMEPADBASELIST_REMOVEITEMSELECTOPERATION_OFFSET UNITYSDK_OFFSET(0x130EEF20)
#define MOLEMOLE_MONOGAMEPADBASELIST_RESETKEEPINDEX_OFFSET UNITYSDK_OFFSET(0x130EEFB0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x130EEBB0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETALLOWLOOP_OFFSET UNITYSDK_OFFSET(0x130ECB50)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETCACHESELECTEDINDEXENABLED_OFFSET UNITYSDK_OFFSET(0x130ECCC0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETLOOPDIRECTION_OFFSET UNITYSDK_OFFSET(0x130ECBA0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETMUTESELECTAUTOCLICKITEM_OFFSET UNITYSDK_OFFSET(0x130EEC10)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETNESTEDSELECTED_OFFSET UNITYSDK_OFFSET(0x130EE940)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x130EF010)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETSELECTEDINDEXFORUSER_OFFSET UNITYSDK_OFFSET(0x130EE990)
#define MOLEMOLE_MONOGAMEPADBASELIST_SET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET UNITYSDK_OFFSET(0x130ECB00)
#define MOLEMOLE_MONOGAMEPADBASELIST_TRYCACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x130EF130)
#define MOLEMOLE_MONOGAMEPADBASELIST_UPDATENAVEVENT_OFFSET UNITYSDK_OFFSET(0x130EF1B0)
#define MOLEMOLE_MONOGAMEPADBASELIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x130EF3E0)
#define MOLEMOLE_MONOGAMEPADBASELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x130EF260)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadBaseList_TypeDefinitionIndex = 77248;

	class MonoGamepadBaseList : public ::MoleMole::MonoGamepadModule
	{
	public:
		static ::System::Boolean* StaticGet_GlobalUseSelectedIndexFromScrollView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadBaseList_TypeDefinitionIndex)->GetStaticField(0xB1C0);
		}
		static ::System::Boolean* StaticGet_GlobalDrivenByScrollView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadBaseList_TypeDefinitionIndex)->GetStaticField(0xB1C1);
		}
		::System::Boolean BGBIHLKLMKM; // 0xF0
		::System::Boolean HGLNHIGMIKG; // 0xF1
		::System::Byte _padding0[0x2];
		::System::Int32 AAKFLKNJOHH; // 0xF4
		::System::Boolean _selectItemOnFocus; // 0xF8
		::System::Byte _padding1[0x3];
		::System::Int32 _resetIndexOnFocus; // 0xFC
		::System::Boolean _cancelSelectOnLostFocus; // 0x100
		::System::Boolean _isListTab; // 0x101
		::System::Byte _padding2[0x6];
		::System::Collections::Generic::List_1<::System::Object*>* _itemSelectOperations; // 0x108
		::MonoUITableScrollV2* _scrollView; // 0x110
		::System::Boolean _getSelectableInChildren; // 0x118
		::System::Boolean _disableLostFocusItemAnim; // 0x119
		::System::Byte _padding3[0x2];
		::MoleMole::InputLogicEventType _upItemEvent; // 0x11C
		::MoleMole::InputLogicEventType _downItemEvent; // 0x120
		::MoleMole::InputLogicEventType _leftItemEvent; // 0x124
		::MoleMole::InputLogicEventType _rightItemEvent; // 0x128
		::MoleMole::InputLogicEventType _clickItemEvent; // 0x12C
		::System::Boolean _allowLoop; // 0x130
		::System::Byte _padding4[0x3];
		::OIMBPCCLGMF _loopDirection; // 0x134
		::System::Boolean _BCLBHAAPMJG_k__BackingField; // 0x138
		::System::Boolean _ignoreNavigateIfEmpty; // 0x139
		::System::Byte _padding5[0x2];
		::AKFIGGJCBBI _selectedIndexSourceType; // 0x13C
		::CIEFMFICPNJ _drivenType; // 0x140
		::System::Byte _padding6[0x4];
		::System::Func_2<::OIJMFNHGANO, ::System::Boolean>* selectIndexOverrideFunc; // 0x148
		::System::Boolean NONMOIFNDMP; // 0x150
		::System::Boolean hasNestedSelect; // 0x151
		::System::Byte _padding7[0x2];
		::System::Int32 KBDGFODGAEN; // 0x154
		::BHPFNHAOAFA LMGJMLPEJHF; // 0x158
		::System::Nullable_1<::System::Int32> NIHNEEGEFMC; // 0x15C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST__CCTOR_OFFSET))();
		}

		::System::Int32 get_cachedSelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_CACHEDSELECTEDINDEX_OFFSET))(this);
		}

		::System::Void ChangeResetIndexOnFocus(::MoleMole::UIBaseController* JOLDOMEIKEF, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CHANGERESETINDEXONFOCUS_OFFSET))(this, JOLDOMEIKEF, ABHBKFJKINO);
		}

		::MonoUITableScrollV2* get_scrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_SCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean get_isHandleByNestedListDelegate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET))(this);
		}

		::System::Void set_isHandleByNestedListDelegate(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean ListIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_LISTISEMPTY_OFFSET))(this);
		}

		::System::Void SetAllowLoop(::System::Boolean HAFDIMGJBHC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETALLOWLOOP_OFFSET))(this, HAFDIMGJBHC);
		}

		::System::Void SetLoopDirection(::OIMBPCCLGMF GJNBIEOEDPJ)
		{
			return ((::System::Void(*)(::PVOID, ::OIMBPCCLGMF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETLOOPDIRECTION_OFFSET))(this, GJNBIEOEDPJ);
		}

		::System::Void ACGFBJGJPDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ACGFBJGJPDG_OFFSET))(this);
		}

		::MNCIGAHEFLF LPCECNCFKGJ(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::MNCIGAHEFLF(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_LPCECNCFKGJ_OFFSET))(this, MBEHILFGMGI);
		}

		::System::Boolean OKGCMEDNLLF(::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH CBBCJFPGBOK, ::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean KCBDGFHGNJN, ::System::Boolean NPPMJEIPMFC, ::System::Boolean EHOHHDMABEL)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OKGCMEDNLLF_OFFSET))(this, CBBCJFPGBOK, ABHBKFJKINO, LNEEMAGIHLB, KCBDGFHGNJN, NPPMJEIPMFC, EHOHHDMABEL);
		}

		::System::Boolean OOAFFPEEHAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OOAFFPEEHAE_OFFSET))(this);
		}

		::System::Boolean OIILLOAKEEG(::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean JLGCMPJMDLO, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OIILLOAKEEG_OFFSET))(this, ABHBKFJKINO, LNEEMAGIHLB, JLGCMPJMDLO, NPPMJEIPMFC);
		}

		::System::Boolean OIILLOAKEEG_1(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean JLGCMPJMDLO, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OIILLOAKEEG_1_OFFSET))(this, LNEEMAGIHLB, JLGCMPJMDLO, NPPMJEIPMFC);
		}

		::System::Boolean FOBOIHBINLF(::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean KCBDGFHGNJN, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_FOBOIHBINLF_OFFSET))(this, ABHBKFJKINO, LNEEMAGIHLB, KCBDGFHGNJN, NPPMJEIPMFC);
		}

		::System::Void IFEHDKLMCBK(::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean KCBDGFHGNJN, ::System::Boolean EHOHHDMABEL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_IFEHDKLMCBK_OFFSET))(this, ABHBKFJKINO, LNEEMAGIHLB, KCBDGFHGNJN, EHOHHDMABEL);
		}

		::MoleMole::MonoGamepadSelectable* EHDMEKGNDPM(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_EHDMEKGNDPM_OFFSET))(this, LNEEMAGIHLB);
		}

		::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL GetListMetaInfo()
		{
			return ((::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GETLISTMETAINFO_OFFSET))(this);
		}

		::System::Boolean IsListTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISLISTTAB_OFFSET))(this);
		}

		::System::Boolean IsUseSelectedIndexFromScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISUSESELECTEDINDEXFROMSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean IsDrivenByScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISDRIVENBYSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean IsAllowLoopByInput(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISALLOWLOOPBYINPUT_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Boolean IsLoopDirectionEnabled(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISLOOPDIRECTIONENABLED_OFFSET))(this, MBEHILFGMGI);
		}

		::System::Int32 OJGNDFLABOG(::System::Int32 ABHBKFJKINO, ::UnityEngine::Vector2 ADNMDAMAHGK, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL JHOFOOCLBAD, ::System::Boolean LGAIOBLNNBG)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OJGNDFLABOG_OFFSET))(this, ABHBKFJKINO, ADNMDAMAHGK, JHOFOOCLBAD, LGAIOBLNNBG);
		}

		::System::Void SetNestedSelected(::System::Boolean FGLFMEMGKKP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETNESTEDSELECTED_OFFSET))(this, FGLFMEMGKKP);
		}

		::System::Void SetSelectedIndexForUser(::System::Int32 ABHBKFJKINO, ::System::Boolean KICEFENNFIM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETSELECTEDINDEXFORUSER_OFFSET))(this, ABHBKFJKINO, KICEFENNFIM);
		}

		::System::Boolean SelectItem(::System::Int32 EOGLMAEPALE, ::BHPFNHAOAFA CNOMLBCCCNI, ::System::Boolean EHOHHDMABEL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BHPFNHAOAFA, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SELECTITEM_OFFSET))(this, EOGLMAEPALE, CNOMLBCCCNI, EHOHHDMABEL);
		}

		::System::Void SetMuteSelectAutoClickItem(::System::Boolean NGJMKJNOGJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETMUTESELECTAUTOCLICKITEM_OFFSET))(this, NGJMKJNOGJN);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GETINDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* GetItemTransByIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GETITEMTRANSBYINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void AddItemSelectOperation(::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH CBBCJFPGBOK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ADDITEMSELECTOPERATION_OFFSET))(this, CBBCJFPGBOK);
		}

		::System::Void RemoveItemSelectOperation(::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH CBBCJFPGBOK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadBaseList_AJGBMMFGAJH))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_REMOVEITEMSELECTOPERATION_OFFSET))(this, CBBCJFPGBOK);
		}

		::System::Void ResetKeepIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_RESETKEEPINDEX_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* FAMGIABLFPH)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETSCROLLVIEW_OFFSET))(this, FAMGIABLFPH);
		}

		::System::Void MuteCacheSelectedIndex(::System::Boolean NGJMKJNOGJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_MUTECACHESELECTEDINDEX_OFFSET))(this, NGJMKJNOGJN);
		}

		::System::Void SetCacheSelectedIndexEnabled(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETCACHESELECTEDINDEXENABLED_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void TryCacheSelectedIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_TRYCACHESELECTEDINDEX_OFFSET))(this);
		}

		::System::Void ClearCacheSelectedIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CLEARCACHESELECTEDINDEX_OFFSET))(this);
		}

		::System::Void UpdateNavEvent(::MoleMole::InputLogicEventType KBHFBLJPFJH, ::MoleMole::InputLogicEventType DGMGMEICCGE, ::MoleMole::InputLogicEventType KILPCOMOCMD, ::MoleMole::InputLogicEventType BBCODANAFGI, ::MoleMole::InputLogicEventType ACDMIDHJGLO, ::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>* LJOPKCKHEGJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_UPDATENAVEVENT_OFFSET))(this, KBHFBLJPFJH, DGMGMEICCGE, KILPCOMOCMD, BBCODANAFGI, ACDMIDHJGLO, LJOPKCKHEGJ);
		}

		::System::Boolean BEDAGEAHFHO(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_BEDAGEAHFHO_OFFSET))(this, LNEEMAGIHLB);
		}

		::System::Nullable_1<::System::Boolean> GBCJEPAMBJJ(::BHPFNHAOAFA CNOMLBCCCNI)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::BHPFNHAOAFA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GBCJEPAMBJJ_OFFSET))(this, CNOMLBCCCNI);
		}

		::BHPFNHAOAFA ALCPBDAOIFK()
		{
			return ((::BHPFNHAOAFA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ALCPBDAOIFK_OFFSET))(this);
		}

		::System::Int32 OJBBMDEIFFE(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OJBBMDEIFFE_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Void KAMKJJGLIFE(::BHPFNHAOAFA EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::BHPFNHAOAFA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_KAMKJJGLIFE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AIDAJJJIOFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_AIDAJJJIOFC_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* FIJCPOACEEF(::UnityEngine::Transform* MIALFKCCCPI)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_FIJCPOACEEF_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KLIJIINHMFH(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_KLIJIINHMFH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AJHFOIGACAF(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_AJHFOIGACAF_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Vector2 NENGEBGHPDH(::System::Int32 ABHBKFJKINO, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL JHOFOOCLBAD)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_NENGEBGHPDH_OFFSET))(this, ABHBKFJKINO, JHOFOOCLBAD);
		}

		::System::Int32 BGDJBHENHPA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_BGDJBHENHPA_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> IMKPEICFNON()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_IMKPEICFNON_OFFSET))(this);
		}

		::MoleMole::MonoGamepadBaseList_JIAOBPNNBMG DCAOCHAMLED(::NAPScrollView::DataStruct::LayoutMeta_LayoutType OPPFDNCJFGJ)
		{
			return ((::MoleMole::MonoGamepadBaseList_JIAOBPNNBMG(*)(::PVOID, ::NAPScrollView::DataStruct::LayoutMeta_LayoutType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_DCAOCHAMLED_OFFSET))(this, OPPFDNCJFGJ);
		}

		::System::Int32 AINDKPFLJNN(::System::Int32 PEPMPIKIBAD, ::System::Int32 CJHKJLBCNEH, ::MoleMole::InputActionEvent PKBLAMDICKB, ::UnityEngine::Vector2 EECMDPPHLAM)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_AINDKPFLJNN_OFFSET))(this, PEPMPIKIBAD, CJHKJLBCNEH, PKBLAMDICKB, EECMDPPHLAM);
		}

		::System::Boolean PKFLGKENBBF(::UnityEngine::Transform* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA, ::System::Boolean FDHMCIFPNCK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_PKFLGKENBBF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Boolean POHFDNBMKJD(::System::Int32 OJOEBEBNFCJ, ::System::Int32 CJHKJLBCNEH, ::MoleMole::InputLogicEventType MBEHILFGMGI, ::UnityEngine::Transform* DBGBAKKOOKO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::InputLogicEventType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_POHFDNBMKJD_OFFSET))(this, OJOEBEBNFCJ, CJHKJLBCNEH, MBEHILFGMGI, DBGBAKKOOKO);
		}

		::MNCIGAHEFLF CMJCFCMIABJ(::MoleMole::InputLogicEventType MIALFKCCCPI)
		{
			return ((::MNCIGAHEFLF(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CMJCFCMIABJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OBKBKJMGDMI(::System::Nullable_1<::System::Int32> EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OBKBKJMGDMI_OFFSET))(this, EGEGIMGMJHN);
		}

		::BHPFNHAOAFA OBNABGACKBJ(::MoleMole::InputLogicEventType MBEHILFGMGI)
		{
			return ((::BHPFNHAOAFA(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_OBNABGACKBJ_OFFSET))(this, MBEHILFGMGI);
		}

		::System::Int32 CCOMDAHPDAH(::System::Int32 PCEFKJHBDDF, ::System::Int32 CHIFPJGLFPK, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL JHOFOOCLBAD, ::System::Boolean AJOPMOMOEJA)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::MonoGamepadBaseList_NDKKCEHOIIL, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CCOMDAHPDAH_OFFSET))(this, PCEFKJHBDDF, CHIFPJGLFPK, JHOFOOCLBAD, AJOPMOMOEJA);
		}
	};
}
