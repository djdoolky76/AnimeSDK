#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INAIJCCJHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2EA0)

inline static constexpr unsigned int INAIJCCJHOP_TypeDefinitionIndex = 5076;

	class INAIJCCJHOP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAIJCCJHOP_CTOR_OFFSET))(this);
		}

	};
