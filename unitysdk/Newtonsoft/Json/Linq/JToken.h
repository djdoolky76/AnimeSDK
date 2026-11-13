#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Newtonsoft/Json/Linq/JEnumerable_1.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"
namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1840F5C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1840FA70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET UNITYSDK_OFFSET(0x18407E60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1840CE30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x18407CD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1840F9F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_1_OFFSET UNITYSDK_OFFSET(0x18407710)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x18408270)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1840CF20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1840D260)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET UNITYSDK_OFFSET(0x18408360)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x18407D60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18407CE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET UNITYSDK_OFFSET(0x18407DE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x184077C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x184076E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET UNITYSDK_OFFSET(0x18407800)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x184077E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x18407700)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET UNITYSDK_OFFSET(0x1840F520)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1840F8D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1840F920)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x1840F890)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x18409AB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x18409BF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x18409D30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x18409E70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET UNITYSDK_OFFSET(0x18409FB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET UNITYSDK_OFFSET(0x1840A0F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET UNITYSDK_OFFSET(0x1840A2F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET UNITYSDK_OFFSET(0x1840A4F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET UNITYSDK_OFFSET(0x1840A6F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET UNITYSDK_OFFSET(0x1840A8E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x184088C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET UNITYSDK_OFFSET(0x1840AAD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET UNITYSDK_OFFSET(0x1840AC50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET UNITYSDK_OFFSET(0x1840AE60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET UNITYSDK_OFFSET(0x1840B060)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET UNITYSDK_OFFSET(0x1840B1B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET UNITYSDK_OFFSET(0x1840B3B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET UNITYSDK_OFFSET(0x1840B5C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET UNITYSDK_OFFSET(0x1840B700)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET UNITYSDK_OFFSET(0x1840B840)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET UNITYSDK_OFFSET(0x1840BAD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x18408AD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET UNITYSDK_OFFSET(0x1840BC10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET UNITYSDK_OFFSET(0x1840BD50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET UNITYSDK_OFFSET(0x1840BF50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET UNITYSDK_OFFSET(0x1840C220)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET UNITYSDK_OFFSET(0x1840C3B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET UNITYSDK_OFFSET(0x1840C5F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x18408CC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x18408E00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x18409030)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x18409340)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x18409560)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x18409770)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x18409970)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x18408780)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1840C940)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1840CA10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1840CAE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1840CBC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1840C870)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1840F140)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET UNITYSDK_OFFSET(0x1840F110)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET UNITYSDK_OFFSET(0x1840E5E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET UNITYSDK_OFFSET(0x1840E5B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET UNITYSDK_OFFSET(0x18407EC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET UNITYSDK_OFFSET(0x18407FA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET UNITYSDK_OFFSET(0x1840F560)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1840ECD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x184077D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x184076F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x184077F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1840CD70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1840CC60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1840F970)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1840D2A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1840E2E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x184080C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18408090)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x18408540)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken_TypeDefinitionIndex = 9788;

	class JToken : public ::System::Object
	{
	public:
		::System::Object* _annotations; // 0x10
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x18
		::Newtonsoft::Json::Linq::JToken* _previous; // 0x20
		::Newtonsoft::Json::Linq::JToken* _next; // 0x28
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_NumberTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A240);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_CharTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A248);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_TimeSpanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A250);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_StringTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A258);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BytesTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A260);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BooleanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A268);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_GuidTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A270);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_UriTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A278);
		}

		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_DateTimeTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)UnitySDK::FromName("Newtonsoft.Json.Linq", "JToken")->GetStaticField(0x2A280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CCTOR_OFFSET))();
		}

		::Newtonsoft::Json::Linq::JContainer* get_Parent()
		{
			return ((::Newtonsoft::Json::Linq::JContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Linq::JContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* get_Root()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET))(this);
		}

		static ::System::Boolean DeepEquals_1(::Newtonsoft::Json::Linq::JToken* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_1_OFFSET))(a1, a2);
		}

		::Newtonsoft::Json::Linq::JToken* get_Next()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* get_Previous()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Void set_Previous(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children()
		{
			return ((::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET))(this);
		}

		::System::Void Replace(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::Newtonsoft::Json::Formatting a1, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* a2)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET))(a1);
		}

		static ::System::String* GetType(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET))(a1);
		}

		static ::System::Boolean ValidateToken(::Newtonsoft::Json::Linq::JToken* a1, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean op_Explicit(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::DateTimeOffset op_Explicit_1(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::DateTimeOffset(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Boolean> op_Explicit_2(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET))(a1);
		}

		static ::System::Int64 op_Explicit_3(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::DateTime> op_Explicit_4(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::DateTimeOffset> op_Explicit_5(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Decimal> op_Explicit_6(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Double> op_Explicit_7(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Char> op_Explicit_8(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET))(a1);
		}

		static ::System::Int32 op_Explicit_9(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET))(a1);
		}

		static ::System::Int16 op_Explicit_10(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET))(a1);
		}

		static ::System::UInt16 op_Explicit_11(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::UInt16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET))(a1);
		}

		static ::System::Char op_Explicit_12(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Char(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET))(a1);
		}

		static ::System::Byte op_Explicit_13(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Byte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET))(a1);
		}

		static ::System::SByte op_Explicit_14(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::SByte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int32> op_Explicit_15(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int16> op_Explicit_16(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::UInt16> op_Explicit_17(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::UInt16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Byte> op_Explicit_18(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::SByte> op_Explicit_19(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET))(a1);
		}

		static ::System::DateTime op_Explicit_20(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::DateTime(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Int64> op_Explicit_21(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Single> op_Explicit_22(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET))(a1);
		}

		static ::System::Decimal op_Explicit_23(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Decimal(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::UInt32> op_Explicit_24(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::UInt64> op_Explicit_25(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET))(a1);
		}

		static ::System::Double op_Explicit_26(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Double(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_27(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Single(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET))(a1);
		}

		static ::System::String* op_Explicit_28(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit_29(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::UInt32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET))(a1);
		}

		static ::System::UInt64 op_Explicit_30(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::UInt64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET))(a1);
		}

		static ::System::Guid op_Explicit_31(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Guid(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Guid> op_Explicit_32(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET))(a1);
		}

		static ::System::TimeSpan op_Explicit_33(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::TimeSpan(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::TimeSpan> op_Explicit_34(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET))(a1);
		}

		static ::System::Uri* op_Explicit_35(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Uri*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Boolean a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_1(::System::Int32 a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_2(::System::Nullable_1<::System::Single> a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_3(::System::Single a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_4(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_4_OFFSET))(a1);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonReader* CreateReader()
		{
			return ((::Newtonsoft::Json::JsonReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* a1, ::Newtonsoft::Json::JsonSerializer* a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET))(a1);
		}

		::System::Object* ToObject_1(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET))(this, a1);
		}

		::System::Object* ToObject_2(::System::Type* a1, ::Newtonsoft::Json::JsonSerializer* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_2_OFFSET))(this, a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom_1(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JToken* Parse(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* Parse_1(::System::String* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_1_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET))(a1, a2);
		}

		::System::Void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SetLineInfo_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Newtonsoft_Json_IJsonLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* DeepClone()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET))(this, a1);
		}

	};
}
