#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_054581E52B43F65F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F018990)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_054581E52B43F65F_TypeDefinitionIndex = 36080;

	class PreserveAttribute_054581E52B43F65F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_054581E52B43F65F__CTOR_OFFSET))(this);
		}
	};
}
