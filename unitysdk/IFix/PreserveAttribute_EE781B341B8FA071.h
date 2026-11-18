#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_EE781B341B8FA071__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A0DF0)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_EE781B341B8FA071_TypeDefinitionIndex = 23806;

	class PreserveAttribute_EE781B341B8FA071 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_EE781B341B8FA071__CTOR_OFFSET))(this);
		}
	};
}
