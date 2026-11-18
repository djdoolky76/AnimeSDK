#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

namespace System::Buffers
{
	inline static constexpr unsigned int DefaultArrayPool_1_TypeDefinitionIndex = 3252;

	template <typename T>
	class DefaultArrayPool_1
	{
	public:
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(DefaultArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 DefaultMaxArrayLength = 0x100000; // 0x0
		// static const ::System::Int32 DefaultMaxNumberOfArraysPerBucket = 0x32; // 0x0
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
	};
}
