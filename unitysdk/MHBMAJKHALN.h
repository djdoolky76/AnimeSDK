#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFPEEBKPEIO.h"

#define MHBMAJKHALN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63FC70)

inline static constexpr unsigned int MHBMAJKHALN_TypeDefinitionIndex = 42413;

	class MHBMAJKHALN : public ::LFPEEBKPEIO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMAJKHALN_CTOR_OFFSET))(this);
		}

	};
