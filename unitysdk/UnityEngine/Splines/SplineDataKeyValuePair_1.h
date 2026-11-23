#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Splines { template <typename T> class SplineData_1; }

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineDataKeyValuePair_1_TypeDefinitionIndex = 20638;

	template <typename T>
	class SplineDataKeyValuePair_1 : public ::System::Object
	{
	public:
		::System::String* Key; // 0x0
		::UnityEngine::Splines::SplineData_1<T>* Value; // 0x0
	};
}
