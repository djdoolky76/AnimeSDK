#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLNBEGLIJE.h"

class CAOKACBLMBH;

#define BLCEGLGJOGJ_IDFLCPHBBDJ_OFFSET UNITYSDK_OFFSET(0x15080D20)
#define BLCEGLGJOGJ_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x15080880)
#define BLCEGLGJOGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15080D10)

inline static constexpr unsigned int BLCEGLGJOGJ_TypeDefinitionIndex = 45718;

class BLCEGLGJOGJ : public ::DGLNBEGLIJE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCEGLGJOGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + BLCEGLGJOGJ_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::Boolean IDFLCPHBBDJ(::CAOKACBLMBH* MIALFKCCCPI, ::System::Int32& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + BLCEGLGJOGJ_IDFLCPHBBDJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
