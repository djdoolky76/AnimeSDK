#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x417D040)
#define INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x417CFB0)

namespace IniParserEx
{
	inline static constexpr unsigned int CodeParserException_TypeDefinitionIndex = 17776;

	class CodeParserException : public ::System::Exception
	{
	public:
		::System::String* ExceptionInfo; // 0x90
		::System::String* Tag; // 0x98

		::System::Void _ctor(::System::String* AE57FF5179B75168, ::System::String* AA6B4595EE321C3F)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION__CTOR_OFFSET))(this, AE57FF5179B75168, AA6B4595EE321C3F);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_CODEPARSEREXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
