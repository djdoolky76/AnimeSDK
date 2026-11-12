#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDIAEAMFDIB.h"

#define GJIKILKPHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x169A6BF0)

inline static constexpr unsigned int GJIKILKPHJP_TypeDefinitionIndex = 50585;

	class GJIKILKPHJP : public ::CDIAEAMFDIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIKILKPHJP_CTOR_OFFSET))(this);
		}

	};
