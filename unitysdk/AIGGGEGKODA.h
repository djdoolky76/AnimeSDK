#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AIGGGEGKODA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9E740)

inline static constexpr unsigned int AIGGGEGKODA_TypeDefinitionIndex = 80481;

	class AIGGGEGKODA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGGGEGKODA_CTOR_OFFSET))(this);
		}

	};
