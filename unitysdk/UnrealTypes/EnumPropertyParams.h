#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class Enum; }

#define UNREALTYPES_ENUMPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1B30)

namespace UnrealTypes
{
	inline static constexpr unsigned int EnumPropertyParams_TypeDefinitionIndex = 27785;

	class EnumPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Func_1<::UnrealTypes::Enum*>* EnumFunc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
