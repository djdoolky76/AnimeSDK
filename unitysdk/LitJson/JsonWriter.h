#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/Condition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"

namespace LitJson { class WriterContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::IO { class TextWriter; }
namespace System::Text { class StringBuilder; }

#define LITJSON_JSONWRITER_DOVALIDATION_OFFSET UNITYSDK_OFFSET(0x1EF0F1B0)
#define LITJSON_JSONWRITER_GET_ENSUREHEX_OFFSET UNITYSDK_OFFSET(0x1EF0EE60)
#define LITJSON_JSONWRITER_GET_INDENTVALUE_OFFSET UNITYSDK_OFFSET(0x1EF0EDF0)
#define LITJSON_JSONWRITER_GET_LOWERCASEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EF0EEB0)
#define LITJSON_JSONWRITER_GET_PRETTYPRINT_OFFSET UNITYSDK_OFFSET(0x1EF0EE20)
#define LITJSON_JSONWRITER_GET_TEXTWRITER_OFFSET UNITYSDK_OFFSET(0x1EF0EE80)
#define LITJSON_JSONWRITER_GET_TYPEPRINT_OFFSET UNITYSDK_OFFSET(0x1EF0EE40)
#define LITJSON_JSONWRITER_GET_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EF0EE90)
#define LITJSON_JSONWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x1EF0F4D0)
#define LITJSON_JSONWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x1EF0EFB0)
#define LITJSON_JSONWRITER_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x1EF0F390)
#define LITJSON_JSONWRITER_PUTNEWLINE_1_OFFSET UNITYSDK_OFFSET(0x1EF0F580)
#define LITJSON_JSONWRITER_PUTNEWLINE_OFFSET UNITYSDK_OFFSET(0x1EF0F570)
#define LITJSON_JSONWRITER_PUTSTRING_OFFSET UNITYSDK_OFFSET(0x1EF0F670)
#define LITJSON_JSONWRITER_PUT_OFFSET UNITYSDK_OFFSET(0x1EF0F4E0)
#define LITJSON_JSONWRITER_RESET_OFFSET UNITYSDK_OFFSET(0x1EF0FB40)
#define LITJSON_JSONWRITER_SET_ENSUREHEX_OFFSET UNITYSDK_OFFSET(0x1EF0EE70)
#define LITJSON_JSONWRITER_SET_INDENTVALUE_OFFSET UNITYSDK_OFFSET(0x1EF0EE00)
#define LITJSON_JSONWRITER_SET_LOWERCASEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EF0EEC0)
#define LITJSON_JSONWRITER_SET_PRETTYPRINT_OFFSET UNITYSDK_OFFSET(0x1EF0EE30)
#define LITJSON_JSONWRITER_SET_TYPEPRINT_OFFSET UNITYSDK_OFFSET(0x1EF0EE50)
#define LITJSON_JSONWRITER_SET_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EF0EEA0)
#define LITJSON_JSONWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF0FB20)
#define LITJSON_JSONWRITER_UNINDENT_OFFSET UNITYSDK_OFFSET(0x1EF0FB10)
#define LITJSON_JSONWRITER_WRITEARRAYEND_OFFSET UNITYSDK_OFFSET(0x1EF10610)
#define LITJSON_JSONWRITER_WRITEARRAYSTART_OFFSET UNITYSDK_OFFSET(0x1EF107D0)
#define LITJSON_JSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1EF10400)
#define LITJSON_JSONWRITER_WRITEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x1EF108E0)
#define LITJSON_JSONWRITER_WRITEOBJECTSTART_OFFSET UNITYSDK_OFFSET(0x1EF10AA0)
#define LITJSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1EF10BB0)
#define LITJSON_JSONWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1EF0FD00)
#define LITJSON_JSONWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1EF0FE30)
#define LITJSON_JSONWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1EF0FFB0)
#define LITJSON_JSONWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1EF100D0)
#define LITJSON_JSONWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1EF101F0)
#define LITJSON_JSONWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x1EF10310)
#define LITJSON_JSONWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x1EF104F0)
#define LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1EF0FC00)
#define LITJSON_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF0EED0)
#define LITJSON_JSONWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF0F090)
#define LITJSON_JSONWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EF0F140)
#define LITJSON_JSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0EEF0)

namespace LitJson
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 7921;

