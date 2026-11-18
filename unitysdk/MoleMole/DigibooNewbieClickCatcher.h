#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_DIGIBOONEWBIECLICKCATCHER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xFFF7530)
#define MOLEMOLE_DIGIBOONEWBIECLICKCATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF7590)

namespace MoleMole
{
	inline static constexpr unsigned int DigibooNewbieClickCatcher_TypeDefinitionIndex = 60969;

	class DigibooNewbieClickCatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnClick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOONEWBIECLICKCATCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOONEWBIECLICKCATCHER_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
