#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EDE0D10)

namespace System::Linq::Expressions::Interpreter
{
	class DelegateHelpers : public ::System::Object
	{
	public:
		static ::System::Type* MakeDelegate(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Type*(*)(::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET))(a1);
		}

	};
}
