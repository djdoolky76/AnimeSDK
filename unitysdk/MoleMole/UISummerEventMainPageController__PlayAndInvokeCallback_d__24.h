#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1054FF80)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10550050)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x105500B0)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10550060)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1054FF70)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x1054FF60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventMainPageController__PlayAndInvokeCallback_d__24_TypeDefinitionIndex = 43176;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class UISummerEventMainPageController__PlayAndInvokeCallback_d__24 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* root; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* key; // 0x20
		::System::Action* callback; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER__PLAYANDINVOKECALLBACK_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
