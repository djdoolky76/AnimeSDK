#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace System::Text::RegularExpressions { class Regex; }
namespace System::Text::RegularExpressions { class RegexNode; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1E0D4460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET UNITYSDK_OFFSET(0x1E0D4210)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET UNITYSDK_OFFSET(0x1E0D3FF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1E0D4470)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1E0D4970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET UNITYSDK_OFFSET(0x1E0D4500)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_SPLIT_OFFSET UNITYSDK_OFFSET(0x1E0D4E20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D3BC0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexReplacement_TypeDefinitionIndex = 2746;

	class RegexReplacement : public ::System::Object
	{
	public:
		// static const ::System::Int32 Specials = 0x4; // 0x0
		// static const ::System::Int32 LeftPortion = -0x1; // 0x0
		// static const ::System::Int32 RightPortion = -0x2; // 0x0
		// static const ::System::Int32 LastGroup = -0x3; // 0x0
		// static const ::System::Int32 WholeString = -0x4; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _rules; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _strings; // 0x18
		::System::String* _rep; // 0x20

		::System::Void _ctor(::System::String* rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT__CTOR_OFFSET))(this, rep, concat, _caps);
		}

		::System::Void ReplacementImpl(::System::Text::StringBuilder* sb, ::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPL_OFFSET))(this, sb, match);
		}

		::System::Void ReplacementImplRTL(::System::Collections::Generic::List_1<::System::String*>* al, ::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENTIMPLRTL_OFFSET))(this, al, match);
		}

		::System::String* get_Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_GET_PATTERN_OFFSET))(this);
		}

		::System::String* Replacement(::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACEMENT_OFFSET))(this, match);
		}

		::System::String* Replace(::System::Text::RegularExpressions::Regex* regex, ::System::String* input, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_OFFSET))(this, regex, input, count, startat);
		}

		static ::System::String* Replace_1(::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Text::RegularExpressions::Regex* regex, ::System::String* input, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::System::String*(*)(::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_REPLACE_1_OFFSET))(evaluator, regex, input, count, startat);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::Text::RegularExpressions::Regex* regex, ::System::String* input, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXREPLACEMENT_SPLIT_OFFSET))(regex, input, count, startat);
		}
	};
}
