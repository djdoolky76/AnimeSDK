#pragma once
#include "unitysdk/unitysdk.h"

#define BCGANHPJODA_CTOR_OFFSET UNITYSDK_OFFSET(0x1709F550)
#define BCGANHPJODA_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1709F410)

inline static constexpr unsigned int BCGANHPJODA_TypeDefinitionIndex = 71693;

	class BCGANHPJODA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGANHPJODA_CTOR_OFFSET))(this);
		}

		::System::Void InitInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGANHPJODA_INITINTERNAL_OFFSET))(this);
		}

	};
