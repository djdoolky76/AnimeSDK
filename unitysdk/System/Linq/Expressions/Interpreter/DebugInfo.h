#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo_DebugInfoComparer; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDB2350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB20A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1EDB1F40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDB20B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DebugInfo_TypeDefinitionIndex = 3482;

	class DebugInfo : public ::System::Object
	{
	public:
		::System::String* FileName; // 0x10
		::System::Int32 StartLine; // 0x18
		::System::Boolean IsClear; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 Index; // 0x20
		::System::Int32 EndLine; // 0x24
		static ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer** StaticGet_s_debugComparer()
		{
			return (::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "DebugInfo")->GetStaticField(0x3AD70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_CCTOR_OFFSET))();
		}

		static ::System::Linq::Expressions::Interpreter::DebugInfo* GetMatchingDebugInfo(::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>* a1, ::System::Int32 a2)
		{
			return ((::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::Il2CppArray<::System::Linq::Expressions::Interpreter::DebugInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET))(this);
		}

	};
}
