#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DelegatedStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net { class Base64Stream_ReadStateInfo; }
namespace System::Net::Mime { class Base64WriteStateInfo; }

#define SYSTEM_NET_BASE64STREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1D1089E0)
#define SYSTEM_NET_BASE64STREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1D108B80)
#define SYSTEM_NET_BASE64STREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D108D20)
#define SYSTEM_NET_BASE64STREAM_DECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1D1090B0)
#define SYSTEM_NET_BASE64STREAM_ENCODEBYTES_1_OFFSET UNITYSDK_OFFSET(0x1D109630)
#define SYSTEM_NET_BASE64STREAM_ENCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1D109610)
#define SYSTEM_NET_BASE64STREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1D10A460)
#define SYSTEM_NET_BASE64STREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1D10A550)
#define SYSTEM_NET_BASE64STREAM_FLUSHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D109060)
#define SYSTEM_NET_BASE64STREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D10A640)
#define SYSTEM_NET_BASE64STREAM_GETENCODEDSTRING_OFFSET UNITYSDK_OFFSET(0x1D10A350)
#define SYSTEM_NET_BASE64STREAM_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1D10A340)
#define SYSTEM_NET_BASE64STREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D108940)
#define SYSTEM_NET_BASE64STREAM_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1D108970)
#define SYSTEM_NET_BASE64STREAM_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1D1089D0)
#define SYSTEM_NET_BASE64STREAM_READ_OFFSET UNITYSDK_OFFSET(0x1D10A6B0)
#define SYSTEM_NET_BASE64STREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D10A7E0)
#define SYSTEM_NET_BASE64STREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D10A970)
#define SYSTEM_NET_BASE64STREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D108800)
#define SYSTEM_NET_BASE64STREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D1088D0)
#define SYSTEM_NET_BASE64STREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1086A0)

namespace System::Net
{
	inline static constexpr unsigned int Base64Stream_TypeDefinitionIndex = 3431;

	class Base64Stream : public ::System::Net::DelegatedStream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_base64DecodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Base64Stream_TypeDefinitionIndex)->GetStaticField(0x3330);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_base64EncodeMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Base64Stream_TypeDefinitionIndex)->GetStaticField(0x3338);
		}
		// static const ::System::Int32 sizeOfBase64EncodedChar = 0x4; // 0x0
		// static const ::System::Byte invalidBase64Value = 0xFF; // 0x0
		::System::Net::Mime::Base64WriteStateInfo* writeState; // 0x38
		::System::Net::Base64Stream_ReadStateInfo* readState; // 0x40
		::System::Int32 lineLength; // 0x48

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Net::Mime::Base64WriteStateInfo* writeStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Net::Mime::Base64WriteStateInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM__CTOR_OFFSET))(this, stream, writeStateInfo);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Int32 lineLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM__CTOR_1_OFFSET))(this, stream, lineLength);
		}

		::System::Void _ctor_2(::System::Net::Mime::Base64WriteStateInfo* writeStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::Base64WriteStateInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM__CTOR_2_OFFSET))(this, writeStateInfo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM__CCTOR_OFFSET))();
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Net::Base64Stream_ReadStateInfo* get_ReadState()
		{
			return ((::System::Net::Base64Stream_ReadStateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_GET_READSTATE_OFFSET))(this);
		}

		::System::Net::Mime::Base64WriteStateInfo* get_WriteState()
		{
			return ((::System::Net::Mime::Base64WriteStateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_GET_WRITESTATE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 DecodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_DECODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 EncodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_ENCODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 EncodeBytes_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean dontDeferFinalBytes, ::System::Boolean shouldAppendSpaceToCRLF)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_ENCODEBYTES_1_OFFSET))(this, buffer, offset, count, dontDeferFinalBytes, shouldAppendSpaceToCRLF);
		}

		::System::IO::Stream* GetStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_GETSTREAM_OFFSET))(this);
		}

		::System::String* GetEncodedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_GETENCODEDSTRING_OFFSET))(this);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_FLUSH_OFFSET))(this);
		}

		::System::Void FlushInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_FLUSHINTERNAL_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
