#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/Type.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlexBuffers { class IByteArray; }
namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define FLEXBUFFERS_FLXVALUE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x928420)
#define FLEXBUFFERS_FLXVALUE_CONVERTUTF16TOUTF8_OFFSET UNITYSDK_OFFSET(0x1ECD5590)
#define FLEXBUFFERS_FLXVALUE_FROMBYTES_1_OFFSET UNITYSDK_OFFSET(0x1ECD3900)
#define FLEXBUFFERS_FLXVALUE_FROMBYTES_2_OFFSET UNITYSDK_OFFSET(0x1ECD3500)
#define FLEXBUFFERS_FLXVALUE_FROMBYTES_OFFSET UNITYSDK_OFFSET(0x1ECD34A0)
#define FLEXBUFFERS_FLXVALUE_GET_ASBLOB_OFFSET UNITYSDK_OFFSET(0x928510)
#define FLEXBUFFERS_FLXVALUE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x928400)
#define FLEXBUFFERS_FLXVALUE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9283F0)
#define FLEXBUFFERS_FLXVALUE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x9283D0)
#define FLEXBUFFERS_FLXVALUE_GET_ASMAP_OFFSET UNITYSDK_OFFSET(0x9284F0)
#define FLEXBUFFERS_FLXVALUE_GET_ASSTRING_OFFSET UNITYSDK_OFFSET(0x928410)
#define FLEXBUFFERS_FLXVALUE_GET_ASULONG_OFFSET UNITYSDK_OFFSET(0x9283E0)
#define FLEXBUFFERS_FLXVALUE_GET_ASVECTOR_OFFSET UNITYSDK_OFFSET(0x9284D0)
#define FLEXBUFFERS_FLXVALUE_GET_BUFFEROFFSET_OFFSET UNITYSDK_OFFSET(0x363D60)
#define FLEXBUFFERS_FLXVALUE_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x282350)
#define FLEXBUFFERS_FLXVALUE_GET_INDIRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x928540)
#define FLEXBUFFERS_FLXVALUE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9283C0)
#define FLEXBUFFERS_FLXVALUE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x928480)
#define FLEXBUFFERS_FLXVALUE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x928430)
#define FLEXBUFFERS_FLXVALUE_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x363D60)
#define FLEXBUFFERS_FLXVALUE_GET_TOJSON_OFFSET UNITYSDK_OFFSET(0x928520)
#define FLEXBUFFERS_FLXVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x6FAF90)
#define FLEXBUFFERS_FLXVALUE_TOPRETTYJSON_OFFSET UNITYSDK_OFFSET(0x928530)
#define FLEXBUFFERS_FLXVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9283A0)
#define FLEXBUFFERS_FLXVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x928370)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlxValue_TypeDefinitionIndex = 6762;

	struct alignas(8) FlxValue
	{
		::FlexBuffers::IByteArray* _buffer; // 0x10
		::System::Int32 _offset; // 0x18
		::System::Byte _parentWidth; // 0x1C
		::System::Byte _byteWidth; // 0x1D
		::FlexBuffers::Type _type; // 0x1E

		::System::Void _ctor(::FlexBuffers::IByteArray* buffer, ::System::Int32 offset, ::System::Byte parentWidth, ::System::Byte packedType)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::IByteArray*, ::System::Int32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE__CTOR_OFFSET))(this, buffer, offset, parentWidth, packedType);
		}

		::System::Void _ctor_1(::FlexBuffers::IByteArray* buffer, ::System::Int32 offset, ::System::Byte parentWidth, ::System::Byte byteWidth, ::FlexBuffers::Type type)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::IByteArray*, ::System::Int32, ::System::Byte, ::System::Byte, ::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE__CTOR_1_OFFSET))(this, buffer, offset, parentWidth, byteWidth, type);
		}

		/*
		static ::FlexBuffers::FlxValue FromBytes(::Il2CppArray<::System::Byte>* _bytes)
		{
			return ((::FlexBuffers::FlxValue(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_FROMBYTES_OFFSET))(_bytes);
		}
		*/

		/*
		static ::FlexBuffers::FlxValue FromBytes_1(::UnityEngine::TextAsset* _bytes)
		{
			return ((::FlexBuffers::FlxValue(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_FROMBYTES_1_OFFSET))(_bytes);
		}
		*/

		/*
		static ::FlexBuffers::FlxValue FromBytes_2(::FlexBuffers::IByteArray* bytes)
		{
			return ((::FlexBuffers::FlxValue(*)(::FlexBuffers::IByteArray*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_FROMBYTES_2_OFFSET))(bytes);
		}
		*/

		::FlexBuffers::Type get_ValueType()
		{
			return ((::FlexBuffers::Type(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_BufferOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_BUFFEROFFSET_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ISNULL_OFFSET))(this);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASLONG_OFFSET))(this);
		}

		::System::UInt64 get_AsULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASULONG_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASBOOL_OFFSET))(this);
		}

		::System::String* get_AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASSTRING_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_COMPARETO_OFFSET))(this, str);
		}

		static ::System::Void ConvertUtf16ToUtf8(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> utf16Chars, ::System::Span_1_9011FAD97750D224<::System::Byte>& utf8Span)
		{
			return ((::System::Void(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::Span_1_9011FAD97750D224<::System::Byte>&))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_CONVERTUTF16TOUTF8_OFFSET))(utf16Chars, utf8Span);
		}

		/*
		::FlexBuffers::FlxValue get_Item(::System::Int32 index)
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ITEM_OFFSET))(this, index);
		}
		*/

		/*
		::FlexBuffers::FlxValue get_Item_1(::System::String* key)
		{
			return ((::FlexBuffers::FlxValue(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ITEM_1_OFFSET))(this, key);
		}
		*/

		/*
		::FlexBuffers::FlxVector get_AsVector()
		{
			return ((::FlexBuffers::FlxVector(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASVECTOR_OFFSET))(this);
		}
		*/

		/*
		::FlexBuffers::FlxMap get_AsMap()
		{
			return ((::FlexBuffers::FlxMap(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASMAP_OFFSET))(this);
		}
		*/

		::Il2CppArray<::System::Byte>* get_AsBlob()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_ASBLOB_OFFSET))(this);
		}

		::System::String* get_ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_TOJSON_OFFSET))(this);
		}

		::System::String* ToPrettyJson(::System::String* left, ::System::Boolean childrenOnly)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_TOPRETTYJSON_OFFSET))(this, left, childrenOnly);
		}

		::FlexBuffers::IByteArray* get_Buffer()
		{
			return ((::FlexBuffers::IByteArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_OFFSET_OFFSET))(this);
		}

		::System::Int32 get_IndirectOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLXVALUE_GET_INDIRECTOFFSET_OFFSET))(this);
		}
	};
}
