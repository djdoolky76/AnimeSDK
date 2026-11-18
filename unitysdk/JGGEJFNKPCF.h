#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMMBAPEJJHA.h"
#include "unitysdk/DGCPHIEDHNF.h"

class KGBFLHNJHHN;
class POMJNKIOCFG;

#define JGGEJFNKPCF_BFHMNNFHCHI_OFFSET UNITYSDK_OFFSET(0x1CCC23B0)
#define JGGEJFNKPCF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCC22C0)
#define JGGEJFNKPCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC22B0)

inline static constexpr unsigned int JGGEJFNKPCF_TypeDefinitionIndex = 93712;

class JGGEJFNKPCF : public ::NMMBAPEJJHA
{
public:
	::System::Void _ctor(::DGCPHIEDHNF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DGCPHIEDHNF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGGEJFNKPCF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::POMJNKIOCFG* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::POMJNKIOCFG*))((::PBYTE)hIl2Cpp + JGGEJFNKPCF_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}

	::System::Int32 BFHMNNFHCHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGEJFNKPCF_BFHMNNFHCHI_OFFSET))(this);
	}
};
