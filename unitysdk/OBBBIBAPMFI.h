#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKAFFDDGAFL.h"
#include "unitysdk/CDCBFKAPBEL.h"

class BDLDAFPPGBG;
class KGBFLHNJHHN;

#define OBBBIBAPMFI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DCA1DA0)
#define OBBBIBAPMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1D90)

inline static constexpr unsigned int OBBBIBAPMFI_TypeDefinitionIndex = 93853;

class OBBBIBAPMFI : public ::IKAFFDDGAFL
{
public:
	::System::Void _ctor(::CDCBFKAPBEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDCBFKAPBEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OBBBIBAPMFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::BDLDAFPPGBG* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::BDLDAFPPGBG*))((::PBYTE)hIl2Cpp + OBBBIBAPMFI_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
