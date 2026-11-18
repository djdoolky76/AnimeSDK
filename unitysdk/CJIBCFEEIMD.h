#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class IBGOGDAEGIK;
class NLNIIPDCABP;

#define CJIBCFEEIMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7D6910)
#define CJIBCFEEIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x7D6850)

inline static constexpr unsigned int CJIBCFEEIMD_TypeDefinitionIndex = 58628;

struct alignas(8) CJIBCFEEIMD
{
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x10
	::System::Boolean ANDIDJNLNCG; // 0x18

	::System::Void _ctor(::NLNIIPDCABP* FNFNDIBMPDE, ::IBGOGDAEGIK* NCFAOKGGCCD)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::IBGOGDAEGIK*))((::PBYTE)hIl2Cpp + CJIBCFEEIMD__CTOR_OFFSET))(this, FNFNDIBMPDE, NCFAOKGGCCD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIBCFEEIMD_DISPOSE_OFFSET))(this);
	}
};
