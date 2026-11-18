#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DELAYENTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37890)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DelayEnterAttribute_TypeDefinitionIndex = 7897;

	class DelayEnterAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DELAYENTERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
