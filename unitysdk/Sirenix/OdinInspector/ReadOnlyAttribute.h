#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_READONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB81700)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 7357;

	class ReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_READONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
