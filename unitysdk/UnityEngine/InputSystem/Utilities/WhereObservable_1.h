#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class IObservable_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int WhereObservable_1_TypeDefinitionIndex = 32142;

	template <typename T>
	class WhereObservable_1 : public ::System::Object
	{
	public:
		::System::IObservable_1<T>* m_Source; // 0x0
		::System::Func_2<T, ::System::Boolean>* m_Predicate; // 0x0
	};
}
