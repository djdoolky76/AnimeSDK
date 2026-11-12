#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define XLUA_TEMPLATEENGINE_TEMPLATEFORMATEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x162F5C40)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int TemplateFormatException_TypeDefinitionIndex = 51338;

	class TemplateFormatException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_TEMPLATEFORMATEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
