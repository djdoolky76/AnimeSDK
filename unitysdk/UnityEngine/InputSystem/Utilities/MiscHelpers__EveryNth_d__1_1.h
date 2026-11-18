#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int MiscHelpers__EveryNth_d__1_1_TypeDefinitionIndex = 32128;

	template <typename T>
	class MiscHelpers__EveryNth_d__1_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* enumerable; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__enumerable; // 0x0
		::System::Int32 start; // 0x0
		::System::Int32 __3__start; // 0x0
		::System::Int32 n; // 0x0
		::System::Int32 __3__n; // 0x0
		::System::Int32 _index_5__2; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap2; // 0x0
	};
}
