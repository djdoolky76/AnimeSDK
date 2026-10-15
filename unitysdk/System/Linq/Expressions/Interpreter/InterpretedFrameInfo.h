#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C54260)

namespace System::Linq::Expressions::Interpreter
{
	struct alignas(8) InterpretedFrameInfo
	{
		::System::String* _methodName; // 0x10
		::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Linq::Expressions::Interpreter::DebugInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Linq::Expressions::Interpreter::DebugInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET))(this);
		}

	};
}
