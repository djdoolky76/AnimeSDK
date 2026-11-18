#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINTABLESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB807F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInTablesAttribute_TypeDefinitionIndex = 7321;

	class HideInTablesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINTABLESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
