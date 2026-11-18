#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_203E265ED0A6B363__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA80C60)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_203E265ED0A6B363_TypeDefinitionIndex = 17981;

	class PreserveAttribute_203E265ED0A6B363 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_203E265ED0A6B363__CTOR_OFFSET))(this);
		}
	};
}
