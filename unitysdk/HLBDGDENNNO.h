#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCBEECHCNPO.h"
#include "unitysdk/FDPLLNPBIEO.h"

class COHJPJLKHMC;
class KGBFLHNJHHN;

#define HLBDGDENNNO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E766850)
#define HLBDGDENNNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E766840)

inline static constexpr unsigned int HLBDGDENNNO_TypeDefinitionIndex = 94652;

class HLBDGDENNNO : public ::NCBEECHCNPO
{
public:
	::System::Void _ctor(::FDPLLNPBIEO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDPLLNPBIEO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HLBDGDENNNO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::COHJPJLKHMC* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::COHJPJLKHMC*))((::PBYTE)hIl2Cpp + HLBDGDENNNO_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
