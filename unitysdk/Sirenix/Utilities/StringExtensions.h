#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_STRINGEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F65BF70)
#define SIRENIX_UTILITIES_STRINGEXTENSIONS_ISNULLORWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1F663310)
#define SIRENIX_UTILITIES_STRINGEXTENSIONS_SPLITPASCALCASE_OFFSET UNITYSDK_OFFSET(0x1F662F50)
#define SIRENIX_UTILITIES_STRINGEXTENSIONS_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x1F662D90)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 6485;

	class StringExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToTitleCase(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGEXTENSIONS_TOTITLECASE_OFFSET))(input);
		}

		static ::System::Boolean Contains(::System::String* source, ::System::String* toCheck, ::System::StringComparison comparisonType)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGEXTENSIONS_CONTAINS_OFFSET))(source, toCheck, comparisonType);
		}

		static ::System::String* SplitPascalCase(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGEXTENSIONS_SPLITPASCALCASE_OFFSET))(input);
		}

		static ::System::Boolean IsNullOrWhitespace(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGEXTENSIONS_ISNULLORWHITESPACE_OFFSET))(str);
		}
	};
}
