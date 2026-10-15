#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EHNPADGDEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x154AD720)

inline static constexpr unsigned int EHNPADGDEKI_TypeDefinitionIndex = 50048;

	class EHNPADGDEKI : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNPADGDEKI_CTOR_OFFSET))(this);
		}

	};
