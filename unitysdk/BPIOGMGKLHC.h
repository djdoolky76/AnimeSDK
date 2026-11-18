#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class HGIDAMPAOGK;
class LOICBEJNBOB;
class PIEEKHPGCJJ;

#define BPIOGMGKLHC_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x76D3B0)
#define BPIOGMGKLHC__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int BPIOGMGKLHC_TypeDefinitionIndex = 65056;

struct alignas(8) BPIOGMGKLHC
{
	::PIEEKHPGCJJ* KAMMHKLKDPE; // 0x10

	::System::Void _ctor(::PIEEKHPGCJJ* CGMNNBDIGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::PIEEKHPGCJJ*))((::PBYTE)hIl2Cpp + BPIOGMGKLHC__CTOR_OFFSET))(this, CGMNNBDIGDJ);
	}

	::HGIDAMPAOGK* PKOGNPKCHHE(::LOICBEJNBOB* KECKGDFIALJ)
	{
		return ((::HGIDAMPAOGK*(*)(::PVOID, ::LOICBEJNBOB*))((::PBYTE)hIl2Cpp + BPIOGMGKLHC_PKOGNPKCHHE_OFFSET))(this, KECKGDFIALJ);
	}
};
