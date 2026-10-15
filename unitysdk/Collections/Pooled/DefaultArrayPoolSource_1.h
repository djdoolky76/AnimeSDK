#pragma once
#include "unitysdk/unitysdk.h"
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	template <typename T>
	class DefaultArrayPoolSource_1
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::System::Object* _bucketsInitializeLock; // 0x0
		::System::Int32 _maxLength; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<T>** StaticGet__shared()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<T>**)UnitySDK::FromName("Collections.Pooled", "DefaultArrayPoolSource`1")->GetStaticField(0x0);
		}

		// static const ::System::Object MinimumArrayLength; // 0x0
		// static const ::System::Object DefaultArrayLength; // 0x0
		// static const ::System::Object MaximumArrayLength; // 0x0
	};
}
