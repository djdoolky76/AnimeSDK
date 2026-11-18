#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSUNINITIALIZED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EDAD0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsUninitialized_TypeDefinitionIndex = 30714;

	class fsUninitialized : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSUNINITIALIZED__CTOR_OFFSET))(this);
		}
	};
}
