#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLPIGMJAPFA.h"
#include "unitysdk/INGJIKJPBLM.h"

class GJDLJKGIINI;
class KGBFLHNJHHN;

#define FCMLNKHCHNA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9F9780)
#define FCMLNKHCHNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F9770)

inline static constexpr unsigned int FCMLNKHCHNA_TypeDefinitionIndex = 93789;

class FCMLNKHCHNA : public ::JLPIGMJAPFA
{
public:
	::System::Void _ctor(::INGJIKJPBLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INGJIKJPBLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FCMLNKHCHNA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::GJDLJKGIINI* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::GJDLJKGIINI*))((::PBYTE)hIl2Cpp + FCMLNKHCHNA_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
