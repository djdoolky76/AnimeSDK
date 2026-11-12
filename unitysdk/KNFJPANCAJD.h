#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KNFJPANCAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7D40)

inline static constexpr unsigned int KNFJPANCAJD_TypeDefinitionIndex = 5084;

	class KNFJPANCAJD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFJPANCAJD_CTOR_OFFSET))(this);
		}

	};
