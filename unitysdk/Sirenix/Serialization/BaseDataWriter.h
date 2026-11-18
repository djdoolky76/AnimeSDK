#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReaderWriter.h"

namespace Sirenix::Serialization { class SerializationContext; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BASEDATAWRITER_FLUSHTOSTREAM_OFFSET UNITYSDK_OFFSET(0x1FCD05D0)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1FCCF970)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1FCD04B0)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x1FCD0600)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1FCD05C0)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1FCD04C0)
#define SIRENIX_SERIALIZATION_BASEDATAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0420)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataWriter_TypeDefinitionIndex = 7425;

	class BaseDataWriter : public ::Sirenix::Serialization::BaseDataReaderWriter
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::Sirenix::Serialization::SerializationContext* context; // 0x30

		::System::Void _ctor(::System::IO::Stream* stream, ::Sirenix::Serialization::SerializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER__CTOR_OFFSET))(this, stream, context);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_STREAM_OFFSET))(this, value);
		}

		::Sirenix::Serialization::SerializationContext* get_Context()
		{
			return ((::Sirenix::Serialization::SerializationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Sirenix::Serialization::SerializationContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void FlushToStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_FLUSHTOSTREAM_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAWRITER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}
	};
}
