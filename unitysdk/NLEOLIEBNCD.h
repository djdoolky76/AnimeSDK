#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define NLEOLIEBNCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC657A0)
#define NLEOLIEBNCD_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBC650B0)

	class NLEOLIEBNCD : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEOLIEBNCD_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + NLEOLIEBNCD_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
