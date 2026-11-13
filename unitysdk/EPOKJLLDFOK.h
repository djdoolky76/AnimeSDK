#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EPOKJLLDFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x16B3C820)

inline static constexpr unsigned int EPOKJLLDFOK_TypeDefinitionIndex = 75781;

	class EPOKJLLDFOK : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOKJLLDFOK_CTOR_OFFSET))(this);
		}

	};
