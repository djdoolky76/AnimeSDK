#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEININLINEEDITORSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80080)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInInlineEditorsAttribute_TypeDefinitionIndex = 7290;

	class DisableInInlineEditorsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEININLINEEDITORSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
