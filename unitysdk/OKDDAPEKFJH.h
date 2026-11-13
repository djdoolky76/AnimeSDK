#pragma once
#include "unitysdk/unitysdk.h"

#define OKDDAPEKFJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1786F0E0)
#define OKDDAPEKFJH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1786F140)

inline static constexpr unsigned int OKDDAPEKFJH_TypeDefinitionIndex = 50493;

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
