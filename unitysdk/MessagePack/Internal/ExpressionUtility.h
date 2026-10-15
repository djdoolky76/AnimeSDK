#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET UNITYSDK_OFFSET(0x1BBA7530)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ExpressionUtility_TypeDefinitionIndex = 7292;

	class ExpressionUtility : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo* GetMethodInfoCore(::System::Linq::Expressions::LambdaExpression* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET))(a1);
		}

	};
}
