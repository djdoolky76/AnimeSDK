#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMDBFINNIMA_CTOR_OFFSET UNITYSDK_OFFSET(0x10631D30)

inline static constexpr unsigned int DMDBFINNIMA_TypeDefinitionIndex = 84066;

	class DMDBFINNIMA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDBFINNIMA_CTOR_OFFSET))(this);
		}

	};
