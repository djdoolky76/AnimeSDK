#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_CODEDOM_COMPILER_CODEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B3B0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeParser_TypeDefinitionIndex = 4289;

	class CodeParser : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEPARSER__CTOR_OFFSET))(this);
		}
	};
}
