#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultV2_PageController_ResultState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UILEVELRESULTDELAYEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196112C0)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19611100)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT_TRYFIREEVENT_OFFSET UNITYSDK_OFFSET(0x19611140)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19611300)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultDelayEvent_TypeDefinitionIndex = 76569;

	class UILevelResultDelayEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* winFadeOutAnimation; // 0x18
		::System::String* failFadeOutAnimation; // 0x20
		::Il2CppArray<::System::Object*>* DelayItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void TryFireEvent(::MoleMole::UILevelResultV2_PageController_ResultState JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultV2_PageController_ResultState))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_TRYFIREEVENT_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_ONDISABLE_OFFSET))(this);
		}
	};
}
