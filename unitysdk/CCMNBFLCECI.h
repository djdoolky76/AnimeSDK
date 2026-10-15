#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCMNBFLCECI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF100)

inline static constexpr unsigned int CCMNBFLCECI_TypeDefinitionIndex = 42941;

	class CCMNBFLCECI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNBFLCECI_CTOR_OFFSET))(this);
		}

	};
