#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Net { class LazyAsyncResult; }
namespace System::Net::Mime { class BaseWriter; }

#define SYSTEM_NET_MIME_MIMEPART_MIMEPARTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE85C0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimePart_MimePartContext_TypeDefinitionIndex = 3623;

	class MimePart_MimePartContext : public ::System::Object
	{
	public:
		::System::IO::Stream* outputStream; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::System::Net::Mime::BaseWriter* writer; // 0x20
		::System::Net::LazyAsyncResult* result; // 0x28
		::System::Boolean completedSynchronously; // 0x30
		::System::Boolean completed; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 bytesLeft; // 0x34

		::System::Void _ctor(::System::Net::Mime::BaseWriter* writer, ::System::Net::LazyAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::BaseWriter*, ::System::Net::LazyAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MIMEPART_MIMEPARTCONTEXT__CTOR_OFFSET))(this, writer, result);
		}
	};
}
