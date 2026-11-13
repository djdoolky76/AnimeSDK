#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x2085BE40)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionDelegateFactory_TypeDefinitionIndex = 9643;

	class ReflectionDelegateFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CTOR_OFFSET))(this);
		}

	};
}
