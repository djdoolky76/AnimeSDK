#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DABKLNHFHIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7598C0)

inline static constexpr unsigned int DABKLNHFHIO_TypeDefinitionIndex = 37806;

	class DABKLNHFHIO : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKLNHFHIO_CTOR_OFFSET))(this);
		}

	};
