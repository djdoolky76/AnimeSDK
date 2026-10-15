#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NNIAMPFGLNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D20DB60)

inline static constexpr unsigned int NNIAMPFGLNG_TypeDefinitionIndex = 25026;

	class NNIAMPFGLNG : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIAMPFGLNG_CTOR_OFFSET))(this);
		}

	};
