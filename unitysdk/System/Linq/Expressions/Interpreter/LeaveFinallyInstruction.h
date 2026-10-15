#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDCAE70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDCADD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1EDCADE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1EDCADF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1EDCAE30)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LeaveFinallyInstruction_TypeDefinitionIndex = 3331;

	class LeaveFinallyInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LeaveFinallyInstruction")->GetStaticField(0x3C030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LEAVEFINALLYINSTRUCTION_RUN_OFFSET))(this, a1);
		}

	};
}
