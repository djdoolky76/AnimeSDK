#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define LMFAIPPPMPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB77CE20)
#define LMFAIPPPMPN_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB77C950)

inline static constexpr unsigned int LMFAIPPPMPN_TypeDefinitionIndex = 62042;

	class LMFAIPPPMPN : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFAIPPPMPN_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + LMFAIPPPMPN_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
