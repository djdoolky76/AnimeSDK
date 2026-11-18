#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AsyncOperation; }
namespace System::IO { class Stream; }
namespace System::Net { class CompletionDelegate; }
namespace System::Net { class WebClient; }
namespace System::Net { class WebClient_ProgressData; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DF12080)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_GET_ASYNC_OFFSET UNITYSDK_OFFSET(0x1DF11D30)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_GET_FILEUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DF11D20)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_SETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1DF11D40)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1DF11E90)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF11C50)

namespace System::Net
{
	inline static constexpr unsigned int WebClient_UploadBitsState_TypeDefinitionIndex = 3443;

	class WebClient_UploadBitsState : public ::System::Object
	{
	public:
		::System::Net::CompletionDelegate* UploadCompletionDelegate; // 0x10
		::Il2CppArray<::System::Byte>* Header; // 0x18
		::System::Net::WebRequest* Request; // 0x20
		::System::Net::WebClient* WebClient; // 0x28
		::Il2CppArray<::System::Byte>* InnerBuffer; // 0x30
		::System::Net::CompletionDelegate* DownloadCompletionDelegate; // 0x38
		::System::ComponentModel::AsyncOperation* AsyncOp; // 0x40
		::System::IO::Stream* WriteStream; // 0x48
		::System::Net::WebClient_ProgressData* Progress; // 0x50
		::Il2CppArray<::System::Byte>* Footer; // 0x58
		::System::IO::Stream* ReadStream; // 0x60
		::System::Int32 m_BufferWritePosition; // 0x68
		::System::Int32 m_ChunkSize; // 0x6C

		::System::Void _ctor(::System::Net::WebRequest* request, ::System::IO::Stream* readStream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 chunkSize, ::Il2CppArray<::System::Byte>* header, ::Il2CppArray<::System::Byte>* footer, ::System::Net::CompletionDelegate* uploadCompletionDelegate, ::System::Net::CompletionDelegate* downloadCompletionDelegate, ::System::ComponentModel::AsyncOperation* asyncOp, ::System::Net::WebClient_ProgressData* progress, ::System::Net::WebClient* webClient)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebRequest*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::CompletionDelegate*, ::System::Net::CompletionDelegate*, ::System::ComponentModel::AsyncOperation*, ::System::Net::WebClient_ProgressData*, ::System::Net::WebClient*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE__CTOR_OFFSET))(this, request, readStream, buffer, chunkSize, header, footer, uploadCompletionDelegate, downloadCompletionDelegate, asyncOp, progress, webClient);
		}

		::System::Boolean get_FileUpload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_GET_FILEUPLOAD_OFFSET))(this);
		}

		::System::Boolean get_Async()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_GET_ASYNC_OFFSET))(this);
		}

		::System::Void SetRequestStream(::System::IO::Stream* writeStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_SETREQUESTSTREAM_OFFSET))(this, writeStream);
		}

		::System::Boolean WriteBytes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_WRITEBYTES_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSSTATE_CLOSE_OFFSET))(this);
		}
	};
}
