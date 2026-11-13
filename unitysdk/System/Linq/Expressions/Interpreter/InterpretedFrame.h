#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InterpretedFrameInfo.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C477D40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET UNITYSDK_OFFSET(0x1C464100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET UNITYSDK_OFFSET(0x1C4783A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1C477DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1C477E90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C477E60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1C477E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET UNITYSDK_OFFSET(0x1C4651D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET UNITYSDK_OFFSET(0x1C464940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET UNITYSDK_OFFSET(0x1C478460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET UNITYSDK_OFFSET(0x1C460B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C478710)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET UNITYSDK_OFFSET(0x1C45D350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C465190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C4645C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1C4660B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_2_OFFSET UNITYSDK_OFFSET(0x1C461C40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_3_OFFSET UNITYSDK_OFFSET(0x1C4686D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_4_OFFSET UNITYSDK_OFFSET(0x1C468DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_5_OFFSET UNITYSDK_OFFSET(0x1C461A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_6_OFFSET UNITYSDK_OFFSET(0x1C462070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x1C4600A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C464710)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C477F10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1C4645A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C4784D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C478540)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrame_TypeDefinitionIndex = 3437;

	class InterpretedFrame : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _continuations; // 0x10
		::System::Object* _pendingValue; // 0x18
		::System::Linq::Expressions::Interpreter::Interpreter* Interpreter; // 0x20
		::Il2CppArray<::System::Object*>* Data; // 0x28
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* Closure; // 0x30
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _parent; // 0x38
		::System::Int32 StackIndex; // 0x40
		::System::Int32 _pendingContinuation; // 0x44
		::System::Int32 _continuationIndex; // 0x48
		::System::Int32 InstructionIndex; // 0x4C
		static ::System::Linq::Expressions::Interpreter::InterpretedFrame** StaticGet_s_currentFrame()
		{
			return (::System::Linq::Expressions::Interpreter::InterpretedFrame**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->GetStaticField(0x0);
		}

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* a1, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Interpreter*, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Interpreter::DebugInfo* GetDebugInfo(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET))(this);
		}

		::System::Void Push(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(this, a1);
		}

		::System::Void Push_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_1_OFFSET))(this, a1);
		}

		::System::Void Push_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_2_OFFSET))(this, a1);
		}

		::System::Void Push_3(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_3_OFFSET))(this, a1);
		}

		::System::Void Push_4(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_4_OFFSET))(this, a1);
		}

		::System::Void Push_5(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_5_OFFSET))(this, a1);
		}

		::System::Void Push_6(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_6_OFFSET))(this, a1);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET))(this);
		}

		::System::Void SetStackDepth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET))(this, a1);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET))(this);
		}

		::System::Void Dup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* get_Parent()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>* GetStackTraceDebugInfo()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET))(this);
		}

		::System::Void SaveTraceToException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* Enter()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET))(this);
		}

		::System::Void Leave(::System::Linq::Expressions::Interpreter::InterpretedFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::InterpretedFrame*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET))(this, a1);
		}

		::System::Boolean IsJumpHappened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET))(this);
		}

		::System::Void RemoveContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET))(this);
		}

		::System::Void PushContinuation(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET))(this, a1);
		}

		::System::Int32 YieldToCurrentContinuation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET))(this);
		}

		::System::Int32 YieldToPendingContinuation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Void PushPendingContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Void PopPendingContinuation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET))(this);
		}

		::System::Int32 Goto(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET))(this, a1, a2, a3);
		}

	};
}
