#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CEIOFKBDNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41EAA0)

inline static constexpr unsigned int CEIOFKBDNAL_TypeDefinitionIndex = 5078;

	class CEIOFKBDNAL : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIOFKBDNAL_CTOR_OFFSET))(this);
		}

	};
