#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPAEPHIFLBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B89C1B0)

inline static constexpr unsigned int PPAEPHIFLBF_TypeDefinitionIndex = 74486;

	class PPAEPHIFLBF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAEPHIFLBF_CTOR_OFFSET))(this);
		}

	};
