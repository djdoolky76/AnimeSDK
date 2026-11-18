#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class Property; }

#define STATETREECORE_PROPERTYREFHELPERS_UINT8VALIDATOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x9A7E20)

namespace StateTreeCore
{
	inline static constexpr unsigned int PropertyRefHelpers_UInt8Validator_TypeDefinitionIndex = 31098;

	struct alignas(4) PropertyRefHelpers_UInt8Validator
	{
		::System::Boolean IsValid(::UnrealTypes::Property* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + STATETREECORE_PROPERTYREFHELPERS_UINT8VALIDATOR_ISVALID_OFFSET))(this, property);
		}
	};
}
