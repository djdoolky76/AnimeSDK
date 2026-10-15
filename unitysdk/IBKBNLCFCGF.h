#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define IBKBNLCFCGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3CB60)
#define IBKBNLCFCGF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15E3CB70)

inline static constexpr unsigned int IBKBNLCFCGF_TypeDefinitionIndex = 74846;

	class IBKBNLCFCGF : public ::IAJLELNJPEA
	{
	public:
		::System::UInt32 ELIAFFHAABN; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBKBNLCFCGF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKBNLCFCGF_KFGJEKJHIMB_OFFSET))(this);
		}

	};
