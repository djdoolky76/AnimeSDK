#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DHLGELKPKML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9260)

inline static constexpr unsigned int DHLGELKPKML_TypeDefinitionIndex = 25506;

	class DHLGELKPKML : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGELKPKML_CTOR_OFFSET))(this);
		}

	};
