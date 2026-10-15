#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONLKOENMDNA.h"

#define EOECOLOIMDO_CTOR_OFFSET UNITYSDK_OFFSET(0x155B2310)

inline static constexpr unsigned int EOECOLOIMDO_TypeDefinitionIndex = 49339;

	class EOECOLOIMDO : public ::ONLKOENMDNA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOECOLOIMDO_CTOR_OFFSET))(this);
		}

	};
