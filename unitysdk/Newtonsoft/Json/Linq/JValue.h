#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JToken.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }

#define NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1FC07E00)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET UNITYSDK_OFFSET(0x1FC07AD0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1FC08CE0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FC07410)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x1FC07EB0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET UNITYSDK_OFFSET(0x1FC07FD0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1FC07F40)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1FC08060)
#define NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1FC07320)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC089E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC08990)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC08950)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC08A80)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1FC080F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1FC07070)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x1FC07400)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1FC08120)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1FC08130)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1FC08140)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1FC08C60)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1FC08D00)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1FC08DF0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1FC08F10)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1FC08E50)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1FC092E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1FC09270)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1FC09210)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x1FC08F70)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1FC09030)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x1FC090F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1FC08EB0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1FC091B0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1FC09340)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1FC08FD0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1FC09090)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1FC09150)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1FC08AE0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1FC08C50)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1FC08B10)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC08AB0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET UNITYSDK_OFFSET(0x1FC073B0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC081C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1FC06D40)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1FC06DE0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1FC06E40)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1FC06EC0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_14_OFFSET UNITYSDK_OFFSET(0x1FC06F80)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_15_OFFSET UNITYSDK_OFFSET(0x1FC07000)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC06830)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FC068A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FC06940)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1FC069E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1FC06A60)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1FC06B00)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1FC06B80)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1FC06C20)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1FC06CA0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC067D0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JValue_TypeDefinitionIndex = 7206;

	class JValue : public ::Newtonsoft::Json::Linq::JToken
	{
	public:
		::System::Object* _value; // 0x30
		::Newtonsoft::Json::Linq::JTokenType _valueType; // 0x38

		::System::Void _ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JTokenType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET))(this, value, type);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_6_OFFSET))(this, value);
		}

		::System::Void _ctor_7(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_7_OFFSET))(this, value);
		}

		::System::Void _ctor_8(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_8_OFFSET))(this, value);
		}

		::System::Void _ctor_9(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_9_OFFSET))(this, value);
		}

		::System::Void _ctor_10(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_10_OFFSET))(this, value);
		}

		::System::Void _ctor_11(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_11_OFFSET))(this, value);
		}

		::System::Void _ctor_12(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_12_OFFSET))(this, value);
		}

		::System::Void _ctor_13(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_13_OFFSET))(this, value);
		}

		::System::Void _ctor_14(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_14_OFFSET))(this, value);
		}

		::System::Void _ctor_15(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_15_OFFSET))(this, value);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET))(this, node);
		}

		::System::Boolean get_HasValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET))(this);
		}

		static ::System::Int32 Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JTokenType, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET))(valueType, objA, objB);
		}

		static ::System::Int32 CompareFloat(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET))(objA, objB);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateComment(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateString(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATESTRING_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateNull()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateUndefined()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::System::Object* value)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET))(current, value);
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET))(current);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET))(this, writer, converters);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET))(v1, v2);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Linq::JValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET))(this, formatProvider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_3_OFFSET))(this, format, formatProvider);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo(::Newtonsoft::Json::Linq::JValue* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPARETO_OFFSET))(this, obj);
		}

		::System::TypeCode System_IConvertible_GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, conversionType, provider);
		}
	};
}
