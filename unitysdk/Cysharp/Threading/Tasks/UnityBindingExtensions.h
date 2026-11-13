#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class String; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Text; }

#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_2_OFFSET UNITYSDK_OFFSET(0x1E573D50)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_OFFSET UNITYSDK_OFFSET(0x1E573BC0)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_1_OFFSET UNITYSDK_OFFSET(0x1E573C20)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_5_OFFSET UNITYSDK_OFFSET(0x1E573C80)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_6_OFFSET UNITYSDK_OFFSET(0x1E573DB0)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_OFFSET UNITYSDK_OFFSET(0x1E573AF0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityBindingExtensions_TypeDefinitionIndex = 39416;

	class UnityBindingExtensions : public ::System::Object
	{
	public:
		static ::System::Void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindTo_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BindTo_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindTo_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_2_OFFSET))(a1, a2, a3, a4);
		}

	};
}
