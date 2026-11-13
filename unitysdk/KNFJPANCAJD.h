#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KNFJPANCAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x209656F0)

inline static constexpr unsigned int KNFJPANCAJD_TypeDefinitionIndex = 5084;

	class KNFJPANCAJD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFJPANCAJD_CTOR_OFFSET))(this);
		}

	};
