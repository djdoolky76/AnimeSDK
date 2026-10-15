#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class StaticIcon; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB4EA0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BFB5430)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFB54C0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFB5520)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BFB54D0)
#define MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFB5420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int StaticIcon__DelayedAction_d__19_TypeDefinitionIndex = 8016;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class StaticIcon__DelayedAction_d__19 : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x10
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* action; // 0x18
		::System::Object* __2__current; // 0x20
		::MiHoYo::SDK::StaticIcon* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STATICICON__DELAYEDACTION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
