#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class IObservable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int SelectManyObservable_2_TypeDefinitionIndex = 32138;

	template <typename T1, typename T2>
	class SelectManyObservable_2 : public ::System::Object
	{
	public:
		::System::IObservable_1<T1>* m_Source; // 0x0
		::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>* m_Filter; // 0x0
	};
}
