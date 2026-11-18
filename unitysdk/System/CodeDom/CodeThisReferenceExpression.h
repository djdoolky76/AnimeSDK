#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

#define SYSTEM_CODEDOM_CODETHISREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEFA00)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeThisReferenceExpression_TypeDefinitionIndex = 4278;

	class CodeThisReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETHISREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
