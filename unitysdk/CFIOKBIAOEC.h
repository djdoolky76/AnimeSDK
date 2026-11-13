#pragma once
#include "unitysdk/unitysdk.h"

#define CFIOKBIAOEC_CTOR_OFFSET UNITYSDK_OFFSET(0x17822BD0)

inline static constexpr unsigned int CFIOKBIAOEC_TypeDefinitionIndex = 60304;

	class CFIOKBIAOEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIOKBIAOEC_CTOR_OFFSET))(this);
		}

	};
