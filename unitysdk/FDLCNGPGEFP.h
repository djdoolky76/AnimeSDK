#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDLCNGPGEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x156D2890)

inline static constexpr unsigned int FDLCNGPGEFP_TypeDefinitionIndex = 78051;

	class FDLCNGPGEFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLCNGPGEFP_CTOR_OFFSET))(this);
		}

	};
