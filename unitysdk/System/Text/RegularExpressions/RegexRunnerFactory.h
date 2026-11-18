#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34F460)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunnerFactory_TypeDefinitionIndex = 2748;

	class RegexRunnerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNERFACTORY__CTOR_OFFSET))(this);
		}
	};
}
