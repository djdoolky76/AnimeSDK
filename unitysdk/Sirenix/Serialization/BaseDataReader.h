#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDataReaderWriter.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace System { class Type; }
namespace System::IO { class Stream; }

#define SIRENIX_SERIALIZATION_BASEDATAREADER_ENTERNODE_1_OFFSET UNITYSDK_OFFSET(0x200204E0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x20020430)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEDEPTH_OFFSET UNITYSDK_OFFSET(0x200202C0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEID_OFFSET UNITYSDK_OFFSET(0x20020220)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODENAME_OFFSET UNITYSDK_OFFSET(0x200202D0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x20020370)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET UNITYSDK_OFFSET(0x200210C0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x200204D0)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x20020380)
#define SIRENIX_SERIALIZATION_BASEDATAREADER_SKIPENTRY_OFFSET UNITYSDK_OFFSET(0x20020510)
#define SIRENIX_SERIALIZATION_BASEDATAREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x20020190)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataReader_TypeDefinitionIndex = 7423;

	class BaseDataReader : public ::Sirenix::Serialization::BaseDataReaderWriter
	{
	public:
		::Sirenix::Serialization::DeserializationContext* context; // 0x28
		::System::IO::Stream* stream; // 0x30

		::System::Void _ctor(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER__CTOR_OFFSET))(this, stream, context);
		}

		::System::Int32 get_CurrentNodeId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEID_OFFSET))(this);
		}

		::System::Int32 get_CurrentNodeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODEDEPTH_OFFSET))(this);
		}

		::Sirenix::Serialization::BufferedString get_CurrentNodeName()
		{
			return ((::Sirenix::Serialization::BufferedString(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CURRENTNODENAME_OFFSET))(this);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SET_STREAM_OFFSET))(this, value);
		}

		::Sirenix::Serialization::DeserializationContext* get_Context()
		{
			return ((::Sirenix::Serialization::DeserializationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Sirenix::Serialization::DeserializationContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Boolean EnterNode_1(::System::Type*& type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_ENTERNODE_1_OFFSET))(this, type);
		}

		::System::Void SkipEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_SKIPENTRY_OFFSET))(this);
		}

		::System::Void PrepareNewSerializationSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADER_PREPARENEWSERIALIZATIONSESSION_OFFSET))(this);
		}
	};
}
