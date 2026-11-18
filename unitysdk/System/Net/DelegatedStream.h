#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net::Sockets { class NetworkStream; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_DELEGATEDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1DEF5360)
#define SYSTEM_NET_DELEGATEDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1DEF5460)
#define SYSTEM_NET_DELEGATEDSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DEF5540)
#define SYSTEM_NET_DELEGATEDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1DEF5570)
#define SYSTEM_NET_DELEGATEDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1DEF5620)
#define SYSTEM_NET_DELEGATEDSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1DEF56F0)
#define SYSTEM_NET_DELEGATEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DEF56C0)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1DEF50D0)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1DEF50E0)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1DEF5110)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1DEF5140)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DEF5170)
#define SYSTEM_NET_DELEGATEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DEF5210)
#define SYSTEM_NET_DELEGATEDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1DEF57E0)
#define SYSTEM_NET_DELEGATEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1DEF5720)
#define SYSTEM_NET_DELEGATEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1DEF58B0)
#define SYSTEM_NET_DELEGATEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1DEF5960)
#define SYSTEM_NET_DELEGATEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DEF52B0)
#define SYSTEM_NET_DELEGATEDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1DEF5AC0)
#define SYSTEM_NET_DELEGATEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1DEF5A10)
#define SYSTEM_NET_DELEGATEDSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF5010)
#define SYSTEM_NET_DELEGATEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF4FC0)

namespace System::Net
{
	inline static constexpr unsigned int DelegatedStream_TypeDefinitionIndex = 3436;

	class DelegatedStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::System::Net::Sockets::NetworkStream* netStream; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM__CTOR_1_OFFSET))(this, stream);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_DELEGATEDSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}
	};
}
