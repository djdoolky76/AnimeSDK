#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDF83E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF8420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__VALIDATEJUMP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1EDF8430)

namespace System::Linq::Expressions::Interpreter
{
	class LabelInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "<>c")->GetStaticField(0x3BA80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "<>c")->GetStaticField(0x3BA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C_CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LabelScopeInfo* _ValidateJump_b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelScopeInfo*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO___C__VALIDATEJUMP_B__9_0_OFFSET))(this, a1);
		}

	};
}
