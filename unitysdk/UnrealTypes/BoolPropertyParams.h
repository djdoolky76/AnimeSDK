#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

#define UNREALTYPES_BOOLPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E300)

namespace UnrealTypes
{
	inline static constexpr unsigned int BoolPropertyParams_TypeDefinitionIndex = 27780;

	class BoolPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
