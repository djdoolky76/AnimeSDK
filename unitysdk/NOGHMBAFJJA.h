#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOGHMBAFJJA_CTOR_OFFSET UNITYSDK_OFFSET(0x19CE37F0)

inline static constexpr unsigned int NOGHMBAFJJA_TypeDefinitionIndex = 82969;

	class NOGHMBAFJJA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGHMBAFJJA_CTOR_OFFSET))(this);
		}

	};
