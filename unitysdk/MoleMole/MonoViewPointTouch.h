#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoViewPointTouch_LALNKCLAJMP.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_MONOVIEWPOINTTOUCH_CLEARTOUCH_OFFSET UNITYSDK_OFFSET(0x135C2570)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_DKMKPBODNJD_OFFSET UNITYSDK_OFFSET(0x135C2D10)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_HFJKBHLMMGG_OFFSET UNITYSDK_OFFSET(0x135C26B0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_MHMHGJFCLNN_OFFSET UNITYSDK_OFFSET(0x135C3610)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_OGPDFDOLPLG_OFFSET UNITYSDK_OFFSET(0x135C37B0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x135C2510)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELDRAG_OFFSET UNITYSDK_OFFSET(0x135C2E20)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x135C38C0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x135C2820)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERUP_OFFSET UNITYSDK_OFFSET(0x135C2B00)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_PACKNEPMGMO_OFFSET UNITYSDK_OFFSET(0x135C2AB0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_START_OFFSET UNITYSDK_OFFSET(0x135C23B0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x135C2630)
#define MOLEMOLE_MONOVIEWPOINTTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x135C3970)

namespace MoleMole
{
	inline static constexpr unsigned int MonoViewPointTouch_TypeDefinitionIndex = 43871;

	class MonoViewPointTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single JHEHBPEMLMH; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OCAKIEKBFPA; // 0x20
		::MoleMole::MonoViewPointTouch_LALNKCLAJMP GFDPBAPOHCN; // 0x28
		::MoleMole::MonoViewPointTouch_LALNKCLAJMP BGDJGHNABCE; // 0x2C
		::UnityEngine::Vector2 FINNCMGJJIA; // 0x30
		::UnityEngine::Vector2 GPDJCPPKHIE; // 0x38
		::System::Int32 MLFHMJGBFEP; // 0x40
		::System::Int32 MLJPEEGCNEJ; // 0x44
		::System::Boolean OCNOHLNOJFE; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_START_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean OGLDGNLMFMK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONAPPLICATIONFOCUS_OFFSET))(this, OGLDGNLMFMK);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void OnViewPointPanelPointerDown(::UnityEngine::EventSystems::BaseEventData* PJBDLMBIIBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERDOWN_OFFSET))(this, PJBDLMBIIBH);
		}

		::System::Void OnViewPointPanelPointerUp(::UnityEngine::EventSystems::BaseEventData* PJBDLMBIIBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELPOINTERUP_OFFSET))(this, PJBDLMBIIBH);
		}

		::System::Void OnViewPointPanelDrag(::UnityEngine::EventSystems::BaseEventData* PJBDLMBIIBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELDRAG_OFFSET))(this, PJBDLMBIIBH);
		}

		::System::Void OnViewPointPanelInitializePotentialDrag(::UnityEngine::EventSystems::BaseEventData* PJBDLMBIIBH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_ONVIEWPOINTPANELINITIALIZEPOTENTIALDRAG_OFFSET))(this, PJBDLMBIIBH);
		}

		::System::Void ClearTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_CLEARTOUCH_OFFSET))(this);
		}

		::System::Void DKMKPBODNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_DKMKPBODNJD_OFFSET))(this);
		}

		::MoleMole::MonoViewPointTouch_LALNKCLAJMP MHMHGJFCLNN()
		{
			return ((::MoleMole::MonoViewPointTouch_LALNKCLAJMP(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_MHMHGJFCLNN_OFFSET))(this);
		}

		::System::Boolean HFJKBHLMMGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_HFJKBHLMMGG_OFFSET))(this);
		}

		::System::Void OGPDFDOLPLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_OGPDFDOLPLG_OFFSET))(this);
		}

		::System::Void PACKNEPMGMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_PACKNEPMGMO_OFFSET))(this);
		}
	};
}
