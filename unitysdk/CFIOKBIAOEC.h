#pragma once
#include "unitysdk/unitysdk.h"

#define CFIOKBIAOEC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC49E40)

inline static constexpr unsigned int CFIOKBIAOEC_TypeDefinitionIndex = 59029;

	class CFIOKBIAOEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIOKBIAOEC_CTOR_OFFSET))(this);
		}

	};
