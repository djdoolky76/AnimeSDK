#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class CJMLLONLLEG;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1249BF30)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1249BF80)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1249C010)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1249C070)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1249C0D0)

namespace MoleMole
{
	inline static constexpr unsigned int PointerDownBangBooCard_TypeDefinitionIndex = 92720;

	class PointerDownBangBooCard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_1<::CJMLLONLLEG*>* AKLDHBHKJNB; // 0x18
		::System::Action* OnPointerUp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Func_1<::CJMLLONLLEG*>* CCFABLEKFFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::CJMLLONLLEG*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET))(this, CCFABLEKFFC);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
