#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace UnityEngine::Pooled { template <typename T> class DefaultArrayPoolSource_1; }

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int DefaultArrayPoolSource_1_TypeDefinitionIndex = 4525;

	template <typename T>
	class DefaultArrayPoolSource_1
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::System::Object* _bucketsInitializeLock; // 0x0
		::System::Int32 _maxLength; // 0x0
		static ::UnityEngine::Pooled::DefaultArrayPoolSource_1<T>** StaticGet__shared()
		{
			return (::UnityEngine::Pooled::DefaultArrayPoolSource_1<T>**)UnitySDK::FromName("UnityEngine.Pooled", "DefaultArrayPoolSource`1")->GetStaticField(0x0);
		}

	};
}
