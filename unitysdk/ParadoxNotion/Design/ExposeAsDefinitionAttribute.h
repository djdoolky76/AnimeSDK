#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_EXPOSEASDEFINITIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF22FE0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ExposeAsDefinitionAttribute_TypeDefinitionIndex = 30932;

	class ExposeAsDefinitionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_EXPOSEASDEFINITIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
