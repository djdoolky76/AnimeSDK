#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System::CodeDom { class CodeExpressionCollection; }

#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DEEF100)
#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEEF140)
#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEEF180)
#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEF080)
#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEEF0C0)
#define SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF040)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDelegateInvokeExpression_TypeDefinitionIndex = 4252;

	class CodeDelegateInvokeExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_1_OFFSET))(this, targetObject);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeExpression* targetObject, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION__CTOR_2_OFFSET))(this, targetObject, parameters);
		}

		::System::CodeDom::CodeExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_GET_PARAMETERS_OFFSET))(this);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATEINVOKEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
