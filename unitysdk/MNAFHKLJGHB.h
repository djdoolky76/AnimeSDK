#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define MNAFHKLJGHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E22A0)
#define MNAFHKLJGHB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB9E1D80)

	class MNAFHKLJGHB : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAFHKLJGHB_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + MNAFHKLJGHB_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
