#pragma once
#include "unitysdk/unitysdk.h"

#define OKDDAPEKFJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBECC2A0)
#define OKDDAPEKFJH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBECC300)

inline static constexpr unsigned int OKDDAPEKFJH_TypeDefinitionIndex = 49417;

	class OKDDAPEKFJH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDDAPEKFJH_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDDAPEKFJH_HKKFFCBJOKM_OFFSET))(this);
		}

	};
