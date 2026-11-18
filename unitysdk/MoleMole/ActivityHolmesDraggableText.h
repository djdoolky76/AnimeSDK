#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x107911B0)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10791A10)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x10791D40)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_SETUP_OFFSET UNITYSDK_OFFSET(0x10790F50)
#define MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10792020)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHolmesDraggableText_TypeDefinitionIndex = 70578;

	class ActivityHolmesDraggableText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 DMBBLGMHCBG; // 0x18
		::System::Int32 FNLGDLHAEGD; // 0x1C
		::System::String* KJJHLFBLLFB; // 0x20
		::System::Int32 AAKELBCIPEL; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* GJBIPCOKJJP; // 0x30
		::UnityEngine::RectTransform* EDBOCHAHMLI; // 0x38
		::System::Action* BCDIOOAOBMF; // 0x40
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x48
		::UnityEngine::GameObject* FLLLLNEEFJP; // 0x50
		::System::Boolean AJCJEJGICBA; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::System::Int32 MGMNOJLNHJH, ::System::Int32 OBNIAHNMHPF, ::System::String* DAONEKIGPLF, ::System::Int32 HLNOIEHKPGP, ::UnityEngine::RectTransform* OJHJEJIANOO, ::UnityEngine::RectTransform* GIDBHMMCMBP, ::System::Action* LGCNPCMFFJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_SETUP_OFFSET))(this, MGMNOJLNHJH, OBNIAHNMHPF, DAONEKIGPLF, HLNOIEHKPGP, OJHJEJIANOO, GIDBHMMCMBP, LGCNPCMFFJE);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDRAGGABLETEXT_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
