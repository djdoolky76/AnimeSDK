#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Text::RegularExpressions { class RegexPrefix; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9AF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_CTOR_OFFSET UNITYSDK_OFFSET(0x1F099890)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1F0A9AB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1F0A9AC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1F0A9AA0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexPrefix_TypeDefinitionIndex = 2513;

	class RegexPrefix : public ::System::Object
	{
	public:
		::System::String* _prefix; // 0x10
		::System::Boolean _caseInsensitive; // 0x18
		static ::System::Text::RegularExpressions::RegexPrefix** StaticGet__empty()
		{
			return (::System::Text::RegularExpressions::RegexPrefix**)UnitySDK::FromName("System.Text.RegularExpressions", "RegexPrefix")->GetStaticField(0x373D0);
		}

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_CCTOR_OFFSET))();
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_PREFIX_OFFSET))(this);
		}

		::System::Boolean get_CaseInsensitive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_CASEINSENSITIVE_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexPrefix* get_Empty()
		{
			return ((::System::Text::RegularExpressions::RegexPrefix*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPREFIX_GET_EMPTY_OFFSET))();
		}

	};
}
