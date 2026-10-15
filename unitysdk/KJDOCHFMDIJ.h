#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define KJDOCHFMDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4406A0)
#define KJDOCHFMDIJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB4406B0)

inline static constexpr unsigned int KJDOCHFMDIJ_TypeDefinitionIndex = 74842;

	class KJDOCHFMDIJ : public ::IAJLELNJPEA
	{
	public:
		::System::UInt32 OFEEMOCGHCA; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJDOCHFMDIJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDOCHFMDIJ_KFGJEKJHIMB_OFFSET))(this);
		}

	};
