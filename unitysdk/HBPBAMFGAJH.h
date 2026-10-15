#pragma once
#include "unitysdk/unitysdk.h"

#define HBPBAMFGAJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C13AF0)

inline static constexpr unsigned int HBPBAMFGAJH_TypeDefinitionIndex = 75832;

	class HBPBAMFGAJH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPBAMFGAJH_CTOR_OFFSET))(this);
		}

	};
