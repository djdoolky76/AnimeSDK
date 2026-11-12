#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SharpJson/Lexer_Token.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SHARPJSON_LEXER_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF41BF0)
#define SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x1FF43620)
#define SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x1FF43520)
#define SHARPJSON_LEXER_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x1FF43430)
#define SHARPJSON_LEXER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1FF43440)
#define SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1FF43460)
#define SHARPJSON_LEXER_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x1FF428B0)
#define SHARPJSON_LEXER_NEXTTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1FF436A0)
#define SHARPJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1FF42830)
#define SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET UNITYSDK_OFFSET(0x1FF433D0)
#define SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x1FF43370)
#define SHARPJSON_LEXER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1FF429D0)
#define SHARPJSON_LEXER_RESET_OFFSET UNITYSDK_OFFSET(0x1FF43480)
#define SHARPJSON_LEXER_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1FF43450)
#define SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x1FF43470)
#define SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1FF434A0)

namespace SharpJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 40519;

	class Lexer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* stringBuffer; // 0x10
		::Il2CppArray<::System::Char>* json; // 0x18
		::System::Int32 index; // 0x20
		::System::Int32 _lineNumber_k__BackingField; // 0x24
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x28
		::System::Boolean success; // 0x29
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_hasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_HASERROR_OFFSET))(this);
		}

		::System::Int32 get_lineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void set_lineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_LINENUMBER_OFFSET))(this, a1);
		}

		::System::Boolean get_parseNumbersAsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET))(this);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_RESET_OFFSET))(this);
		}

		::System::String* ParseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSESTRING_OFFSET))(this);
		}

		::System::String* GetNumberString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET))(this);
		}

		::System::Single ParseFloatNumber()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET))(this);
		}

		::System::Double ParseDoubleNumber()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET))(this);
		}

		::System::Int32 GetLastIndexOfNumber(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET))(this, a1);
		}

		::System::Void SkipWhiteSpaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET))(this);
		}

		::SharpJson::Lexer_Token LookAhead()
		{
			return ((::SharpJson::Lexer_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_LOOKAHEAD_OFFSET))(this);
		}

		::SharpJson::Lexer_Token NextToken()
		{
			return ((::SharpJson::Lexer_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_OFFSET))(this);
		}

		static ::SharpJson::Lexer_Token NextToken_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::SharpJson::Lexer_Token(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_1_OFFSET))(a1, a2);
		}

	};
}
