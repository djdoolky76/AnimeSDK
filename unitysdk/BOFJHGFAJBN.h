#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOFJHGFAJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A783DC0)

inline static constexpr unsigned int BOFJHGFAJBN_TypeDefinitionIndex = 50724;

	class BOFJHGFAJBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJHGFAJBN_CTOR_OFFSET))(this);
		}

	};
