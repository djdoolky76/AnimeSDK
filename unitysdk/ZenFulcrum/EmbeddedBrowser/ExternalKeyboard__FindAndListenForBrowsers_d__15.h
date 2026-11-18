#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class ExternalKeyboard; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF25C80)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF25E20)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF25E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FF25E30)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF25C70)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF24480)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard__FindAndListenForBrowsers_d__15_TypeDefinitionIndex = 32777;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class ExternalKeyboard__FindAndListenForBrowsers_d__15 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD__FINDANDLISTENFORBROWSERS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
