#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOFJEBICGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x191A4E80)

inline static constexpr unsigned int DOFJEBICGJI_TypeDefinitionIndex = 84053;

	class DOFJEBICGJI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFJEBICGJI_CTOR_OFFSET))(this);
		}

	};
