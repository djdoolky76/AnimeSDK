#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1D8A46C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D8A46E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D8A46B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D8A46A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1D8A4680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1D8A4670)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_INITMATCHTIMEOUTDEFAULTFOROLDVERSIONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D8A41E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1D8A46D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D8A4610)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D8A45A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D8A44B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1D8A4690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1D8A4440)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8A42D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A4240)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCompilationInfo_TypeDefinitionIndex = 2730;

	class RegexCompilationInfo : public ::System::Object
	{
	public:
		::System::String* nspace; // 0x10
		::System::String* pattern; // 0x18
		::System::String* name; // 0x20
		::System::Boolean isPublic; // 0x28
		::System::Byte _padding0[0x3];
		::System::Text::RegularExpressions::RegexOptions options; // 0x2C
		::System::TimeSpan matchTimeout; // 0x30

		::System::Void _ctor(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* name, ::System::String* fullnamespace, ::System::Boolean ispublic)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_OFFSET))(this, pattern, options, name, fullnamespace, ispublic);
		}

		::System::Void _ctor_1(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* name, ::System::String* fullnamespace, ::System::Boolean ispublic, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::String*, ::System::String*, ::System::Boolean, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_1_OFFSET))(this, pattern, options, name, fullnamespace, ispublic, matchTimeout);
		}

		::System::Void InitMatchTimeoutDefaultForOldVersionDeserialization(::System::Runtime::Serialization::StreamingContext unusedContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_INITMATCHTIMEOUTDEFAULTFOROLDVERSIONDESERIALIZATION_OFFSET))(this, unusedContext);
		}

		::System::String* get_Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_PATTERN_OFFSET))(this);
		}

		::System::Void set_Pattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_PATTERN_OFFSET))(this, value);
		}

		::System::Text::RegularExpressions::RegexOptions get_Options()
		{
			return ((::System::Text::RegularExpressions::RegexOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Text::RegularExpressions::RegexOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_ISPUBLIC_OFFSET))(this);
		}

		::System::Void set_IsPublic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_ISPUBLIC_OFFSET))(this, value);
		}

		::System::TimeSpan get_MatchTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_MATCHTIMEOUT_OFFSET))(this);
		}

		::System::Void set_MatchTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_MATCHTIMEOUT_OFFSET))(this, value);
		}
	};
}
