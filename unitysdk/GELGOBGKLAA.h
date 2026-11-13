#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GELGOBGKLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2259D0)

inline static constexpr unsigned int GELGOBGKLAA_TypeDefinitionIndex = 44767;

	class GELGOBGKLAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELGOBGKLAA_CTOR_OFFSET))(this);
		}

	};
