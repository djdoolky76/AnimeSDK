#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions::Interpreter { class CastInstruction; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x2008D9D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x2008E040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x2008D970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x2008D990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x2008D980)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_TypeDefinitionIndex = 3652;

	class CastInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Decimal()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40500);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40508);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40510);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40518);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40520);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40528);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40530);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40538);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40540);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40548);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40550);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40558);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_String()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40560);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40568);
		}

		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_DateTime()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "CastInstruction")->GetStaticField(0x40570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET))(a1);
		}

	};
}
