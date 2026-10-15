#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CPNOEPCJHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B4810)

inline static constexpr unsigned int CPNOEPCJHOC_TypeDefinitionIndex = 5597;

	class CPNOEPCJHOC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOEPCJHOC_CTOR_OFFSET))(this);
		}

	};
