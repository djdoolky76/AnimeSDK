#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define CIDGMFLIPMH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF66190)
#define CIDGMFLIPMH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCF65E70)

inline static constexpr unsigned int CIDGMFLIPMH_TypeDefinitionIndex = 62045;

	class CIDGMFLIPMH : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDGMFLIPMH_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + CIDGMFLIPMH_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
