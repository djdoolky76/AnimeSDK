#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Buffers
{
	inline static constexpr unsigned int DefaultArrayPool_1_TypeDefinitionIndex = 3751;

	template <typename T>
	class DefaultArrayPool_1
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("System.Buffers", "DefaultArrayPool`1")->GetStaticField(0x0);
		}

	};
}
