#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class DupInstruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDE29A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE2880)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1EDE28A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1EDE2890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1EDE28E0)

namespace System::Linq::Expressions::Interpreter
{
	class DupInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::DupInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::DupInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "DupInstruction")->GetStaticField(0x3A100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_CCTOR_OFFSET))();
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DUPINSTRUCTION_RUN_OFFSET))(this, a1);
		}

	};
}
