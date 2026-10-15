#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBMAPDEEEBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4C2A0)

inline static constexpr unsigned int OBMAPDEEEBC_TypeDefinitionIndex = 62380;

	class OBMAPDEEEBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMAPDEEEBC_CTOR_OFFSET))(this);
		}

	};
