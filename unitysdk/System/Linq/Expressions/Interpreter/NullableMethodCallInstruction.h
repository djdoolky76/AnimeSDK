#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class NullableMethodCallInstruction; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET UNITYSDK_OFFSET(0x200D1550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x200D1180)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x200D1170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x200D1110)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x200D1130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x200D1120)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NullableMethodCallInstruction_TypeDefinitionIndex = 3644;

	class NullableMethodCallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_getHashCode()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BC0);
		}

		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_hasValue()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BC8);
		}

		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_value()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BD0);
		}

		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_equals()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BD8);
		}

		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_getValueOrDefault1()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BE0);
		}

		static ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction** StaticGet_s_toString()
		{
			return (::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction")->GetStaticField(0x45BE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::String* a1, ::System::Int32 a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::String*, ::System::Int32, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* CreateGetValue()
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NULLABLEMETHODCALLINSTRUCTION_CREATEGETVALUE_OFFSET))();
		}

	};
}
