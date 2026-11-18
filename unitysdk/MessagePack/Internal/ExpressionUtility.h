#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET UNITYSDK_OFFSET(0x1DE9E9A0)
#define MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFO_1_OFFSET UNITYSDK_OFFSET(0x1DE9EA40)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ExpressionUtility_TypeDefinitionIndex = 30189;

	class ExpressionUtility : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo* GetMethodInfoCore(::System::Linq::Expressions::LambdaExpression* expression)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFOCORE_OFFSET))(expression);
		}

		static ::System::Reflection::MethodInfo* GetMethodInfo_1(::System::Linq::Expressions::Expression_1<::System::Action*>* expression)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::Expression_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_EXPRESSIONUTILITY_GETMETHODINFO_1_OFFSET))(expression);
		}
	};
}
