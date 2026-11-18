#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_BUFFER_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1DD0A1A0)
#define SYSTEM_BUFFER_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1DD0A060)
#define SYSTEM_BUFFER_INDEXOFBYTE_OFFSET UNITYSDK_OFFSET(0x1DD09B00)
#define SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1DD09AF0)
#define SYSTEM_BUFFER_MEMCPY1_OFFSET UNITYSDK_OFFSET(0x1DD0A660)
#define SYSTEM_BUFFER_MEMCPY2_OFFSET UNITYSDK_OFFSET(0x1DD0A800)
#define SYSTEM_BUFFER_MEMCPY4_OFFSET UNITYSDK_OFFSET(0x1DD0A710)
#define SYSTEM_BUFFER_MEMCPY_1_OFFSET UNITYSDK_OFFSET(0x1DD0A020)
#define SYSTEM_BUFFER_MEMCPY_2_OFFSET UNITYSDK_OFFSET(0x1DD09D70)
#define SYSTEM_BUFFER_MEMCPY_OFFSET UNITYSDK_OFFSET(0x1DD09D30)
#define SYSTEM_BUFFER_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x1DD0A540)
#define SYSTEM_BUFFER_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x1DD09CD0)
#define SYSTEM_BUFFER__BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1DD09C40)

namespace System
{
	inline static constexpr unsigned int Buffer_TypeDefinitionIndex = 195;

	class Buffer : public ::System::Object
	{
	public:
		static ::System::Boolean InternalBlockCopy(::System::Array* src, ::System::Int32 srcOffsetBytes, ::System::Array* dst, ::System::Int32 dstOffsetBytes, ::System::Int32 byteCount)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET))(src, srcOffsetBytes, dst, dstOffsetBytes, byteCount);
		}

		static ::System::Int32 IndexOfByte(::PVOID src, ::System::Byte value, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INDEXOFBYTE_OFFSET))(src, value, index, count);
		}

		static ::System::Int32 _ByteLength(::System::Array* array)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER__BYTELENGTH_OFFSET))(array);
		}

		static ::System::Void ZeroMemory(::PVOID src, ::System::Int64 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_ZEROMEMORY_OFFSET))(src, len);
		}

		static ::System::Void Memcpy(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIndex, ::PVOID src, ::System::Int32 srcIndex, ::System::Int32 len)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_OFFSET))(dest, destIndex, src, srcIndex, len);
		}

		static ::System::Void Memcpy_1(::PVOID pDest, ::System::Int32 destIndex, ::Il2CppArray<::System::Byte>* src, ::System::Int32 srcIndex, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_1_OFFSET))(pDest, destIndex, src, srcIndex, len);
		}

		static ::System::Int32 ByteLength(::System::Array* array)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BYTELENGTH_OFFSET))(array);
		}

		static ::System::Void BlockCopy(::System::Array* src, ::System::Int32 srcOffset, ::System::Array* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BLOCKCOPY_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}

		static ::System::Void MemoryCopy(::PVOID source, ::PVOID destination, ::System::Int64 destinationSizeInBytes, ::System::Int64 sourceBytesToCopy)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMORYCOPY_OFFSET))(source, destination, destinationSizeInBytes, sourceBytesToCopy);
		}

		static ::System::Void memcpy4(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY4_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy2(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY2_OFFSET))(dest, src, size);
		}

		static ::System::Void memcpy1(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY1_OFFSET))(dest, src, size);
		}

		static ::System::Void Memcpy_2(::PVOID dest, ::PVOID src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_2_OFFSET))(dest, src, size);
		}
	};
}
