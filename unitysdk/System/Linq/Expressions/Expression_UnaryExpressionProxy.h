#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1DFC3F70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1DFC3FA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1DFC3FE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1DFC3FC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1DFC4070)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DFC4090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x1DFC40B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DFC40D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3ED0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_UnaryExpressionProxy_TypeDefinitionIndex = 4426;

	class Expression_UnaryExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::UnaryExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::Boolean get_IsLifted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_ISLIFTED_OFFSET))(this);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_ISLIFTEDTONULL_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_METHOD_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Operand()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_OPERAND_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
