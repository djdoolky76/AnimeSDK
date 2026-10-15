#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDE16B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE16F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__MAKEDELEGATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EDE1700)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DelegateHelpers___c_TypeDefinitionIndex = 3662;

	class DelegateHelpers___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "<>c")->GetStaticField(0x39D80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "<>c")->GetStaticField(0x39D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _MakeDelegate_b__1_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS___C__MAKEDELEGATE_B__1_0_OFFSET))(this, a1);
		}

	};
}
