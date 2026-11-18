#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoGamepadScrollView_IPKEOOPAFPE.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_AFJCGOALGNM_OFFSET UNITYSDK_OFFSET(0x18100200)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_BGGHCHJGKMG_OFFSET UNITYSDK_OFFSET(0x18101C20)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x180FFC80)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_FHEBNAJKEFP_OFFSET UNITYSDK_OFFSET(0x18102330)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x18100F20)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GCMIFBNEFCJ_OFFSET UNITYSDK_OFFSET(0x18102450)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x18101570)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x180FF990)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x180FF980)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GFMAJJCMDNB_OFFSET UNITYSDK_OFFSET(0x181023C0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x18101E90)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x18100F80)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x180FFB00)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_JEFHOHKLBGM_OFFSET UNITYSDK_OFFSET(0x18100E90)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_JHKMNKELCFM_OFFSET UNITYSDK_OFFSET(0x18100D90)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_KJLKHOPODEA_OFFSET UNITYSDK_OFFSET(0x180FF9A0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_KMKNDCPHIHC_OFFSET UNITYSDK_OFFSET(0x18102560)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_LLBDDDHHBGN_OFFSET UNITYSDK_OFFSET(0x18102550)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_LNHGPCGAAFL_OFFSET UNITYSDK_OFFSET(0x181017A0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_MBCEBFOBHAM_OFFSET UNITYSDK_OFFSET(0x18101260)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_MIHFEBMIPFI_OFFSET UNITYSDK_OFFSET(0x18101F40)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_MLEFMLIIHAJ_OFFSET UNITYSDK_OFFSET(0x18102500)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_NAJAJGFLJFJ_OFFSET UNITYSDK_OFFSET(0x18101E50)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_ONEKHJPOAGO_OFFSET UNITYSDK_OFFSET(0x181022E0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_PFGAFGBCILN_OFFSET UNITYSDK_OFFSET(0x181019C0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18101340)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x181015E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadScrollView_TypeDefinitionIndex = 51869;

	class MonoGamepadScrollView : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MonoUITableScrollV2* _scrollView; // 0xF0
		::MoleMole::InputLogicEventType _scrollEvent; // 0xF8
		::System::Single _speed; // 0xFC
		::UnityEngine::RectTransform_Axis _moveType; // 0x100
		::System::Single _thresholdDelta; // 0x104
		::System::Single _thresholdAngle; // 0x108
		::System::Boolean _trySelectContentSelectable; // 0x10C
		::System::Byte _padding0[0x3];
		::MoleMole::InputLogicEventType _prevItemEvent; // 0x110
		::MoleMole::InputLogicEventType _nextItemEvent; // 0x114
		::MoleMole::InputLogicEventType _confirmItemEvent; // 0x118
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadSelectable*>* HGMMKGHGMIA; // 0x120
		::System::Int32 BDIIOFIJNMN; // 0x128
		::System::Int32 NLPCEKADDMC; // 0x12C
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* LPOCLICLJBC; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SELECTEDINDEX_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_ScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean KJLKHOPODEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_KJLKHOPODEA_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Void MBCEBFOBHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_MBCEBFOBHAM_OFFSET))(this);
		}

		::System::Void SelectIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_SELECTINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 GetItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GETITEMCOUNT_OFFSET))(this);
		}

		::UnityEngine::Transform* LNHGPCGAAFL(::MoleMole::MonoGamepadSelectable* DDLHOGIFIHC, ::MoleMole::MonoGamepadScrollView_IPKEOOPAFPE& param_1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadScrollView_IPKEOOPAFPE&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_LNHGPCGAAFL_OFFSET))(this, DDLHOGIFIHC, param_1);
		}

		::System::Void AFJCGOALGNM(::System::Boolean INKFCBNNOCE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_AFJCGOALGNM_OFFSET))(this, INKFCBNNOCE);
		}

		::MoleMole::MonoGamepadSelectable* JEFHOHKLBGM()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_JEFHOHKLBGM_OFFSET))(this);
		}

		::System::Boolean BGGHCHJGKMG(::UnityEngine::Vector2 HBEKKMCBGBK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_BGGHCHJGKMG_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Void NAJAJGFLJFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_NAJAJGFLJFJ_OFFSET))(this);
		}

		::System::Boolean HEDKEJGHLJK(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_HEDKEJGHLJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MIHFEBMIPFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_MIHFEBMIPFI_OFFSET))(this);
		}

		::System::Boolean FHEBNAJKEFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_FHEBNAJKEFP_OFFSET))(this);
		}

		::System::Boolean JHKMNKELCFM(::UnityEngine::Vector2 HBEKKMCBGBK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_JHKMNKELCFM_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Int32 PFGAFGBCILN(::MoleMole::MonoGamepadScrollView_IPKEOOPAFPE& param_0)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadScrollView_IPKEOOPAFPE&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_PFGAFGBCILN_OFFSET))(this, param_0);
		}

		::System::Boolean GFMAJJCMDNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GFMAJJCMDNB_OFFSET))(this);
		}

		::System::Void GCMIFBNEFCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GCMIFBNEFCJ_OFFSET))(this);
		}

		::System::Void ONEKHJPOAGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_ONEKHJPOAGO_OFFSET))(this);
		}

		::System::Void MLEFMLIIHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_MLEFMLIIHAJ_OFFSET))(this);
		}

		::System::Void LLBDDDHHBGN(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_LLBDDDHHBGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KMKNDCPHIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_KMKNDCPHIHC_OFFSET))(this);
		}
	};
}
