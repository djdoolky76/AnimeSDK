#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMAJPKBIIH.h"
#include "unitysdk/JHFOOCNCPLG.h"

class FMACGBCPMCM;
class KGBFLHNJHHN;

#define KHJFMDLPNHO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DC99230)
#define KHJFMDLPNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC99220)

inline static constexpr unsigned int KHJFMDLPNHO_TypeDefinitionIndex = 94282;

class KHJFMDLPNHO : public ::BAMAJPKBIIH
{
public:
	::System::Void _ctor(::JHFOOCNCPLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHFOOCNCPLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHJFMDLPNHO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::FMACGBCPMCM* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMACGBCPMCM*))((::PBYTE)hIl2Cpp + KHJFMDLPNHO_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
