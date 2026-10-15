#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PIGAKOHFAPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC258310)

inline static constexpr unsigned int PIGAKOHFAPE_TypeDefinitionIndex = 49327;

	class PIGAKOHFAPE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGAKOHFAPE_CTOR_OFFSET))(this);
		}

	};