	class JsonWriter : public ::System::Object
	{
	public:
		static ::System::Globalization::NumberFormatInfo** StaticGet_number_format()
		{
			return (::System::Globalization::NumberFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(JsonWriter_TypeDefinitionIndex)->GetStaticField(0x7190);
		}
		::Il2CppArray<::System::Char>* hex_seq; // 0x10
		::LitJson::WriterContext* context; // 0x18
		::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>* ctx_stack; // 0x20
		::System::IO::TextWriter* writer; // 0x28
		::System::Text::StringBuilder* inst_string_builder; // 0x30
		::System::Int32 indent_value; // 0x38
		::System::Int32 indentation; // 0x3C
		::System::Boolean pretty_print; // 0x40
		::System::Boolean type_print; // 0x41
		::System::Boolean has_reached_end; // 0x42
		::System::Boolean ensure_hex; // 0x43
		::System::Boolean validate; // 0x44
		::System::Boolean lower_case_properties; // 0x45

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER__CTOR_1_OFFSET))(this, sb);
		}

		::System::Void _ctor_2(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER__CTOR_2_OFFSET))(this, writer);
		}

		::System::Int32 get_IndentValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_INDENTVALUE_OFFSET))(this);
		}

		::System::Void set_IndentValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_INDENTVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_PrettyPrint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_PRETTYPRINT_OFFSET))(this);
		}

		::System::Void set_PrettyPrint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_PRETTYPRINT_OFFSET))(this, value);
		}

		::System::Boolean get_TypePrint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_TYPEPRINT_OFFSET))(this);
		}

		::System::Void set_TypePrint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_TYPEPRINT_OFFSET))(this, value);
		}

		::System::Boolean get_EnsureHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_ENSUREHEX_OFFSET))(this);
		}

		::System::Void set_EnsureHex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_ENSUREHEX_OFFSET))(this, value);
		}

		::System::IO::TextWriter* get_TextWriter()
		{
			return ((::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_TEXTWRITER_OFFSET))(this);
		}

		::System::Boolean get_Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_VALIDATE_OFFSET))(this);
		}

		::System::Void set_Validate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_VALIDATE_OFFSET))(this, value);
		}

		::System::Boolean get_LowerCaseProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_GET_LOWERCASEPROPERTIES_OFFSET))(this);
		}

		::System::Void set_LowerCaseProperties(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_SET_LOWERCASEPROPERTIES_OFFSET))(this, value);
		}

		::System::Void DoValidation(::LitJson::Condition cond)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::Condition))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_DOVALIDATION_OFFSET))(this, cond);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_INIT_OFFSET))(this);
		}

		static ::System::Void IntToHex(::System::Int32 n, ::Il2CppArray<::System::Char>* hex)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_INTTOHEX_OFFSET))(n, hex);
		}

		::System::Void Indent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_INDENT_OFFSET))(this);
		}

		::System::Void Put(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_PUT_OFFSET))(this, str);
		}

		::System::Void PutNewline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_PUTNEWLINE_OFFSET))(this);
		}

		::System::Void PutNewline_1(::System::Boolean add_comma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_PUTNEWLINE_1_OFFSET))(this, add_comma);
		}

		::System::Void PutString(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_PUTSTRING_OFFSET))(this, str);
		}

		::System::Void Unindent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_UNINDENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_TOSTRING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_RESET_OFFSET))(this);
		}

		::System::Void Write(::System::Boolean boolean)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_OFFSET))(this, boolean);
		}

		::System::Void Write_1(::System::Decimal number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_1_OFFSET))(this, number);
		}

		::System::Void Write_2(::System::Double number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_2_OFFSET))(this, number);
		}

		::System::Void Write_3(::System::Single number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_3_OFFSET))(this, number);
		}

		::System::Void Write_4(::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_4_OFFSET))(this, number);
		}

		::System::Void Write_5(::System::Int64 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_5_OFFSET))(this, number);
		}

		::System::Void Write_6(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_6_OFFSET))(this, str);
		}

		::System::Void WriteComment(::System::String* comment, ::System::Boolean add_comma)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITECOMMENT_OFFSET))(this, comment, add_comma);
		}

		::System::Void Write_7(::System::UInt64 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITE_7_OFFSET))(this, number);
		}

		::System::Void WriteArrayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITEARRAYEND_OFFSET))(this);
		}

		::System::Void WriteArrayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITEARRAYSTART_OFFSET))(this);
		}

		::System::Void WriteObjectEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITEOBJECTEND_OFFSET))(this);
		}

		::System::Void WriteObjectStart(::System::Boolean add_comma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITEOBJECTSTART_OFFSET))(this, add_comma);
		}

		::System::Void WritePropertyName(::System::String* property_name, ::System::Boolean add_comma)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, property_name, add_comma);
		}
	};
}
