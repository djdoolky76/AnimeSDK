#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDENDEMCLEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABD100)

inline static constexpr unsigned int HDENDEMCLEO_TypeDefinitionIndex = 42335;

	class HDENDEMCLEO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDENDEMCLEO_CTOR_OFFSET))(this);
		}

	};
