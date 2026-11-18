#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_DECODERNLS_CLEARMUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x1E69A110)
#define SYSTEM_TEXT_DECODERNLS_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1E699F30)
#define SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x1E699C70)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1E699650)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1E6997C0)
#define SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1E699630)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1E6998E0)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1E699B30)
#define SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1E6998B0)
#define SYSTEM_TEXT_DECODERNLS_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x1E69A100)
#define SYSTEM_TEXT_DECODERNLS_RESET_OFFSET UNITYSDK_OFFSET(0x1E699610)
#define SYSTEM_TEXT_DECODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E6994E0)
#define SYSTEM_TEXT_DECODERNLS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6995C0)
#define SYSTEM_TEXT_DECODERNLS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E6995F0)
#define SYSTEM_TEXT_DECODERNLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E699460)

namespace System::Text
{
	inline static constexpr unsigned int DecoderNLS_TypeDefinitionIndex = 459;

	class DecoderNLS : public ::System::Text::Decoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_throwOnOverflow; // 0x28
		::System::Boolean m_mustFlush; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 m_bytesUsed; // 0x2C

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS__CTOR_1_OFFSET))(this, encoding);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS__CTOR_2_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_RESET_OFFSET))(this);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_1_OFFSET))(this, bytes, index, count, flush);
		}

		::System::Int32 GetCharCount_2(::PVOID bytes, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARCOUNT_2_OFFSET))(this, bytes, count, flush);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_1_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, flush);
		}

		::System::Int32 GetChars_2(::PVOID bytes, ::System::Int32 byteCount, ::PVOID chars, ::System::Int32 charCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, flush);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CONVERT_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
		}

		::System::Void Convert_1(::PVOID bytes, ::System::Int32 byteCount, ::PVOID chars, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CONVERT_1_OFFSET))(this, bytes, byteCount, chars, charCount, flush, bytesUsed, charsUsed, completed);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_GET_HASSTATE_OFFSET))(this);
		}

		::System::Void ClearMustFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERNLS_CLEARMUSTFLUSH_OFFSET))(this);
		}
	};
}
