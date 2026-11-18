#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_TypeDefinitionIndex = 1659;

	class LocalAppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IgnoreEmptyKeySequences()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalAppContextSwitches_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
	};
}
