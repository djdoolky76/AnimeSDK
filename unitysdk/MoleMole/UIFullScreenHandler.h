#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFullScreenHandler_NHKEAAPJONC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFULLSCREENHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x1AFFC780)
#define MOLEMOLE_UIFULLSCREENHANDLER_CHGEGOHAFOC_OFFSET UNITYSDK_OFFSET(0x1AFFBC80)
#define MOLEMOLE_UIFULLSCREENHANDLER_CJOOADHCJOD_OFFSET UNITYSDK_OFFSET(0x1AFFB680)
#define MOLEMOLE_UIFULLSCREENHANDLER_DGONCNOAKFG_OFFSET UNITYSDK_OFFSET(0x1AFFA210)
#define MOLEMOLE_UIFULLSCREENHANDLER_DJDFLPPNCCH_OFFSET UNITYSDK_OFFSET(0x1AFFC1A0)
#define MOLEMOLE_UIFULLSCREENHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x1AFFBE60)
#define MOLEMOLE_UIFULLSCREENHANDLER_GANFKMMCPGH_OFFSET UNITYSDK_OFFSET(0x1AFFBF90)
#define MOLEMOLE_UIFULLSCREENHANDLER_GGPCOLFPHPN_OFFSET UNITYSDK_OFFSET(0x1AFFC870)
#define MOLEMOLE_UIFULLSCREENHANDLER_GKMGNFPIFLD_OFFSET UNITYSDK_OFFSET(0x1AFFC2C0)
#define MOLEMOLE_UIFULLSCREENHANDLER_GLHGKPIGJLJ_OFFSET UNITYSDK_OFFSET(0x1AFFC7E0)
#define MOLEMOLE_UIFULLSCREENHANDLER_IFDNGMFIEGE_OFFSET UNITYSDK_OFFSET(0x1AFFBEA0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1AFFC110)
#define MOLEMOLE_UIFULLSCREENHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x1AFFC580)
#define MOLEMOLE_UIFULLSCREENHANDLER_JFIOGGEDFHB_OFFSET UNITYSDK_OFFSET(0x1AFFC230)
#define MOLEMOLE_UIFULLSCREENHANDLER_JMPGGEPPLHP_OFFSET UNITYSDK_OFFSET(0x1AFFAC20)
#define MOLEMOLE_UIFULLSCREENHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1AFFC080)
#define MOLEMOLE_UIFULLSCREENHANDLER_NADPBJDPDMK_OFFSET UNITYSDK_OFFSET(0x1AFFA630)
#define MOLEMOLE_UIFULLSCREENHANDLER_NKMLFODGPKL_OFFSET UNITYSDK_OFFSET(0x1AFFA890)
#define MOLEMOLE_UIFULLSCREENHANDLER_NLABHHBLGNB_OFFSET UNITYSDK_OFFSET(0x1AFFB330)
#define MOLEMOLE_UIFULLSCREENHANDLER_NPPAOLIPJOA_OFFSET UNITYSDK_OFFSET(0x1AFFA750)
#define MOLEMOLE_UIFULLSCREENHANDLER_OBHELHHDDJE_OFFSET UNITYSDK_OFFSET(0x1AFFA6C0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AFFA550)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AFFA500)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AFFA3B0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AFFA2F0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFFA420)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFFA490)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1AFFA1C0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AFFA360)
#define MOLEMOLE_UIFULLSCREENHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x1AFFA850)
#define MOLEMOLE_UIFULLSCREENHANDLER_POIANPFIOLB_OFFSET UNITYSDK_OFFSET(0x1AFFBFF0)
#define MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFA5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenHandler_TypeDefinitionIndex = 80654;

	class UIFullScreenHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::UIFullScreenHandler_NHKEAAPJONC _axisType; // 0x18
		::System::Single _overDraw; // 0x1C
		::System::Nullable_1<::System::Boolean> KBFHDGPJEMP; // 0x20
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x28
		::System::Boolean JJJFLPOLELO; // 0x30
		::System::Boolean NHBJNGHHKMC; // 0x31
		::System::Byte _padding0[0x6];
		::Il2CppArray<::UnityEngine::Vector3>* CLBIDEIINPL; // 0x38
		::System::Boolean DCKIHJAAGNK; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void NADPBJDPDMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_NADPBJDPDMK_OFFSET))(this);
		}

		::System::Void OBHELHHDDJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_OBHELHHDDJE_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> NPPAOLIPJOA(::System::Boolean DNHOCLPEPFF)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_NPPAOLIPJOA_OFFSET))(DNHOCLPEPFF);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		::System::Boolean NKMLFODGPKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_NKMLFODGPKL_OFFSET))(this);
		}

		::System::Void DGONCNOAKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_DGONCNOAKFG_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> JMPGGEPPLHP(::UnityEngine::Canvas* FAKJDBJMJCH, ::UnityEngine::RectTransform* EMDOIDLAFDB, ::System::Single NBMJDMNDPHO, ::System::Boolean DNHOCLPEPFF, ::System::Nullable_1<::UnityEngine::Rect> FCFIFLGMDPO)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::System::Single, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Rect>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_JMPGGEPPLHP_OFFSET))(FAKJDBJMJCH, EMDOIDLAFDB, NBMJDMNDPHO, DNHOCLPEPFF, FCFIFLGMDPO);
		}

		static ::System::Boolean NLABHHBLGNB(::UnityEngine::RectTransform* EMDOIDLAFDB)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_NLABHHBLGNB_OFFSET))(EMDOIDLAFDB);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> CJOOADHCJOD(::UnityEngine::Canvas* FAKJDBJMJCH, ::UnityEngine::RectTransform* EMDOIDLAFDB, ::MoleMole::UIFullScreenHandler_NHKEAAPJONC BODPEDPHHGC, ::System::Single NBMJDMNDPHO, ::System::Boolean DNHOCLPEPFF, ::System::Nullable_1<::UnityEngine::Rect> FCFIFLGMDPO)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::MoleMole::UIFullScreenHandler_NHKEAAPJONC, ::System::Single, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Rect>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_CJOOADHCJOD_OFFSET))(FAKJDBJMJCH, EMDOIDLAFDB, BODPEDPHHGC, NBMJDMNDPHO, DNHOCLPEPFF, FCFIFLGMDPO);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Boolean IFDNGMFIEGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_IFDNGMFIEGE_OFFSET))(this);
		}

		::System::Boolean GANFKMMCPGH(::System::Boolean BOODLNILFNM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_GANFKMMCPGH_OFFSET))(this, BOODLNILFNM);
		}

		::System::Void POIANPFIOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_POIANPFIOLB_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void DJDFLPPNCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_DJDFLPPNCCH_OFFSET))(this);
		}

		::System::Void JFIOGGEDFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_JFIOGGEDFHB_OFFSET))(this);
		}

		::System::Void GKMGNFPIFLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_GKMGNFPIFLD_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void GLHGKPIGJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_GLHGKPIGJLJ_OFFSET))(this);
		}

		::System::Void GGPCOLFPHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_GGPCOLFPHPN_OFFSET))(this);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> CHGEGOHAFOC(::UnityEngine::Canvas* FAKJDBJMJCH, ::UnityEngine::RectTransform* EMDOIDLAFDB)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_CHGEGOHAFOC_OFFSET))(FAKJDBJMJCH, EMDOIDLAFDB);
		}
	};
}
