#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIFKMFCKGDO_CTOR_OFFSET UNITYSDK_OFFSET(0x190300B0)

inline static constexpr unsigned int HIFKMFCKGDO_TypeDefinitionIndex = 74482;

	class HIFKMFCKGDO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMFCKGDO_CTOR_OFFSET))(this);
		}

	};
