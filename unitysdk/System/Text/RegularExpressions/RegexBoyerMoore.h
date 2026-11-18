#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1CBF8690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET UNITYSDK_OFFSET(0x1CBF8450)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET UNITYSDK_OFFSET(0x1CBF8700)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBF8D30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF7BC0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexBoyerMoore_TypeDefinitionIndex = 2721;

	class RegexBoyerMoore : public ::System::Object
	{
	public:
		// static const ::System::Int32 infinite = 0x7FFFFFFF; // 0x0
		::System::String* _pattern; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _negativeUnicode; // 0x18
		::Il2CppArray<::System::Int32>* _negativeASCII; // 0x20
		::Il2CppArray<::System::Int32>* _positive; // 0x28
		::System::Globalization::CultureInfo* _culture; // 0x30
		::System::Boolean _caseInsensitive; // 0x38
		::System::Boolean _rightToLeft; // 0x39
		::System::Byte _padding0[0x2];
		::System::Int32 _highASCII; // 0x3C
		::System::Int32 _lowASCII; // 0x40

		::System::Void _ctor(::System::String* pattern, ::System::Boolean caseInsensitive, ::System::Boolean rightToLeft, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE__CTOR_OFFSET))(this, pattern, caseInsensitive, rightToLeft, culture);
		}

		::System::Boolean MatchPattern(::System::String* text, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_MATCHPATTERN_OFFSET))(this, text, index);
		}

		::System::Boolean IsMatch(::System::String* text, ::System::Int32 index, ::System::Int32 beglimit, ::System::Int32 endlimit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_ISMATCH_OFFSET))(this, text, index, beglimit, endlimit);
		}

		::System::Int32 Scan(::System::String* text, ::System::Int32 index, ::System::Int32 beglimit, ::System::Int32 endlimit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_SCAN_OFFSET))(this, text, index, beglimit, endlimit);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXBOYERMOORE_TOSTRING_OFFSET))(this);
		}
	};
}
