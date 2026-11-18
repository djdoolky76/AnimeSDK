#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBNFNGEFLNB.h"
#include "unitysdk/KGEKAADAOOJ.h"

class KDPOLJIDDGM;
class KGBFLHNJHHN;

#define EMLODEPOENE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3E24D0)
#define EMLODEPOENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E24C0)

inline static constexpr unsigned int EMLODEPOENE_TypeDefinitionIndex = 93677;

class EMLODEPOENE : public ::LBNFNGEFLNB
{
public:
	::System::Void _ctor(::KGEKAADAOOJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGEKAADAOOJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMLODEPOENE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::KDPOLJIDDGM* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::KDPOLJIDDGM*))((::PBYTE)hIl2Cpp + EMLODEPOENE_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
