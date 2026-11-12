#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define DKHHGOACFFO_CTOR_OFFSET UNITYSDK_OFFSET(0xFFE61D0)
#define DKHHGOACFFO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xFFE5F90)

inline static constexpr unsigned int DKHHGOACFFO_TypeDefinitionIndex = 79445;

	class DKHHGOACFFO : public ::AKGFIFMIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHHGOACFFO_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHHGOACFFO_KIGBILLGNOH_OFFSET))(this);
		}

	};
