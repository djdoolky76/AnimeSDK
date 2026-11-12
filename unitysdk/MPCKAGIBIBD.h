#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define MPCKAGIBIBD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F8030)
#define MPCKAGIBIBD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC2F7F70)

inline static constexpr unsigned int MPCKAGIBIBD_TypeDefinitionIndex = 77169;

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
