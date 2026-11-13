#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHDCHADFHND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E1050)

inline static constexpr unsigned int CHDCHADFHND_TypeDefinitionIndex = 43926;

	class CHDCHADFHND : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDCHADFHND_CTOR_OFFSET))(this);
		}

	};
