#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/OffsetInstruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2008B070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x2008B060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x2008AE40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x2008B040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x2008B080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x2008B050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET UNITYSDK_OFFSET(0x2008B090)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchInstruction_TypeDefinitionIndex = 3325;

	class BranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction
	{
	public:
		::System::Boolean _hasResult; // 0x18
		::System::Boolean _hasValue; // 0x19
		static ::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*>*>** StaticGet_s_caches()
		{
			return (::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*>*>**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "BranchInstruction")->GetStaticField(0x3FF70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>* get_Cache()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CACHE_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHINSTRUCTION_RUN_OFFSET))(this, a1);
		}

	};
}
