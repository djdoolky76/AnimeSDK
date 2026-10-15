#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class TypeEqualsInstruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE2C6D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2C640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1EE2C5E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1EE2C600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1EE2C5F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x1EE2C650)

namespace System::Linq::Expressions::Interpreter
{
	class TypeEqualsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction** StaticGet_Instance()
		{
			return (::System::Linq::Expressions::Interpreter::TypeEqualsInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "TypeEqualsInstruction")->GetStaticField(0x3B6A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_CCTOR_OFFSET))();
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TYPEEQUALSINSTRUCTION_RUN_OFFSET))(this, a1);
		}

	};
}
