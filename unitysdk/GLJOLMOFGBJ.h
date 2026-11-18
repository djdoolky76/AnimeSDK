#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGLIOBKIFHA.h"
#include "unitysdk/LAHKEFCOJFI.h"

class HEAELOECIJH;
class KGBFLHNJHHN;

#define GLJOLMOFGBJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E4D4450)
#define GLJOLMOFGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D4440)

inline static constexpr unsigned int GLJOLMOFGBJ_TypeDefinitionIndex = 93586;

class GLJOLMOFGBJ : public ::MGLIOBKIFHA
{
public:
	::System::Void _ctor(::LAHKEFCOJFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LAHKEFCOJFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLJOLMOFGBJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::HEAELOECIJH* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::HEAELOECIJH*))((::PBYTE)hIl2Cpp + GLJOLMOFGBJ_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
