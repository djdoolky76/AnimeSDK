#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_3847B3E9FE5AAAAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56C5B0)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_3847B3E9FE5AAAAA_TypeDefinitionIndex = 95284;

	class PreserveAttribute_3847B3E9FE5AAAAA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_3847B3E9FE5AAAAA__CTOR_OFFSET))(this);
		}
	};
}
