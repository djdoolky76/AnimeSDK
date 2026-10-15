#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMNFBBPPCNN.h"
#include "unitysdk/System/Object.h"

#define JGKEMOKPEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB66450)

inline static constexpr unsigned int JGKEMOKPEBK_TypeDefinitionIndex = 42277;

	class JGKEMOKPEBK : public ::System::Object
	{
	public:
		::FMNFBBPPCNN MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEMOKPEBK_CTOR_OFFSET))(this);
		}

	};
