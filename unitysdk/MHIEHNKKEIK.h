#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCGDAHNGMFK.h"
#include "unitysdk/IGLDPLCELOD.h"

class JAJFILAENCA;
class KGBFLHNJHHN;

#define MHIEHNKKEIK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3EF7E0)
#define MHIEHNKKEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF7D0)

inline static constexpr unsigned int MHIEHNKKEIK_TypeDefinitionIndex = 93706;

class MHIEHNKKEIK : public ::FCGDAHNGMFK
{
public:
	::System::Void _ctor(::IGLDPLCELOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGLDPLCELOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHIEHNKKEIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::JAJFILAENCA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::JAJFILAENCA*))((::PBYTE)hIl2Cpp + MHIEHNKKEIK_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
