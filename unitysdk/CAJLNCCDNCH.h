#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define CAJLNCCDNCH_CTOR_OFFSET UNITYSDK_OFFSET(0xC480490)
#define CAJLNCCDNCH_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC4804A0)

inline static constexpr unsigned int CAJLNCCDNCH_TypeDefinitionIndex = 74843;

	class CAJLNCCDNCH : public ::IAJLELNJPEA
	{
	public:
		::System::UInt32 IAADOLHKODN; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAJLNCCDNCH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJLNCCDNCH_KFGJEKJHIMB_OFFSET))(this);
		}

	};
