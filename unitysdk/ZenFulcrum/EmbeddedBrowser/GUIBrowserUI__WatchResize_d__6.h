#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class GUIBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x1F65E730)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F65F6C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F65F7F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F65F850)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F65F800)
#define ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F65F6B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class GUIBrowserUI__WatchResize_d__6 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::GUIBrowserUI* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Rect _currentSize_5__2; // 0x20
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_GUIBROWSERUI__WATCHRESIZE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
