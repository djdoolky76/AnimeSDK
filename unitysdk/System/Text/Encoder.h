#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODER_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1E3A5600)
#define SYSTEM_TEXT_ENCODER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1E3A5750)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1E3A54D0)
#define SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1E3A5520)
#define SYSTEM_TEXT_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x1E3A5530)
#define SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET UNITYSDK_OFFSET(0x1E3A5420)
#define SYSTEM_TEXT_ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A54C0)

namespace System::Text
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 462;

	class Encoder : public ::System::Object
	{
	public:
		::System::Text::EncoderFallback* m_fallback; // 0x10
		::System::Text::EncoderFallbackBuffer* m_fallbackBuffer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER__CTOR_OFFSET))(this);
		}

		::System::Void SerializeEncoder(::System::Runtime::Serialization::SerializationInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET))(this, info);
		}

		::System::Text::EncoderFallbackBuffer* get_FallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET))(this);
		}

		::System::Boolean get_InternalHasFallbackBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_RESET_OFFSET))(this);
		}

		::System::Int32 GetByteCount_1(::PVOID chars, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTECOUNT_1_OFFSET))(this, chars, count, flush);
		}

		::System::Int32 GetBytes_1(::PVOID chars, ::System::Int32 charCount, ::PVOID bytes, ::System::Int32 byteCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTES_1_OFFSET))(this, chars, charCount, bytes, byteCount, flush);
		}
	};
}
