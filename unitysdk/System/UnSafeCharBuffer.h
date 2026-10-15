#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define SYSTEM_UNSAFECHARBUFFER_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x3C1A8C0)
#define SYSTEM_UNSAFECHARBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x3C1A8B0)

namespace System
{
	inline static constexpr unsigned int UnSafeCharBuffer_TypeDefinitionIndex = 363;

	struct alignas(8) UnSafeCharBuffer
	{
		::PVOID m_buffer; // 0x10
		::System::Int32 m_totalSize; // 0x18
		::System::Int32 m_length; // 0x1C
		::System::Void _ctor(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_UNSAFECHARBUFFER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AppendString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_UNSAFECHARBUFFER_APPENDSTRING_OFFSET))(this, a1);
		}

	};
}
