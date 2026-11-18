#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIDCFKGHKAL.h"
#include "unitysdk/OCBBDPAAIPI.h"

class HNDIGLHMODF;
class KGBFLHNJHHN;

#define HOEFIAIGAMJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E23B0F0)
#define HOEFIAIGAMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23B0E0)

inline static constexpr unsigned int HOEFIAIGAMJ_TypeDefinitionIndex = 94288;

class HOEFIAIGAMJ : public ::DIDCFKGHKAL
{
public:
	::System::Void _ctor(::OCBBDPAAIPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OCBBDPAAIPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HOEFIAIGAMJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::HNDIGLHMODF* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNDIGLHMODF*))((::PBYTE)hIl2Cpp + HOEFIAIGAMJ_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
