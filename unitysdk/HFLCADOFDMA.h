#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define HFLCADOFDMA_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD0020)
#define HFLCADOFDMA_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x16BCFFE0)

inline static constexpr unsigned int HFLCADOFDMA_TypeDefinitionIndex = 63718;

	class HFLCADOFDMA : public ::ILPPBGLJABD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLCADOFDMA_CTOR_OFFSET))(this);
		}

		::System::Boolean OPMHNOIKBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLCADOFDMA_OPMHNOIKBGA_OFFSET))(this);
		}

	};
