#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBMAPDEEEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8C1E0)

inline static constexpr unsigned int OBMAPDEEEBC_TypeDefinitionIndex = 63793;

	class OBMAPDEEEBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMAPDEEEBC_CTOR_OFFSET))(this);
		}

	};
