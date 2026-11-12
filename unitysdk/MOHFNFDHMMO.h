#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOHFNFDHMMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EB0F0)

inline static constexpr unsigned int MOHFNFDHMMO_TypeDefinitionIndex = 50402;

	class MOHFNFDHMMO : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHFNFDHMMO_CTOR_OFFSET))(this);
		}

	};
