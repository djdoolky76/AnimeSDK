#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPKOJJMJNOK_CTOR_OFFSET UNITYSDK_OFFSET(0x181AD760)

inline static constexpr unsigned int DPKOJJMJNOK_TypeDefinitionIndex = 77098;

	class DPKOJJMJNOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKOJJMJNOK_CTOR_OFFSET))(this);
		}

	};
