#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFBJOPGBJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x14807DF0)

inline static constexpr unsigned int EFBJOPGBJNG_TypeDefinitionIndex = 82972;

	class EFBJOPGBJNG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBJOPGBJNG_CTOR_OFFSET))(this);
		}

	};
