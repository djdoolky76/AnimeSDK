#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define HHLKCDOAGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1901DA90)
#define HHLKCDOAGGH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1901D7C0)

inline static constexpr unsigned int HHLKCDOAGGH_TypeDefinitionIndex = 63455;

	class HHLKCDOAGGH : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLKCDOAGGH_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + HHLKCDOAGGH_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
