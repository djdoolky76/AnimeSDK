#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_A542726D113A7E39__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA6E90)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_A542726D113A7E39_TypeDefinitionIndex = 94960;

	class PreserveAttribute_A542726D113A7E39 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_A542726D113A7E39__CTOR_OFFSET))(this);
		}
	};
}
