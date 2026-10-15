#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENLNFBCDEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x155B2320)

inline static constexpr unsigned int ENLNFBCDEIO_TypeDefinitionIndex = 78946;

	class ENLNFBCDEIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLNFBCDEIO_CTOR_OFFSET))(this);
		}

	};
