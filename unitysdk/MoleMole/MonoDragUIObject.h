#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoDragUIObject_JAIHOBGPGOH.h"
#include "unitysdk/MoleMole/MonoDragUIObject_LBGOGEDGNNA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoDragUIObject_CCLEIKOCIPP; }
namespace MoleMole { class MonoDragUIObject_GAFGAAOOKEG; }
namespace MoleMole { class MonoDragUIObject_HODEDMONKKH; }
namespace MoleMole { class MonoDragUIObject_JNCKILBDDDB; }
namespace MoleMole { class MonoDragUIObject_KILHEDNCMNG; }
namespace MoleMole { class MonoDragUIObject_PKJLBKMAFLB; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONODRAGUIOBJECT_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x130EBB50)
#define MOLEMOLE_MONODRAGUIOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x130EBBC0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x130EC150)
#define MOLEMOLE_MONODRAGUIOBJECT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x130EC3C0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x130EC520)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x130EC360)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x130EC1F0)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x130EC310)
#define MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x130EC260)
#define MOLEMOLE_MONODRAGUIOBJECT_REGBEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBC20)
#define MOLEMOLE_MONODRAGUIOBJECT_REGCLCIKCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBCC0)
#define MOLEMOLE_MONODRAGUIOBJECT_REGDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBC70)
#define MOLEMOLE_MONODRAGUIOBJECT_REGENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBFC0)
#define MOLEMOLE_MONODRAGUIOBJECT_REGLONGPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBDC0)
#define MOLEMOLE_MONODRAGUIOBJECT_REGONBOUNDBACK_OFFSET UNITYSDK_OFFSET(0x130EBEC0)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVECLCIKCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBD10)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVEENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EC010)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVELONGPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x130EBE10)
#define MOLEMOLE_MONODRAGUIOBJECT_REMOVEONBOUNDBACK_OFFSET UNITYSDK_OFFSET(0x130EBF10)
#define MOLEMOLE_MONODRAGUIOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x130EC5C0)
#define MOLEMOLE_MONODRAGUIOBJECT_SETDRAGSTATE_OFFSET UNITYSDK_OFFSET(0x130EC750)
#define MOLEMOLE_MONODRAGUIOBJECT_SETLOINGPRESSINTEVAL_OFFSET UNITYSDK_OFFSET(0x130EBB60)
#define MOLEMOLE_MONODRAGUIOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x130EC0C0)
#define MOLEMOLE_MONODRAGUIOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x130EC7A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_TypeDefinitionIndex = 87571;

	class MonoDragUIObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoDragUIObject_KILHEDNCMNG* GKJMJKKHMGN; // 0x18
		::MoleMole::MonoDragUIObject_HODEDMONKKH* OEALMBCDPOE; // 0x20
		::MoleMole::MonoDragUIObject_PKJLBKMAFLB* BLOPBBBNDKO; // 0x28
		::MoleMole::MonoDragUIObject_JNCKILBDDDB* PBEHMMJLBEB; // 0x30
		::MoleMole::MonoDragUIObject_CCLEIKOCIPP* KICELIPIOCC; // 0x38
		::MoleMole::MonoDragUIObject_GAFGAAOOKEG* IPOAEGDNGKD; // 0x40
		::System::Boolean IsReset; // 0x48
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* dragObject; // 0x50
		::System::Boolean FollowMous; // 0x58
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 ODGONGPGCKE; // 0x5C
		::System::Boolean enableDrag; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single longPressInteval; // 0x68
		::System::Single OIBJIPHKFMJ; // 0x6C
		::MoleMole::MonoDragUIObject_JAIHOBGPGOH KBCNHDLPBLA; // 0x70
		::MoleMole::MonoDragUIObject_LBGOGEDGNNA EBLMOFMMNOD; // 0x74
		::UnityEngine::Vector2 PGFKHBNNJNA; // 0x78
		::System::Boolean GFMMBKOKCML; // 0x80
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::Object*>* EFFAONJBCOG; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ExtraData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GET_EXTRADATA_OFFSET))(this);
		}

		::System::Void SetLoingPressInteval(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_SETLOINGPRESSINTEVAL_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_INIT_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void RegBeginDragCallback(::MoleMole::MonoDragUIObject_KILHEDNCMNG* BNFLJJMMPLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_KILHEDNCMNG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGBEGINDRAGCALLBACK_OFFSET))(this, BNFLJJMMPLC);
		}

		::System::Void RegDragCallback(::MoleMole::MonoDragUIObject_HODEDMONKKH* FADGCCBFFHB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_HODEDMONKKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGDRAGCALLBACK_OFFSET))(this, FADGCCBFFHB);
		}

		::System::Void RegClcikCallback(::MoleMole::MonoDragUIObject_JNCKILBDDDB* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_JNCKILBDDDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGCLCIKCALLBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RemoveClcikCallback(::MoleMole::MonoDragUIObject_JNCKILBDDDB* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_JNCKILBDDDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVECLCIKCALLBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RegLongPressCallBack(::MoleMole::MonoDragUIObject_CCLEIKOCIPP* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_CCLEIKOCIPP*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGLONGPRESSCALLBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RemoveLongPressCallBack(::MoleMole::MonoDragUIObject_CCLEIKOCIPP* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_CCLEIKOCIPP*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVELONGPRESSCALLBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RegOnBoundBack(::MoleMole::MonoDragUIObject_GAFGAAOOKEG* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_GAFGAAOOKEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGONBOUNDBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RemoveOnBoundBack(::MoleMole::MonoDragUIObject_GAFGAAOOKEG* KJEGEDODKCE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_GAFGAAOOKEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVEONBOUNDBACK_OFFSET))(this, KJEGEDODKCE);
		}

		::System::Void RegEndDragCallback(::MoleMole::MonoDragUIObject_PKJLBKMAFLB* CCPFHMOKFBP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_PKJLBKMAFLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REGENDDRAGCALLBACK_OFFSET))(this, CCPFHMOKFBP);
		}

		::System::Void RemoveEndDragCallback(::MoleMole::MonoDragUIObject_PKJLBKMAFLB* CCPFHMOKFBP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject_PKJLBKMAFLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_REMOVEENDDRAGCALLBACK_OFFSET))(this, CCPFHMOKFBP);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONBEGINDRAG_OFFSET))(this, EIHKHEKBGLC);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERENTER_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONDRAG_OFFSET))(this, EIHKHEKBGLC);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_ONENDDRAG_OFFSET))(this, EIHKHEKBGLC);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_RESET_OFFSET))(this);
		}

		::System::Void SetDragState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_SETDRAGSTATE_OFFSET))(this);
		}
	};
}
