#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"

#define AOHCPPHPOLK_CTOR_OFFSET UNITYSDK_OFFSET(0x158ACBC0)

	class AOHCPPHPOLK : public ::System::Object
	{
	public:
		::FKNKNLGMACL IAHCEGHHCKB; // 0x10
		::System::Void _ctor(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + AOHCPPHPOLK_CTOR_OFFSET))(this, a1);
		}

	};
