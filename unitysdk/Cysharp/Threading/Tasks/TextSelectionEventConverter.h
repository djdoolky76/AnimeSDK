#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F125F80)
#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F1260B0)
#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_INVOKECORE_OFFSET UNITYSDK_OFFSET(0x1F126050)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TextSelectionEventConverter_TypeDefinitionIndex = 38480;

	class TextSelectionEventConverter
	{
	public:
		::UnityEngine::Events::UnityEvent* innerEvent; // 0x30
		::UnityEngine::Events::UnityAction* invokeDelegate; // 0x38
		::System::Void _ctor(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_CTOR_OFFSET))(this, a1);
		}

		::System::Void InvokeCore(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_INVOKECORE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_DISPOSE_OFFSET))(this);
		}

	};
}
