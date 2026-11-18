#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ENUMPAGINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB801A0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnumPagingAttribute_TypeDefinitionIndex = 7304;

	class EnumPagingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENUMPAGINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
