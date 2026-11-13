#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFIGBPHLHI.h"

#define FJMIODJLOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA82BC0)

inline static constexpr unsigned int FJMIODJLOII_TypeDefinitionIndex = 75613;

	class FJMIODJLOII : public ::CLFIGBPHLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMIODJLOII_CTOR_OFFSET))(this);
		}

	};
