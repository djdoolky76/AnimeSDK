#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define MPCKAGIBIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B220DD0)
#define MPCKAGIBIBD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1B220D10)

inline static constexpr unsigned int MPCKAGIBIBD_TypeDefinitionIndex = 77168;

	class MPCKAGIBIBD : public ::IAJLELNJPEA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKAGIBIBD_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKAGIBIBD_KFGJEKJHIMB_OFFSET))(this);
		}

	};
