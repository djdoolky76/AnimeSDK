#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODECASTEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DEEEC00)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1DEEEC80)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DEEEC40)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1DEEECC0)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEEB40)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEEEB80)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DEEEBC0)
#define SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEEB00)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCastExpression_TypeDefinitionIndex = 4244;

	class CodeCastExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* targetType, ::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_1_OFFSET))(this, targetType, expression);
		}

		::System::Void _ctor_2(::System::String* targetType, ::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_2_OFFSET))(this, targetType, expression);
		}

		::System::Void _ctor_3(::System::Type* targetType, ::System::CodeDom::CodeExpression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION__CTOR_3_OFFSET))(this, targetType, expression);
		}

		::System::CodeDom::CodeExpression* get_Expression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Void set_Expression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION_SET_EXPRESSION_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_TargetType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Void set_TargetType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECASTEXPRESSION_SET_TARGETTYPE_OFFSET))(this, value);
		}
	};
}
