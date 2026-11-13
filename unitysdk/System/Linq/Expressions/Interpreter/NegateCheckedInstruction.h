#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1F77DFD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F77DFC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F77DF60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1F77DF80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1F77DF70)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NegateCheckedInstruction_TypeDefinitionIndex = 3554;

	class NegateCheckedInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NegateCheckedInstruction")->GetStaticField(0x36540);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NegateCheckedInstruction")->GetStaticField(0x36548);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NegateCheckedInstruction")->GetStaticField(0x36550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NEGATECHECKEDINSTRUCTION_CREATE_OFFSET))(a1);
		}

	};
}
