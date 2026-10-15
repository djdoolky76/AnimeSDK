#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFPEEBKPEIO.h"

#define MHBMAJKHALN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BC790)

inline static constexpr unsigned int MHBMAJKHALN_TypeDefinitionIndex = 41438;

	class MHBMAJKHALN : public ::LFPEEBKPEIO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBMAJKHALN_CTOR_OFFSET))(this);
		}

	};
