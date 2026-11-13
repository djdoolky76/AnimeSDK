#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class LeaveExceptionFilterInstruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C479D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C479CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C479D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C479CC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1C479D10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveExceptionFilterInstruction_TypeDefinitionIndex = 3335;

	class LeaveExceptionFilterInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::LeaveExceptionFilterInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LeaveExceptionFilterInstruction")->GetStaticField(0x328C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_CCTOR_OFFSET))();
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEEXCEPTIONFILTERINSTRUCTION_RUN_OFFSET))(this, a1);
		}

	};
}
