#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GELGOBGKLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4D050)

inline static constexpr unsigned int GELGOBGKLAA_TypeDefinitionIndex = 44767;

	class GELGOBGKLAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELGOBGKLAA_CTOR_OFFSET))(this);
		}

	};
