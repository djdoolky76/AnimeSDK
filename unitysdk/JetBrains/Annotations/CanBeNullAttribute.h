#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JETBRAINS_ANNOTATIONS_CANBENULLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x2067C550)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int CanBeNullAttribute_TypeDefinitionIndex = 4008;

	class CanBeNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_CANBENULLATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
