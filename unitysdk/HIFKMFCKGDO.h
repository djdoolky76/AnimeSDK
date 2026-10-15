#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIFKMFCKGDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD7970)

inline static constexpr unsigned int HIFKMFCKGDO_TypeDefinitionIndex = 72403;

	class HIFKMFCKGDO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMFCKGDO_CTOR_OFFSET))(this);
		}

	};
