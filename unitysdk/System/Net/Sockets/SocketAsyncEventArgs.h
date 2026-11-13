#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/SocketAsyncOperation.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/EventArgs.h"
namespace System { class Object; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }
namespace System::Net::Sockets { class SocketAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1CF56610)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1CF53FC0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF566D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CF56740)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF56730)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CF56720)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1CF56560)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET UNITYSDK_OFFSET(0x1CF56580)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CF565A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x1CF565D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1CF565F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CF567B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1CF56670)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET UNITYSDK_OFFSET(0x1CF53520)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1CF56570)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x1CF56590)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET UNITYSDK_OFFSET(0x1CF565B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET UNITYSDK_OFFSET(0x1CF565C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x1CF565E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1CF56600)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncEventArgs_TypeDefinitionIndex = 2918;

	class SocketAsyncEventArgs : public ::System::EventArgs
	{
	public:
		::System::Net::Sockets::Socket* current_socket; // 0x10
		::System::Net::Sockets::SocketAsyncResult* socket_async_result; // 0x18
		::System::Net::Sockets::Socket* _AcceptSocket_k__BackingField; // 0x20
		::System::Object* _UserToken_k__BackingField; // 0x28
		::System::Net::EndPoint* remote_ep; // 0x30
		::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* Completed; // 0x38
		::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* m_BufferList; // 0x40
		::System::Net::Sockets::SocketAsyncOperation _LastOperation_k__BackingField; // 0x48
		::System::Int32 in_progress; // 0x4C
		::System::Boolean disposed; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 _BytesTransferred_k__BackingField; // 0x54
		::System::Net::Sockets::SocketError _SocketError_k__BackingField; // 0x58
		::System::Int32 _SendPacketsSendSize_k__BackingField; // 0x5C
		::System::Int32 _Count_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_CTOR_OFFSET))(this);
		}

		::System::Net::Sockets::Socket* get_AcceptSocket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET))(this);
		}

		::System::Void set_AcceptSocket(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* get_BufferList()
		{
			return ((::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET))(this);
		}

		::System::Void set_BytesTransferred(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET))(this, a1);
		}

		::System::Void set_SendPacketsSendSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET))(this, a1);
		}

		::System::Net::Sockets::SocketError get_SocketError()
		{
			return ((::System::Net::Sockets::SocketError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET))(this);
		}

		::System::Void set_SocketError(::System::Net::Sockets::SocketError a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET))(this, a1);
		}

		::System::Object* get_UserToken()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET))(this);
		}

		::System::Void set_UserToken(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET))(this, a1);
		}

		::System::Void add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ADD_COMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_REMOVE_COMPLETED_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_1_OFFSET))(this);
		}

		::System::Void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET))(this, a1);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET))(this, a1);
		}

	};
}
