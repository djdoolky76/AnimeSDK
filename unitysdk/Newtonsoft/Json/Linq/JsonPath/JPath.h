#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/QueryOperator.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq::JsonPath { class PathFilter; }
namespace Newtonsoft::Json::Linq::JsonPath { class QueryExpression; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1F719BA0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET UNITYSDK_OFFSET(0x1F71A740)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1F71DC30)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F71DC20)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET UNITYSDK_OFFSET(0x1F719790)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET UNITYSDK_OFFSET(0x1F71D730)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET UNITYSDK_OFFSET(0x1F71AFA0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F71BA90)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET UNITYSDK_OFFSET(0x1F71A500)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET UNITYSDK_OFFSET(0x1F7198B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET UNITYSDK_OFFSET(0x1F71C840)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET UNITYSDK_OFFSET(0x1F719C40)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET UNITYSDK_OFFSET(0x1F71AC00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET UNITYSDK_OFFSET(0x1F71A7C0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1F71CF00)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1F71D860)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_SET_FILTERS_OFFSET UNITYSDK_OFFSET(0x1F7197A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7197B0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int JPath_TypeDefinitionIndex = 7220;

	class JPath : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Filters_k__BackingField; // 0x10
		::System::String* _expression; // 0x18
		::System::Int32 _currentIndex; // 0x20

		::System::Void _ctor(::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH__CTOR_OFFSET))(this, expression);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Filters()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_GET_FILTERS_OFFSET))(this);
		}

		::System::Void set_Filters(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_SET_FILTERS_OFFSET))(this, value);
		}

		::System::Void ParseMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEMAIN_OFFSET))(this);
		}

		::System::Boolean ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::System::Int32 currentPartStartIndex, ::System::Boolean query)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEPATH_OFFSET))(this, filters, currentPartStartIndex, query);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseIndexer(::System::Char indexerOpenChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEINDEXER_OFFSET))(this, indexerOpenChar);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseArrayIndexer(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEARRAYINDEXER_OFFSET))(this, indexerCloseChar);
		}

		::System::Void EatWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EATWHITESPACE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuery(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUERY_OFFSET))(this, indexerCloseChar);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* ParseExpression()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEEXPRESSION_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEVALUE_OFFSET))(this);
		}

		::System::String* ReadQuotedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_READQUOTEDSTRING_OFFSET))(this);
		}

		::System::Boolean Match(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_MATCH_OFFSET))(this, s);
		}

		::Newtonsoft::Json::Linq::JsonPath::QueryOperator ParseOperator()
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::QueryOperator(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEOPERATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuotedField(::System::Char indexerCloseChar)
		{
			return ((::Newtonsoft::Json::Linq::JsonPath::PathFilter*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_PARSEQUOTEDFIELD_OFFSET))(this, indexerCloseChar);
		}

		::System::Void EnsureLength(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_ENSURELENGTH_OFFSET))(this, message);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate(::Newtonsoft::Json::Linq::JToken* t, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_OFFSET))(this, t, errorWhenNoMatch);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate_1(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::Newtonsoft::Json::Linq::JToken* t, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_JPATH_EVALUATE_1_OFFSET))(filters, t, errorWhenNoMatch);
		}
	};
}
