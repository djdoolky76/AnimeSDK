#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIJAMLAHLMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAABA80)

inline static constexpr unsigned int GIJAMLAHLMC_TypeDefinitionIndex = 42351;

	class GIJAMLAHLMC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJAMLAHLMC_CTOR_OFFSET))(this);
		}

	};
