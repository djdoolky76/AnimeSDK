#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CEIOFKBDNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5290)

inline static constexpr unsigned int CEIOFKBDNAL_TypeDefinitionIndex = 5083;

	class CEIOFKBDNAL : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIOFKBDNAL_CTOR_OFFSET))(this);
		}

	};
