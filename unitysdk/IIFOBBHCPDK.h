#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMMDKIBILJE.h"

#define IIFOBBHCPDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1642DC90)

inline static constexpr unsigned int IIFOBBHCPDK_TypeDefinitionIndex = 53546;

	class IIFOBBHCPDK : public ::OMMDKIBILJE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFOBBHCPDK_CTOR_OFFSET))(this);
		}

	};
