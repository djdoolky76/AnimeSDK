#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_REQUESTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1E0C9D00)
#define SYSTEM_NET_REQUESTSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1E0CA220)
#define SYSTEM_NET_REQUESTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E0C99E0)
#define SYSTEM_NET_REQUESTSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1E0C9E90)
#define SYSTEM_NET_REQUESTSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1E0CA270)
#define SYSTEM_NET_REQUESTSTREAM_FILLFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1E0C9A00)
#define SYSTEM_NET_REQUESTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E0C99F0)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1E0C98C0)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1E0C98D0)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1E0C98E0)
#define SYSTEM_NET_REQUESTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E0C98F0)
#define SYSTEM_NET_REQUESTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E0C9940)
#define SYSTEM_NET_REQUESTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1E0C9C00)
#define SYSTEM_NET_REQUESTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1E0CA130)
#define SYSTEM_NET_REQUESTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E0CA180)
#define SYSTEM_NET_REQUESTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E0C9990)
#define SYSTEM_NET_REQUESTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1E0CA1D0)
#define SYSTEM_NET_REQUESTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C9840)
#define SYSTEM_NET_REQUESTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C97C0)

namespace System::Net
{
	inline static constexpr unsigned int RequestStream_TypeDefinitionIndex = 3550;

	class RequestStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::Il2CppArray<::System::Byte>* buffer; // 0x30
		::System::Int64 remaining_body; // 0x38
		::System::Int32 length; // 0x40
		::System::Boolean disposed; // 0x44
		::System::Byte _padding0[0x3];
		::System::Int32 offset; // 0x48

		::System::Void _ctor(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM__CTOR_OFFSET))(this, stream, buffer, offset, length);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length, ::System::Int64 contentlength)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM__CTOR_1_OFFSET))(this, stream, buffer, offset, length, contentlength);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 FillFromBuffer(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 off, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_FILLFROMBUFFER_OFFSET))(this, buffer, off, count);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* cback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, cback, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* ares)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_ENDREAD_OFFSET))(this, ares);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* cback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, cback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* async_result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_ENDWRITE_OFFSET))(this, async_result);
		}
	};
}
