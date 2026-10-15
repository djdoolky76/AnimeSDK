#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOFHLJCOKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9761D0)

inline static constexpr unsigned int NOFHLJCOKJP_TypeDefinitionIndex = 42446;

	class NOFHLJCOKJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFHLJCOKJP_CTOR_OFFSET))(this);
		}

	};
