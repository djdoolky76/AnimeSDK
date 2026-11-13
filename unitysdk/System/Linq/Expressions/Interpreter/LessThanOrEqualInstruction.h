#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C473E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47C010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C47BFB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C47BFD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x1C47BFC0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_TypeDefinitionIndex = 3465;

	class LessThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		::System::Object* _nullValue; // 0x10
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332B0);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332B8);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332C0);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332C8);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332D0);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332D8);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullChar()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332E0);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332E8);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332F0);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x332F8);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33300);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSingle()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33308);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33310);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33318);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33320);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33328);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33330);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33338);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullDouble()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33340);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33348);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33350);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction")->GetStaticField(0x33358);
		}

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET))(a1, a2);
		}

	};
}
