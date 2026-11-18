#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/FunctionId.h"
#include "unitysdk/System/Data/Tokens.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Data { class DataTable; }
namespace System::Data { class ExpressionNode; }
namespace System::Data { class OperatorInfo; }

#define SYSTEM_DATA_EXPRESSIONPARSER_BUILDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1EFE1B60)
#define SYSTEM_DATA_EXPRESSIONPARSER_CHECKTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFE1E30)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x1EFE2DC0)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISALPHA_OFFSET UNITYSDK_OFFSET(0x1EFE2E60)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1EFE2A90)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1EFE2E80)
#define SYSTEM_DATA_EXPRESSIONPARSER_LOADEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1EFDF9A0)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPEEK_OFFSET UNITYSDK_OFFSET(0x1EFE1F70)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPOP_OFFSET UNITYSDK_OFFSET(0x1EFE1FC0)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPUSH_OFFSET UNITYSDK_OFFSET(0x1EFE1E90)
#define SYSTEM_DATA_EXPRESSIONPARSER_PARSEAGGREGATEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1EFE2000)
#define SYSTEM_DATA_EXPRESSIONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1EFDFAF0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANBINARYCONSTANT_OFFSET UNITYSDK_OFFSET(0x1EFE2A80)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANDATE_OFFSET UNITYSDK_OFFSET(0x1EFE2550)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_1_OFFSET UNITYSDK_OFFSET(0x1EFE2730)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x1EFE2DF0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNUMERIC_OFFSET UNITYSDK_OFFSET(0x1EFE28E0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANRESERVED_OFFSET UNITYSDK_OFFSET(0x1EFE2AA0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANSTRING_OFFSET UNITYSDK_OFFSET(0x1EFE2630)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFE1DD0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANWHITE_OFFSET UNITYSDK_OFFSET(0x1EFE24E0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCAN_OFFSET UNITYSDK_OFFSET(0x1EFE1490)
#define SYSTEM_DATA_EXPRESSIONPARSER_STARTSCAN_OFFSET UNITYSDK_OFFSET(0x1EFDFA60)
#define SYSTEM_DATA_EXPRESSIONPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE2E90)
#define SYSTEM_DATA_EXPRESSIONPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDF920)

namespace System::Data
{
	inline static constexpr unsigned int ExpressionParser_TypeDefinitionIndex = 37297;

	class ExpressionParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_s_reservedwords()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionParser_TypeDefinitionIndex)->GetStaticField(0x2BE60);
		}
		::System::Data::DataTable* _table; // 0x10
		::Il2CppArray<::System::Char>* _text; // 0x18
		::Il2CppArray<::System::Data::OperatorInfo*>* _ops; // 0x20
		::System::Data::ExpressionNode* _expression; // 0x28
		::Il2CppArray<::System::Data::ExpressionNode*>* _nodeStack; // 0x30
		::System::Int32 _topOperator; // 0x38
		::System::Char _escape; // 0x3C
		::System::Byte _padding0[0x2];
		::System::Int32 _op; // 0x40
		::System::Char _decimalSeparator; // 0x44
		::System::Char _exponentU; // 0x46
		::System::Int32 _topNode; // 0x48
		::System::Int32 _start; // 0x4C
		::System::Int32 _prevOperand; // 0x50
		::System::Char _listSeparator; // 0x54
		::System::Char _exponentL; // 0x56
		::System::Int32 _pos; // 0x58
		::System::Data::Tokens _token; // 0x5C

		::System::Void _ctor(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER__CTOR_OFFSET))(this, table);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER__CCTOR_OFFSET))();
		}

		::System::Void LoadExpression(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_LOADEXPRESSION_OFFSET))(this, data);
		}

		::System::Void StartScan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_STARTSCAN_OFFSET))(this);
		}

		::System::Data::ExpressionNode* Parse()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_PARSE_OFFSET))(this);
		}

		::System::Data::ExpressionNode* ParseAggregateArgument(::System::Data::FunctionId aggregate)
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID, ::System::Data::FunctionId))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_PARSEAGGREGATEARGUMENT_OFFSET))(this, aggregate);
		}

		::System::Data::ExpressionNode* NodePop()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPOP_OFFSET))(this);
		}

		::System::Data::ExpressionNode* NodePeek()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPEEK_OFFSET))(this);
		}

		::System::Void NodePush(::System::Data::ExpressionNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPUSH_OFFSET))(this, node);
		}

		::System::Void BuildExpression(::System::Int32 pri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_BUILDEXPRESSION_OFFSET))(this, pri);
		}

		::System::Void CheckToken(::System::Data::Tokens token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Tokens))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_CHECKTOKEN_OFFSET))(this, token);
		}

		::System::Data::Tokens Scan()
		{
			return ((::System::Data::Tokens(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCAN_OFFSET))(this);
		}

		::System::Void ScanNumeric()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNUMERIC_OFFSET))(this);
		}

		::System::Void ScanName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET))(this);
		}

		::System::Void ScanName_1(::System::Char chEnd, ::System::Char esc, ::System::String* charsToEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_1_OFFSET))(this, chEnd, esc, charsToEscape);
		}

		::System::Void ScanDate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANDATE_OFFSET))(this);
		}

		::System::Void ScanBinaryConstant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANBINARYCONSTANT_OFFSET))(this);
		}

		::System::Void ScanReserved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANRESERVED_OFFSET))(this);
		}

		::System::Void ScanString(::System::Char escape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANSTRING_OFFSET))(this, escape);
		}

		::System::Void ScanToken(::System::Data::Tokens token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Tokens))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANTOKEN_OFFSET))(this, token);
		}

		::System::Void ScanWhite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANWHITE_OFFSET))(this);
		}

		::System::Boolean IsWhiteSpace(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISWHITESPACE_OFFSET))(this, ch);
		}

		::System::Boolean IsAlphaNumeric(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISALPHANUMERIC_OFFSET))(this, ch);
		}

		::System::Boolean IsDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISDIGIT_OFFSET))(this, ch);
		}

		::System::Boolean IsAlpha(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISALPHA_OFFSET))(this, ch);
		}
	};
}
