#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define MNAFHKLJGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1890BCA0)
#define MNAFHKLJGHB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1890B770)

inline static constexpr unsigned int MNAFHKLJGHB_TypeDefinitionIndex = 63461;

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
