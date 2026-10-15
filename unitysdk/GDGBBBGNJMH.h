#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHGNCBKMHLC.h"

#define GDGBBBGNJMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1599BF20)
#define GDGBBBGNJMH_JGLAJNNIHPG_OFFSET UNITYSDK_OFFSET(0x1599BBF0)

inline static constexpr unsigned int GDGBBBGNJMH_TypeDefinitionIndex = 62443;

	class GDGBBBGNJMH : public ::HHGNCBKMHLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGBBBGNJMH_CTOR_OFFSET))(this);
		}

		::System::Boolean JGLAJNNIHPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGBBBGNJMH_JGLAJNNIHPG_OFFSET))(this);
		}

	};
