#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1C412E50)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionDelegateFactory_TypeDefinitionIndex = 9635;

	class ReflectionDelegateFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CTOR_OFFSET))(this);
		}

	};
}
