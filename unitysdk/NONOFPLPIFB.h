#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEAMIIFFDKL.h"

#define NONOFPLPIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EF0C0)

inline static constexpr unsigned int NONOFPLPIFB_TypeDefinitionIndex = 25489;

	class NONOFPLPIFB : public ::IEAMIIFFDKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONOFPLPIFB_CTOR_OFFSET))(this);
		}

	};
