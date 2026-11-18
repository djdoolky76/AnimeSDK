#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

#define UNREALTYPES_ARRAYPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E1F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ArrayPropertyParams_TypeDefinitionIndex = 27786;

	class ArrayPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
