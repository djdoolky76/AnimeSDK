#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1EDB4070)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDB2D30)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EDB2DC0)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EDB2E50)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_4_OFFSET UNITYSDK_OFFSET(0x1EDB2EE0)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_5_OFFSET UNITYSDK_OFFSET(0x1EDB3090)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_6_OFFSET UNITYSDK_OFFSET(0x1EDB2F00)
#define SYSTEM_IO_MEMORYSTREAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB2CE0)
#define SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDB31A0)
#define SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1EDB31D0)
#define SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET UNITYSDK_OFFSET(0x1EDB30E0)
#define SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EDB32D0)
#define SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1EDB32E0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1EDB30B0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1EDB30C0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1EDB30D0)
#define SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1EDB3670)
#define SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1EDB38B0)
#define SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDB3980)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET UNITYSDK_OFFSET(0x1EDB35F0)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET UNITYSDK_OFFSET(0x1EDB3390)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDB33A0)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET UNITYSDK_OFFSET(0x1EDB3470)
#define SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1EDB3CF0)
#define SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1EDB3FD0)
#define SYSTEM_IO_MEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1EDB3AE0)
#define SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1EDB4CC0)
#define SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1EDB4EA0)
#define SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1EDB36E0)
#define SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDB39F0)
#define SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1EDB4FD0)
#define SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET UNITYSDK_OFFSET(0x1EDB3330)
#define SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1EDB5340)
#define SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1EDB5670)
#define SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EDB57B0)
#define SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1EDB5040)

namespace System::IO
{
	inline static constexpr unsigned int MemoryStream_TypeDefinitionIndex = 681;

	class MemoryStream : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::System::Threading::Tasks::Task_1<::System::Int32>* _lastReadTask; // 0x30
		::System::Int32 _length; // 0x38
		::System::Int32 _origin; // 0x3C
		::System::Int32 _capacity; // 0x40
		::System::Int32 _position; // 0x44
		::System::Boolean _writable; // 0x48
		::System::Boolean _exposable; // 0x49
		::System::Boolean _isOpen; // 0x4A
		::System::Boolean _expandable; // 0x4B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void EnsureWriteable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Boolean EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET))(this);
		}

		::System::Boolean TryGetBuffer(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* InternalGetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET))(this);
		}

		::System::Int32 InternalGetPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET))(this);
		}

		::System::Int32 InternalReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET))(this);
		}

		::System::Int32 InternalEmulateRead(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET))(this, a1);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* ToArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET))(this, a1);
		}

	};
}
