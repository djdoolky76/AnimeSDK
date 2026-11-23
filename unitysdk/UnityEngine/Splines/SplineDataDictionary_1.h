#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { template <typename T> class SplineDataKeyValuePair_1; }

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineDataDictionary_1_TypeDefinitionIndex = 20660;

	template <typename T>
	class SplineDataDictionary_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* m_Data; // 0x0
	};
}
