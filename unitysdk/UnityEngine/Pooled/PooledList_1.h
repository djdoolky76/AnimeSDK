#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Pooled { template <typename T> class IPooledList_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int PooledList_1_TypeDefinitionIndex = 4529;

	template <typename T>
	class PooledList_1 : public ::System::Object
	{
	public:
		::UnityEngine::Pooled::IPooledList_1<T>* _processor; // 0x0
		static ::System::Boolean* StaticGet_IsClass()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.Pooled", "PooledList`1")->GetStaticField(0x0);
		}

	};
}
