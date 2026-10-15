#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE273E0)

namespace System::Linq::Expressions::Interpreter
{
	class RethrowException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
