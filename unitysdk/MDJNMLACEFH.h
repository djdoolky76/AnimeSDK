#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define MDJNMLACEFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A6450)
#define MDJNMLACEFH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB8A5F70)

inline static constexpr unsigned int MDJNMLACEFH_TypeDefinitionIndex = 62053;

	class MDJNMLACEFH : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJNMLACEFH_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + MDJNMLACEFH_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
