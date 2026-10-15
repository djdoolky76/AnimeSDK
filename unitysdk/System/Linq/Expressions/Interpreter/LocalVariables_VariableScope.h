#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables_VariableScope; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_VARIABLESCOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE18270)

namespace System::Linq::Expressions::Interpreter
{
	class LocalVariables_VariableScope : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalVariable* Variable; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* ChildScopes; // 0x18
		::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* Parent; // 0x20
		::System::Int32 Stop; // 0x28
		::System::Int32 Start; // 0x2C
		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LocalVariable* a1, ::System::Int32 a2, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LocalVariable*, ::System::Int32, ::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_VARIABLESCOPE_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
