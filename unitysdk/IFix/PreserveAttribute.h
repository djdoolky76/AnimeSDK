#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C6E0)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 8520;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
