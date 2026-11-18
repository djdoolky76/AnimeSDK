#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_DOUBLEVALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AE0E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_DoubleValidator_TypeDefinitionIndex = 31102;

	struct alignas(4) PropertyRefHelpers_DoubleValidator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_DOUBLEVALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
