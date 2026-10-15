#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHKDMEIDFBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB944DE0)

inline static constexpr unsigned int MHKDMEIDFBC_TypeDefinitionIndex = 81270;

	class MHKDMEIDFBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKDMEIDFBC_CTOR_OFFSET))(this);
		}

	};
