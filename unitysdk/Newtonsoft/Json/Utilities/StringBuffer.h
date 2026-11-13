#pragma once
#include "unitysdk/unitysdk.h"
namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x3F98B20)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET UNITYSDK_OFFSET(0x3F98B10)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x3F98B30)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D619F0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x3F98AD0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET UNITYSDK_OFFSET(0x3F98B70)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x6C8DA0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3F98C00)
#define NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F98BF0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringBuffer_TypeDefinitionIndex = 9682;

	struct alignas(8) StringBuffer
	{
		::Il2CppArray<::System::Char>* _buffer; // 0x10
		::System::Int32 _position; // 0x18
		::System::Void _ctor(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Append(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_OFFSET))(this, a1, a2);
		}

		::System::Void Append_1(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_APPEND_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_CLEAR_OFFSET))(this, a1);
		}

		::System::Void EnsureSize(::Newtonsoft::Json::IArrayPool_1<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IArrayPool_1<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_ENSURESIZE_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Char>* get_InternalBuffer()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGBUFFER_GET_INTERNALBUFFER_OFFSET))(this);
		}

	};
}
