#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEKCLCOLELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FD830)

inline static constexpr unsigned int NEKCLCOLELE_TypeDefinitionIndex = 25034;

	class NEKCLCOLELE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKCLCOLELE_CTOR_OFFSET))(this);
		}

	};
