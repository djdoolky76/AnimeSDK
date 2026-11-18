#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_OFHBMCHLDDC.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UISAFEAREAHANDLER_AEHDIIDKIOK_OFFSET UNITYSDK_OFFSET(0x1480C9F0)
#define MOLEMOLE_UISAFEAREAHANDLER_BJNOGPOCMNJ_1_OFFSET UNITYSDK_OFFSET(0x1480E4A0)
#define MOLEMOLE_UISAFEAREAHANDLER_BJNOGPOCMNJ_OFFSET UNITYSDK_OFFSET(0x1480E870)
#define MOLEMOLE_UISAFEAREAHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x1480E750)
#define MOLEMOLE_UISAFEAREAHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x1480E860)
#define MOLEMOLE_UISAFEAREAHANDLER_FFGLPEBPCBE_OFFSET UNITYSDK_OFFSET(0x1480E2E0)
#define MOLEMOLE_UISAFEAREAHANDLER_GETSAFEAREARECT_OFFSET UNITYSDK_OFFSET(0x1480C590)
#define MOLEMOLE_UISAFEAREAHANDLER_GGPCOLFPHPN_OFFSET UNITYSDK_OFFSET(0x1480D190)
#define MOLEMOLE_UISAFEAREAHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x1480E0E0)
#define MOLEMOLE_UISAFEAREAHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1480E7D0)
#define MOLEMOLE_UISAFEAREAHANDLER_LLHBHJNDOFD_OFFSET UNITYSDK_OFFSET(0x1480E760)
#define MOLEMOLE_UISAFEAREAHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1480C270)
#define MOLEMOLE_UISAFEAREAHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1480C0D0)
#define MOLEMOLE_UISAFEAREAHANDLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1480C3C0)
#define MOLEMOLE_UISAFEAREAHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x1480E8E0)
#define MOLEMOLE_UISAFEAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1480D140)

namespace MoleMole
{
	inline static constexpr unsigned int UISafeAreaHandler_TypeDefinitionIndex = 90337;

	class UISafeAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::UISafeAreaHandler_OFHBMCHLDDC extraPaddingType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x20
		::System::Boolean JJJFLPOLELO; // 0x28
		::System::Boolean MELPIBODJAL; // 0x29
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_ONUPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Rect GetSafeAreaRect(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL, ::UnityEngine::Canvas* FAKJDBJMJCH)
		{
			return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_GETSAFEAREARECT_OFFSET))(DJHHDNDDGFL, FAKJDBJMJCH);
		}

		::System::Void GGPCOLFPHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_GGPCOLFPHPN_OFFSET))(this);
		}

		static ::UnityEngine::Rect AEHDIIDKIOK(::MoleMole::UISafeAreaHandler* AOKHOHCJNFJ, ::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL)
		{
			return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler*, ::MoleMole::UISafeAreaHandler_OFHBMCHLDDC))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_AEHDIIDKIOK_OFFSET))(AOKHOHCJNFJ, DJHHDNDDGFL);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::UnityEngine::Rect LLHBHJNDOFD(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL)
		{
			return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_LLHBHJNDOFD_OFFSET))(DJHHDNDDGFL);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> BJNOGPOCMNJ()
		{
			return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_BJNOGPOCMNJ_OFFSET))(this);
		}

		static ::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> BJNOGPOCMNJ_1(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL)
		{
			return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_BJNOGPOCMNJ_1_OFFSET))(DJHHDNDDGFL);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		static ::System::Boolean FFGLPEBPCBE(::UnityEngine::Rect HIAEJKLMKEC, ::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_FFGLPEBPCBE_OFFSET))(HIAEJKLMKEC, NGIAEEBHCOC, EHEGJCCCJCA);
		}
	};
}
